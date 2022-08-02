#include "mycan.h"
#include <QString>
#include <QVariant>
#include <assert.h>
#include <QDebug>

#include "cantools_qt.h"

MyCan *can0;

MyCan::MyCan(const QString plugin, QString device, quint32 bitrate, const int sniffer_max_size): m_plugin(plugin), dataList(nullptr, sniffer_max_size) {
    this->m_device = device;
    this->m_bitrate = bitrate;

    // plugin must be available
    qDebug() << "plugins available: " << QCanBus::instance()->plugins();
    Q_ASSERT(QCanBus::instance()->plugins().contains((this->m_plugin)));
    
    signals_store = &cantoolsQtSignals::instance();
    messages_store = &cantoolsQtMessages::instance();
}

bool MyCan::postconnect() {
    QString errorString;

    Q_ASSERT(QCanBus::instance()->plugins().contains(m_plugin));
#if QT_VERSION >= QT_VERSION_CHECK(5, 9, 0)
    QList<QCanBusDeviceInfo> interfaces;
    interfaces = QCanBus::instance()->availableDevices(m_plugin);
    if (m_device == "") {
        Q_ASSERT(!interfaces.isEmpty());
        if (interfaces.isEmpty()) {
            qCritical() << "Could not find CAN adapter!";
            return false;
        }
        m_device = qAsConst(interfaces).first().name();
    } else {
        for (const QCanBusDeviceInfo &info : qAsConst(interfaces)) {
            if (info.name() == m_device) break;
        }
    }
#endif

    this->m_canDevice = QCanBus::instance()->createDevice(
                m_plugin,
                m_device,
                &errorString
                );

    qCInfo(rgm_cantools_cantools) << "MyCan::postconnect: " << errorString;

    if (this->m_canDevice == nullptr) {
        qCritical() << "Cound not connect to CAN device";
        return false;
    }

#ifndef __linux__
    // not supported by socketcan => set by OS during instantiation of can0 device
    // m_canDevice->setConfigurationParameter(QCanBusDevice::DataBitRateKey, QVariant(500000));
    m_canDevice->setConfigurationParameter(QCanBusDevice::BitRateKey, QVariant(this->m_bitrate));
    m_canDevice->setConfigurationParameter(QCanBusDevice::CanFdKey, QVariant(false));
#endif

    // m_status->setText(tr("Error creating device '%1', reason: '%2'").arg(p.pluginName).arg(errorString));
    connect(m_canDevice, &QCanBusDevice::errorOccurred, this, &MyCan::processErrors);
    connect(m_canDevice, &QCanBusDevice::framesReceived, this, &MyCan::processReceivedFrames);
    connect(m_canDevice, &QCanBusDevice::framesWritten, this, &MyCan::processFramesWritten);

    emit before_connect_device(m_canDevice);

    if (!m_canDevice->connectDevice()) {
        qCritical() <<  tr("Connection error: %1").arg(m_canDevice->errorString());
        delete m_canDevice;
        m_canDevice = nullptr;
        return false;
    }

    QVectorIterator<int> key(m_canDevice->configurationKeys());
    while (key.hasNext()) {
        int k = key.next();
        qCInfo(rgm_cantools_cantools) << k << ": " << m_canDevice->configurationParameter(k);
    }

    qCInfo(rgm_cantools_cantools) << "CAN0 successfully connected!";
    //qCInfo(rgm_cantools_cantools) << "Bus status: " << m_canDevice->busStatus();
    qCInfo(rgm_cantools_cantools) << "Bus state: " << m_canDevice->state();

    return true;
}

void MyCan::processErrors(QCanBusDevice::CanBusError error) const
{
    switch (error) {
    case QCanBusDevice::ReadError:
    case QCanBusDevice::WriteError:
    case QCanBusDevice::ConnectionError:
    case QCanBusDevice::ConfigurationError:
    case QCanBusDevice::UnknownError:
        // m_status->setText(m_canDevice->errorString());
        qCInfo(rgm_cantools_cantools) << "MyCan::processErrors: " << error << ", " << m_canDevice->errorString();
        break;
    default:
        break;
    }
}

void MyCan::processFramesWritten(qint64 /*count*/)
{
    //m_numberFramesWritten += count;
    //m_written->setText(tr("%1 frames written").arg(m_numberFramesWritten));
}

#if QT_VERSION >= QT_VERSION_CHECK(5, 9, 0)
static QString frameFlags(const QCanBusFrame &frame)
{
    QString result = QLatin1String(" --- ");

    if (frame.hasBitrateSwitch())
        result[1] = QLatin1Char('B');
    if (frame.hasErrorStateIndicator())
        result[2] = QLatin1Char('E');
    if (frame.hasLocalEcho())
        result[3] = QLatin1Char('L');

    return result;
}
#endif

void MyCan::processReceivedFrames()
{
    if (!m_canDevice)
        return;

    while (m_canDevice->framesAvailable()) {
        const QCanBusFrame frame = m_canDevice->readFrame();

        // qDebug() << frame.toString();

        /*
        QString view;
        if (frame.frameType() == QCanBusFrame::ErrorFrame)
            view = m_canDevice->interpretErrorFrame(frame);
        else
            view = frame.toString();
        */

        emit on_receive(frame);

        if (dataList.max_size > 0) {
            const QString time = QString::fromLatin1("%1.%2  ")
                    .arg(frame.timeStamp().seconds(), 10, 10, QLatin1Char(' '))
                    .arg(frame.timeStamp().microSeconds() / 100, 4, 10, QLatin1Char('0'));

            dataList.append(time, frame.frameId(), frame.payload().length(), frame.payload().toHex());
        }
    }
}

void MyCan::sendFrame(const QCanBusFrame &frame) const
{
    if (!m_canDevice)
        return;

    qDebug() << frame.toString();

    m_canDevice->writeFrame(frame);
}
