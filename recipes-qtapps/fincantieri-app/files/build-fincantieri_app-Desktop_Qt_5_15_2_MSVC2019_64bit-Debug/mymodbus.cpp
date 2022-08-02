#include "mymodbus.h"

#include <QModbusTcpClient>
#include <QModbusTcpServer>
#include <QModbusRtuSerialMaster>
#include <QStandardItemModel>
#include <QUrl>
#include <QDebug>
#include <QObject>
#include <assert.h>

#include "modbus_qt.h"

Q_DECLARE_LOGGING_CATEGORY(rgm_cantools_modbus)

MyModbus *modbus_station;

MyModbus::MyModbus(QObject *parent)
    : QObject(parent)
{
    signals_store = &modbusQtSignals::instance();
    messages_store = &modbusQtMessages::instance();
}

MyModbus::~MyModbus()
{
    if (modbusDevice) modbusDevice->disconnectDevice();
    delete modbusDevice;
}

void MyModbus::cmdDisconnect()
{
    qDebug() << "MyModbus::cmdDisconnect";

    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        return;
    }
    modbusDevice->disconnectDevice();
}

void MyModbus::onModbusStateChanged(int state)
{
//    bool connected = (state != QModbusDevice::UnconnectedState);
    if (state == QModbusDevice::UnconnectedState)
        qDebug() << "MyModbus::onModbusStateChanged: UnconnectedState";
    else if (state == QModbusDevice::ConnectingState)
        qDebug() << "MyModbus::onModbusStateChanged: ConnectingState";
    else if (state == QModbusDevice::ConnectedState)
        qDebug() << "MyModbus::onModbusStateChanged: ConnectedState";
    else
        qDebug() << "MyModbus::onModbusStateChanged: " << state;
}

/**
 */
void convert_address(uint &startAddress, QModbusDataUnit::RegisterType &registerType)
{
    if (startAddress < 10000) {
        registerType = QModbusDataUnit::Coils;
        startAddress -= 1;
    } else if (startAddress < 20000) {
        registerType = QModbusDataUnit::DiscreteInputs;
        startAddress -= 10001;
    } else if (startAddress < 30000) {
        qCritical() << "startaddress not managed: " << startAddress;
        return;
    } else if (startAddress < 40000) {
        registerType = QModbusDataUnit::InputRegisters;
        startAddress -= 30001;
    } else if (startAddress < 50000) {
        registerType = QModbusDataUnit::HoldingRegisters;
        startAddress -= 40001;
    } else {
        qCritical() << "startaddress too big: " << startAddress;
        return;
    }
}

/**
 * cmrRead: send read request to Server
 * valid only for modbus TCP Client
 */
void MyModbus::cmdRead(const uint stationAddress, const uint frameId, const uint wlength)
{
    if (!modbusDevice)
        return;

    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        if (!modbusDevice->connectDevice()) {
            qDebug() << "TcpModbus::cmdRead retry connect failed!";
            return;
        }
        return;
    }

    if (i_am_server) {
        return; // cmdRead only for clients
    }

    uint serverAddress=stationAddress;
    uint startAddress = frameId; // oh yes address is the frame id!
    QModbusDataUnit::RegisterType registerType;

    convert_address(startAddress, registerType);
    quint16 numberOfEntries=wlength;

    auto *reply = static_cast<QModbusClient *>(modbusDevice)->sendReadRequest(readRequest(startAddress, numberOfEntries, registerType), static_cast<int>(serverAddress));

    if (reply) {
        // qDebug() << "MyModbus::cmdRead: request " << startAddress << ", " << numberOfEntries << ", " << registerType << " sent!";
        if (!reply->isFinished())
            connect(reply, &QModbusReply::finished, this, &MyModbus::onReadReady);
        else {
            qCritical() << "MyModbus::cmdRead: broadcast replies return immediately!";
            delete reply; // broadcast replies return immediately
        }
    } else {
        qCritical() << "MyModbus::cmdRead: reply missing!";
    }
}

