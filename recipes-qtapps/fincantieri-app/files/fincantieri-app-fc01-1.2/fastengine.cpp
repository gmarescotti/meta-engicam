#include "mycan.h"
#include "cantools_qt.h"

#include <QLoggingCategory>

#include <QObject>
#include <QTimer>
#include <QDebug>

/**
 * @brief can0
 * deve stare globale altrimenti non funziona (forse viene deallocato dal compilatore?)
 */
extern MyCan *can0;

static cantoolsQtSignals *cantools;
static cantoolsQtMessages *messages_store;

void fast_cantools_qt_init(QString plugin, QString device, quint32 bitrate, const int sniffer_max_size=1000)
{

    if (can0 == NULL)
        can0 = new MyCan(plugin, device, bitrate, sniffer_max_size);

    cantools = &cantoolsQtSignals::instance();
    messages_store = &cantoolsQtMessages::instance();

    // MOved to log file => QLoggingCategory::setFilterRules(QStringLiteral("qt.canbus* = true"));

//    engine->rootContext()->setContextProperty("cantools", cantools);
//    engine->rootContext()->setContextProperty("can_sniffer_model", &can0->dataList);

    QObject::connect(can0, &MyCan::on_receive, messages_store, &cantoolsQtMessages::can_receive_frame_callback);
    QObject::connect(messages_store, &cantoolsQtMessages::sendFrame, can0, &MyCan::sendFrame);

    can0->postconnect();

//    QObject::connect(engine, &QQmlApplicationEngine::objectCreated, can0, &MyCan::postconnect);
//    QObject::connect(engine, &QQmlApplicationEngine::objectCreated, [engine]() {
//        QTimer *timer = new QTimer(engine);
//        QObject::connect(timer, &QTimer::timeout, messages_store, &cantoolsQtMessages::periodic_check_validity);
//        timer->start(1000);
//    });
}

#include "mymodbus.h"
#include "modbus_qt.h"

#include <QModbusReply>

#include <QLoggingCategory>

#include <QObject>
#include <QTimer>
#include <QDebug>

extern MyModbus *modbus_station;

static modbusQtSignals *modbus;
static modbusQtMessages *modbus_messages_store;

/**
 * init modbus driver
 *
 * ip: client addess with port or empty if server (i.e. "169.254.1.1:502")
 */
void fast_modbus_qt_init(QString ip="")
{

    if (modbus_station == NULL)
        modbus_station = MyModbus::factory_pattern(ip); // new TcpModbus(ip);

    modbus = &modbusQtSignals::instance();
    modbus_messages_store = &modbusQtMessages::instance();

//    engine->rootContext()->setContextProperty("modbus", modbus);

    QObject::connect(modbus_station, &TcpModbus::on_reply, modbus_messages_store, &modbusQtMessages::can_receive_frame_callback);
    QObject::connect(modbus_messages_store, &modbusQtMessages::sendFrame, modbus_station, &TcpModbus::cmdWrite);
    QObject::connect(modbus_messages_store, &modbusQtMessages::update, modbus_station, &TcpModbus::cmdRead);

    modbus_station->cmdConnect();

//    QObject::connect(engine, &QQmlApplicationEngine::objectCreated, modbus_station, &MyModbus::cmdConnect);
//    QObject::connect(engine, &QQmlApplicationEngine::objectCreated, [engine]() {
//            QTimer *timer = new QTimer(engine);
//            QObject::connect(timer, &QTimer::timeout, modbus_messages_store, &modbusQtMessages::periodic_check_validity);
//            timer->start(1000);
//    });
}

void lega(QVariantSignalcantools *from, QVariantSignalmodbus *to) {
    qDebug() << "lega: " << from->m_name << " to " << to->m_name;

    QObject::connect(from, &QVariantSignalcantools::changed, [from, to]() {
        to->setProperty("smart_val", from->m_val);
        qInfo() << "can=>mod: changed " << from << " to " << to;
    });
    QObject::connect(to, &QVariantSignalmodbus::changed, [from, to]() {
        qInfo() << "mod=>can: changed " << from->m_name << "(" << from->m_val << ")" << " to " << to->m_name << "(" << to->m_val << ")";
        from->setProperty("val", to->m_val);
    });
}

void connect_all_fastqml(bool noTimer) {
    lega(cantools->m_dc_dc1_running, modbus->m_battery_dcdc_running);
    lega(cantools->m_dc_dc1_failure, modbus->m_battery_dcdc_failure);
    lega(cantools->m_dcdc_reset, modbus->m_dcdc_reset2);
    lega(cantools->m_dc_dc_sta2_uls_act, modbus->m_dcdc_voltage);
    lega(cantools->m_dc_dc_sta2_ils_act, modbus->m_batt_dcdc_current);
    lega(cantools->m_dc_dc1_power_act, modbus->m_batt_dcdc_power);
    lega(cantools->m_power_limitation, modbus->m_batt_dcdc_power_limitation);
    lega(cantools->m_dc_dc2_pwr_unit_temp, modbus->m_dcdc_pwr_unit_temperature);
    lega(cantools->m_dc_dc2_max_avlb_pos_current, modbus->m_dcdc_max_available_dis_current);
    lega(cantools->m_dc_dc2_max_avlb_neg_current, modbus->m_dcdc_max_available_ch_current);
    lega(cantools->m_dc_dc2_max_avlb_pwr, modbus->m_dcdc_max_available_power);
    lega(cantools->m_dc_dc_sta2_uls_act, modbus->m_batt_voltage);
    lega(cantools->m_dc_dc_sta2_ils_act, modbus->m_batt_current);
    lega(cantools->m_dc_dc_sta2_uhs_act, modbus->m_dc_bus_voltage);
    lega(cantools->m_dc_dc_sta2_ihs_act, modbus->m_dc_bus_current);
    lega(cantools->m_dc_dc4_battery_soc, modbus->m_battery_status);
    lega(cantools->m_dc_dc1_status, modbus->m_dcdc_status);
    lega(cantools->m_dc_dc3_err_word1, modbus->m_dcdc_error_word_1);
    lega(cantools->m_dc_dc3_err_word2, modbus->m_dcdc_error_word_2);
    lega(cantools->m_dc_dc4_warn_word1, modbus->m_dcdc_warning_word_1);
    lega(cantools->m_dc_dc4_warn_word2, modbus->m_dcdc_warning_word_2);
    lega(cantools->m_dc_dc1_status_word1, modbus->m_dcdc_status_word_1);

    if (!noTimer) {
        QTimer *timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, []() {
            messages_store->modbus_ctrl->send_frame();
        });
        timer->start(500);
    }
}
