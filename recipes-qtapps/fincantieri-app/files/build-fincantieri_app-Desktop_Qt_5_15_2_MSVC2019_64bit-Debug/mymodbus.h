#ifndef MODBUS_TCP_H
#define MODBUS_TCP_H

#include <QObject>
#include <QModbusDataUnit>
#include <QLoggingCategory>

#include <QtSerialPort/QSerialPort>

class QModbusDevice;
class QModbusClient;
class QModbusReply;

class modbusQtSignals;
class modbusQtMessages;

Q_DECLARE_LOGGING_CATEGORY(rgm_cantools_modbus)

class MyModbus : public QObject
{
    Q_OBJECT

public:
    explicit MyModbus(QObject *parent = nullptr);
    ~MyModbus();

private:
    QModbusDataUnit readRequest(uint startAddress, quint16 numberOfEntries, QModbusDataUnit::RegisterType registerType) const;
    QModbusDataUnit writeRequest() const;

signals:
    void on_reply(QModbusDataUnit &reply);

public slots:
    virtual void cmdConnect() = 0;

public slots:
    void cmdDisconnect();

    void cmdRead(const uint stationAddress, const uint frameId, const uint wlength);
    void cmdReadWrite(int severAddress, int startAddress, quint16 numberOfEntries, QModbusDataUnit::RegisterType registerType);
    void cmdWrite(const QModbusDataUnit &reply, uint stationAddress);

    void onReadReady();

protected slots:
    void onModbusStateChanged(int state);

public:
    static MyModbus* factory_pattern(QString id);

protected:
    QModbusReply *lastRequest = nullptr;
    QModbusDevice *modbusDevice = nullptr;

    int m_responseTime = 1000;
    int m_numberOfRetries = 3;
    bool i_am_server;
    
public:
    modbusQtSignals *signals_store;
    modbusQtMessages *messages_store;
};

class TcpModbus : public MyModbus
{
    Q_OBJECT

public:
    explicit TcpModbus(QString url, QObject *parent = nullptr);

public slots:
    void cmdConnect();

private:
    QString m_url; // "169.254.1.1:502";
};

class SerialModbus : public MyModbus
{
    Q_OBJECT

public:
    explicit SerialModbus(QObject *parent = nullptr);

public slots:
    void cmdConnect();

private:
    int m_parity = QSerialPort::EvenParity;
    int m_baud = QSerialPort::Baud19200;
    int m_dataBits = QSerialPort::Data8;
    int m_stopBits = QSerialPort::OneStop;
};

#endif // MODBUS_TCP_H
