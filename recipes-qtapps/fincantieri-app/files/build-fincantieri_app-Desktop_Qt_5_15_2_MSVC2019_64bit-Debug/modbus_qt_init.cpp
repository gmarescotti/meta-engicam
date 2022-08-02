#include "mymodbus.h"
#include "modbus_qt.h"

#include <QModbusReply>

#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QLoggingCategory>

#include <QObject>
#include <QTimer>
#include <QDebug>

extern MyModbus *modbus_station;

/*
    void cmdReadNext()
    {
        QModbusDataUnit::RegisterType registerType;
        uint startAddress = index.value()->m_frameId;
        const uint stationAddress = index.value()->m_stationAddress;

        if (index != map.end()) index++;

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

        modbus.cmdRead(stationAddress, startAddress, 2, registerType);
    }
*/

// static modbusQtSignals *modbus;
// static modbusQtMessages *messages_store;

/**
 * init modbus driver
 * 
 * ip: client addess with port or empty if server (i.e. "169.254.1.1:502")
 */
MyModbus *modbus_qt_init(QQmlApplicationEngine *engine, QString ip="")
{

    if (modbus_station == NULL)
        modbus_station = MyModbus::factory_pattern(ip); // new TcpModbus(ip);

    // modbus = &modbusQtSignals::instance();
    
    if (engine) {
        engine->rootContext()->setContextProperty("modbus", modbus_station->signals_store);
    }

    QObject::connect(modbus_station, &TcpModbus::on_reply, modbus_station->messages_store, &modbusQtMessages::can_receive_frame_callback);
    QObject::connect(modbus_station->messages_store, &modbusQtMessages::sendFrame, modbus_station, &TcpModbus::cmdWrite);
    QObject::connect(modbus_station->messages_store, &modbusQtMessages::update, modbus_station, &TcpModbus::cmdRead);

    if (engine) {
        QObject::connect(engine, &QQmlApplicationEngine::objectCreated, modbus_station, &MyModbus::cmdConnect);
    
        QObject::connect(engine, &QQmlApplicationEngine::objectCreated, [engine]() {
                QTimer *timer = new QTimer(engine);
                QObject::connect(timer, &QTimer::timeout, modbus_station->messages_store, &modbusQtMessages::periodic_check_validity);
                timer->start(1000);
        });
    } else {
        modbus_station->cmdConnect();
    }
    
    return modbus_station;
}