void MyModbus::onReadReady()
{
    auto reply = qobject_cast<QModbusReply *>(sender());
    if (!reply) {
        qCritical() << "MyModbus::onReadReady: reply null!";
        return;
    }

    // qDebug() << "MyModbus::onReadReady: message " << reply->serverAddress() << " received: " << reply->errorString();

    if (reply->error() == QModbusDevice::NoError) {
        const QModbusDataUnit unit = reply->result();
        for (int i = 0, total = int(unit.valueCount()); i < total; ++i) {
            const QString entry = tr("Address: %1, Value: %2").arg(unit.startAddress() + i)
                                     .arg(QString::number(unit.value(i),
                                          unit.registerType() <= QModbusDataUnit::Coils ? 10 : 16));
        }
    } else if (reply->error() == QModbusDevice::ProtocolError) {
        qCritical() << "MyModbus::onReadReady: " << reply->errorString();
    }

    auto ref = static_cast<const QModbusDataUnit>(reply->result());
    emit on_reply(ref);

    reply->deleteLater();
}

void MyModbus::cmdWrite(const QModbusDataUnit &writeUnit, uint stationAddress)
{
    qWarning() << "TcpModbus::cmdWrite! " << writeUnit.registerType() << "," << writeUnit.startAddress() << ":" << writeUnit.values();

    if (!modbusDevice)
        return;

    if (i_am_server) {
        static_cast<QModbusServer*>(modbusDevice)->setData(writeUnit);
        return; // nothing to do on server
    }

    // write only on Holding Registers.
    assert (writeUnit.registerType() == QModbusDataUnit::HoldingRegisters);

    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        if (!modbusDevice->connectDevice()) {
            qDebug() << "TcpModbus::cmdWrite retry connect failed!";
            return;
        }
    }

    auto *reply = static_cast<QModbusClient*>(modbusDevice)->sendWriteRequest(writeUnit, stationAddress);

    if (!reply) {
        qCritical() << "MyModbus::cmdWrite: reply null!";
        return;
    }

    if (!reply->isFinished()) {
        connect(reply, &QModbusReply::finished, this, [reply]() {
            if (reply->error() == QModbusDevice::ProtocolError) {
                qCritical() << "MyModbus::cmdWrite: isFinished: " << tr("Write response error: %1 (Mobus exception: 0x%2)")
                                         .arg(reply->errorString()).arg(reply->rawResult().exceptionCode());
            } else if (reply->error() != QModbusDevice::NoError) {
                qCritical() << "MyModbus::cmdWrite: isFinished: " << tr("Write response error: %1 (code: 0x%2)").
                                         arg(reply->errorString()).arg(reply->error(), -1, 16);
            }
            reply->deleteLater();
        });
    } else {
        // broadcast replies return immediately
        reply->deleteLater();
    }
}

void MyModbus::cmdReadWrite(int severAddress, int startAddress, quint16 numberOfEntries, QModbusDataUnit::RegisterType registerType)
{
    if (!modbusDevice)
        return;

    if (modbusDevice->state() != QModbusDevice::ConnectedState) {
        if (!modbusDevice->connectDevice()) {
            qDebug() << "TcpModbus::cmdReadWrite retry connect failed!";
            return;
        }
    }

    QModbusDataUnit writeUnit = writeRequest();
    QModbusDataUnit::RegisterType table = writeUnit.registerType();
    for (int i = 0, total = int(writeUnit.valueCount()); i < total; ++i) {
        if (table == QModbusDataUnit::Coils)
            writeUnit.setValue(i, 10 /*writeModel->m_coils[i + writeUnit.startAddress()]*/);
        else
            writeUnit.setValue(i, 10 /*writeModel->m_holdingRegisters[i + writeUnit.startAddress()]*/);
    }

    if (auto *reply = static_cast<QModbusClient*>(modbusDevice)->sendReadWriteRequest(readRequest(startAddress, numberOfEntries, registerType), writeUnit, severAddress)) {
        if (!reply->isFinished())
            connect(reply, &QModbusReply::finished, this, &MyModbus::onReadReady);
        else
            delete reply; // broadcast replies return immediately
    } else {
//        error
    }
}

