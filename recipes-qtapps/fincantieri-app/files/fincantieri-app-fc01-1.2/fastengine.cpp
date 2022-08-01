#include "fastengine.h"

#include "modbus_qt_init.h"
#include "cantools_qt_init.h"

#include "modbus_qt.h"
#include "cantools_qt.h"

#include <QLoggingCategory>

#include <QObject>
#include <QTimer>
#include <QDebug>

void apply_can_filters(QCanBusDevice *device)
{
    QCanBusDevice::Filter filter;
    QList<QCanBusDevice::Filter> filterList;

    // filter all CAN bus packages with id in tange 0x80 - 0x83
    filter.frameId = 0x80u;
    filter.frameIdMask = 0x7FCu;
    filter.format = QCanBusDevice::Filter::MatchBaseFormat;
    filter.type = QCanBusFrame::DataFrame;
    filterList.append(filter);

    // filter all DataFrames with id 0x90
    filter.frameId = 0x90;
    filter.frameIdMask = 0x07FFu;
    filter.format = QCanBusDevice::Filter::MatchBaseFormat;
    filter.type = QCanBusFrame::DataFrame;
    filterList.append(filter);

    // filter all DataFrames with id 0x122
    filter.frameId = 0x122;
    filter.frameIdMask = 0x07FFu;
    filter.format = QCanBusDevice::Filter::MatchBaseFormat;
    filter.type = QCanBusFrame::DataFrame;
    filterList.append(filter);

    // apply filter
    device->setConfigurationParameter(QCanBusDevice::RawFilterKey, QVariant::fromValue(filterList));
}

void lega(QVariantSignalcantools *can_msg, QVariantSignalmodbus *modbus_msg) {
    qDebug() << "lega: " << can_msg->m_name << " <=> " << modbus_msg->m_name;

    QObject::connect(can_msg, &QVariantSignalcantools::changed, [can_msg, modbus_msg]() {
        qInfo() << "can=>mod: changed " << can_msg->m_name << "(" << can_msg->m_val << ")" << " to " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")";
        modbus_msg->setProperty("smart_val", can_msg->m_val);
    });
    QObject::connect(modbus_msg, &QVariantSignalmodbus::changed, [can_msg, modbus_msg]() {
        qInfo() << "mod=>can: changed " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")" << " to " << can_msg->m_name << "(" << can_msg->m_val << ")";
        can_msg->setProperty("val", modbus_msg->m_val);
    });
}

void connect_all_fastqml(bool noTimer, MyCan *can0, MyModbus *mb0) {
    cantoolsQtSignals *cantools = can0->signals_store;
    modbusQtSignals *modbus = mb0->signals_store;

    lega(cantools->m_dc_dc1_running,        modbus->m_battery_dcdc_running);
    lega(cantools->m_dc_dc1_failure,        modbus->m_battery_dcdc_failure);
    lega(cantools->m_dcdc_reset,            modbus->m_dcdc_reset2);
    lega(cantools->m_dc_dc_sta2_uls_act,    modbus->m_dcdc_voltage);
    lega(cantools->m_dc_dc_sta2_ils_act,    modbus->m_batt_dcdc_current);
    lega(cantools->m_dc_dc1_power_act,      modbus->m_batt_dcdc_power);
    lega(cantools->m_power_limitation,      modbus->m_batt_dcdc_power_limitation);
    lega(cantools->m_dc_dc2_pwr_unit_temp,  modbus->m_dcdc_pwr_unit_temperature);
    lega(cantools->m_dc_dc2_max_avlb_pos_current, modbus->m_dcdc_max_available_dis_current);
    lega(cantools->m_dc_dc2_max_avlb_neg_current, modbus->m_dcdc_max_available_ch_current);
    lega(cantools->m_dc_dc2_max_avlb_pwr,   modbus->m_dcdc_max_available_power);
    lega(cantools->m_dc_dc_sta2_uls_act,    modbus->m_batt_voltage);
    lega(cantools->m_dc_dc_sta2_ils_act,    modbus->m_batt_current);
    lega(cantools->m_dc_dc_sta2_uhs_act,    modbus->m_dc_bus_voltage);
    lega(cantools->m_dc_dc_sta2_ihs_act,    modbus->m_dc_bus_current);
    lega(cantools->m_dc_dc4_battery_soc,    modbus->m_battery_status);
    lega(cantools->m_dc_dc1_status,         modbus->m_dcdc_status);
    lega(cantools->m_dc_dc3_err_word1,      modbus->m_dcdc_error_word_1);
    lega(cantools->m_dc_dc3_err_word2,      modbus->m_dcdc_error_word_2);
    lega(cantools->m_dc_dc4_warn_word1,     modbus->m_dcdc_warning_word_1);
    lega(cantools->m_dc_dc4_warn_word2,     modbus->m_dcdc_warning_word_2);
    lega(cantools->m_dc_dc1_status_word1,   modbus->m_dcdc_status_word_1);

    if (!noTimer) {
        QTimer *timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, [can0]() {
            can0->messages_store->modbus_ctrl->send_frame();
        });
        timer->start(500);
    }
}