QModbusDataUnit MyModbus::readRequest(uint startAddress, quint16 numberOfEntries, QModbusDataUnit::RegisterType registerType) const
{
    return QModbusDataUnit(registerType, startAddress, numberOfEntries);
}

QModbusDataUnit MyModbus::writeRequest() const
{
    const auto table =
        static_cast<QModbusDataUnit::RegisterType>(111 /*ui->writeTable->currentData().toInt()*/);

    int startAddress = 111; // ui->writeAddress->value();
    Q_ASSERT(startAddress >= 0 && startAddress < 10);

    // do not go beyond 10 entries
    quint16 numberOfEntries = 2; // qMin(ui->writeSize->currentText().toUShort(), quint16(10 - startAddress));
    return QModbusDataUnit(table, startAddress, numberOfEntries);
}

/**
 * @brief MyModbus::factory_pattern
 * @param id:
 *  tcp client    = "127.0.0.1:502"
 *  serial client = "COM1", "/dev/ttyS1"
 *  tcp server    = ":502"
 *  serial server = ":COM1", ":/dev/ttyS1"
 * @return
 */
MyModbus* MyModbus::factory_pattern(QString id) {
    bool i_am_tcp;
    MyModbus *ret;

    int isemicolon = id.indexOf(":");
    assert(isemicolon>=0);
    /* int port = */ id.mid(isemicolon+1).toInt(&i_am_tcp, 10);       //

    if (i_am_tcp) {
        if (isemicolon==0) {
            id.prepend("0.0.0.0");
        }
        ret = new TcpModbus(id);
        ret->i_am_server = (isemicolon == 0); // starts with ":"
    } else {
        ret = new SerialModbus();
    }
    return ret;
}

/* ******************************************************************* */

SerialModbus::SerialModbus(QObject *parent)
    : MyModbus(parent)
{
    modbusDevice = new QModbusRtuSerialMaster(this);

    connect(modbusDevice, &QModbusClient::errorOccurred, [](QModbusDevice::Error e) {
        qCritical() << "SerialModbus::SerialModbus: " << e;
    });

    if (!modbusDevice) {
        qCritical() << "SerialModbus::SerialModbus: error!";
    } else {
        connect(modbusDevice, &QModbusClient::stateChanged, this, &SerialModbus::onModbusStateChanged);
    }
}

void SerialModbus::cmdConnect()
{
    if (!modbusDevice)
        return;

    if (modbusDevice->state() == QModbusDevice::ConnectedState) {
        return;
    }

    if (qobject_cast<QModbusClient*>(modbusDevice)) {
        modbusDevice->setConnectionParameter(QModbusDevice::SerialPortNameParameter, "/dev/ttySTM2");
        modbusDevice->setConnectionParameter(QModbusDevice::SerialParityParameter, m_parity);
        modbusDevice->setConnectionParameter(QModbusDevice::SerialBaudRateParameter, m_baud);
        modbusDevice->setConnectionParameter(QModbusDevice::SerialDataBitsParameter, m_dataBits);
        modbusDevice->setConnectionParameter(QModbusDevice::SerialStopBitsParameter, m_stopBits);
    }

    static_cast<QModbusClient*>(modbusDevice)->setTimeout(m_responseTime);
    static_cast<QModbusClient*>(modbusDevice)->setNumberOfRetries(m_numberOfRetries);

    if (!modbusDevice->connectDevice()) {
        qCritical() << "SerialModbus::cmdConnect: " << modbusDevice->errorString();
    }
}

/* ******************************************************************* */

TcpModbus::TcpModbus(QString url, QObject *parent)
    : MyModbus(parent), m_url(url)
{
    if (i_am_server) {
        modbusDevice = new QModbusTcpServer(this);
    } else {
        modbusDevice = new QModbusTcpClient(this);
        connect(modbusDevice, &QModbusClient::errorOccurred, [](QModbusDevice::Error e) {
            qWarning() << "error connecting: " << e;
        });
    }

    if (!modbusDevice) {
        qCritical() << "TcpModbus::TcpModbus!";
    } else {
        connect(modbusDevice, &QModbusDevice::stateChanged, this, &TcpModbus::onModbusStateChanged);
    }
}

void TcpModbus::cmdConnect()
{
    if (!modbusDevice)
        return;

    if (modbusDevice->state() == QModbusDevice::ConnectedState) {
        qDebug() << "TcpModbus::cmdConnect: already connected";
        return;
    }
    const QUrl url = QUrl::fromUserInput(m_url);
    modbusDevice->setConnectionParameter(QModbusDevice::NetworkPortParameter, url.port());
    modbusDevice->setConnectionParameter(QModbusDevice::NetworkAddressParameter, url.host());

    if (!i_am_server) {
        static_cast<QModbusClient*>(modbusDevice)->setTimeout(m_responseTime);
        static_cast<QModbusClient*>(modbusDevice)->setNumberOfRetries(m_numberOfRetries);
    } else {
        extern int global_server_station_address;
        static_cast<QModbusServer*>(modbusDevice)->setServerAddress(global_server_station_address);
    }
    if (!modbusDevice->connectDevice()) {
        qDebug() << "TcpModbus::cmdConnect failed!";
    } else {
        qDebug() << "TcpModbus::cmdConnect: successfully start connection to " << url.host() << ":" << url.port();
    }
    
    
    if (i_am_server) {
        QModbusServer *modbusServer = static_cast<QModbusServer*>(modbusDevice);
        QModbusDataUnitMap reg;
        // reg.insert(QModbusDataUnit::Coils, { QModbusDataUnit::Coils, 0, 10 });
        // reg.insert(QModbusDataUnit::DiscreteInputs, { QModbusDataUnit::DiscreteInputs, 0, 10 });
        // reg.insert(QModbusDataUnit::InputRegisters, { QModbusDataUnit::InputRegisters, 0, 1 });
        // reg.insert(QModbusDataUnit::HoldingRegisters, { QModbusDataUnit::HoldingRegisters, 0, 1 });
        extern void modbus_registers_insertion(QModbusDataUnitMap &reg);
        modbus_registers_insertion(reg);
        modbusServer->setMap(reg);

        // connect(modbusServer, &QModbusServer::dataWritten,
        //         this, &TcpModbus::updateWidgets);

        connect(modbusServer, &QModbusServer::dataWritten, [modbusServer](QModbusDataUnit::RegisterType table, int address, int size) {
            QModbusDataUnit du(table, address, size);
            for (int i=0; i<size; i++) {
                quint16 value;
                modbusServer->data(table, address+i, &value);
                du.setValue(i, value);
            }
            qCDebug(rgm_cantools_modbus)  << "DATAWRITTEN " << du.values() << "( table=" << table << ", address=" << address << ", size=" << size << ")";
            emit modbus_station->on_reply(du);
        });

        connect(modbusDevice, &QModbusServer::stateChanged, [](QModbusDevice::State) {
            qWarning() << "STATECHANGED";
        });
        connect(modbusDevice, &QModbusServer::errorOccurred, [](QModbusDevice::Error) {
            qWarning() << "ERROROCCURRED";
        });

        modbusServer->setValue(QModbusServer::ListenOnlyMode, 0);
        modbusServer->setValue(QModbusServer::DeviceBusy, 0);

        // modbusDevice->setData(QModbusDataUnit::Coils, i, coilButtons.button(i)->isChecked());
        // modbusDevice->setData(QModbusDataUnit::DiscreteInputs, i, discreteButtons.button(i)->isChecked());
        // modbusServer->setData(QModbusDataUnit::InputRegisters, 0, 0);
        // modbusServer->setData(QModbusDataUnit::HoldingRegisters, 0, 0);
        // emit(modbusServer->dataWritten(QModbusDataUnit::HoldingRegisters, 0, 1));
    }
}

