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

void modbus2canbus(QVariantSignalmodbus *modbus_msg, QVariantSignalcantools *can_msg) {
    qDebug() << "modbus2canbus: " << can_msg->m_name << " <=> " << modbus_msg->m_name;

    QObject::connect(modbus_msg, &QVariantSignalmodbus::changed, [can_msg, modbus_msg]() {
        qInfo() << "mod=>can: changed " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")" << " to " << can_msg->m_name << "(" << can_msg->m_val << ")";
        can_msg->setProperty("val", modbus_msg->m_val);
    });
}

void canbus2modbus(QVariantSignalcantools *can_msg, QVariantSignalmodbus *modbus_msg) {
    qDebug() << "modbus2canbus: " << can_msg->m_name << " <=> " << modbus_msg->m_name;

    QObject::connect(can_msg, &QVariantSignalcantools::changed, [can_msg, modbus_msg]() {
        qInfo() << "can=>mod: changed " << can_msg->m_name << "(" << can_msg->m_val << ")" << " to " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")";
        modbus_msg->setProperty("smart_val", can_msg->m_val);
    });
}

void connect_all_fastqml(bool noTimer, MyCan *can0, MyModbus *mb0) {
    cantoolsQtSignals *cantools = can0->signals_store;
    modbusQtSignals *modbus = mb0->signals_store;

    // CANBUS => MODBUS
    canbus2modbus(cantools->m_dc_dc1_running, modbus->m_fc_dcdc_running);
    canbus2modbus(cantools->m_dc_dc1_failure, modbus->m_fc_dcdc_failure);
    canbus2modbus(cantools->m_dcxc_voltage_fc_side, modbus->m_dcdc_voltage);
    canbus2modbus(cantools->m_dcxc_current_fc_side, modbus->m_fc_dcdc_current);
    canbus2modbus(cantools->m_dc_dc1_power_act, modbus->m_fc_dcdc_power);
    canbus2modbus(cantools->m_dc_dc2_pwr_unit_temp, modbus->m_dcdc_pwr_unit_temperature);
    canbus2modbus(cantools->m_dc_dc2_max_avlb_current, modbus->m_dcdc_max_available_current);
    canbus2modbus(cantools->m_dc_dc2_max_avlb_pwr, modbus->m_dcdc_max_available_power);
    canbus2modbus(cantools->m_dcxc_voltage_fc_side, modbus->m_fcstack_voltage);
    canbus2modbus(cantools->m_dcxc_current_fc_side, modbus->m_fcstack_current);
    canbus2modbus(cantools->m_dcxc_voltage_link_side, modbus->m_dc_bus_voltage);
    canbus2modbus(cantools->m_dcxc_current_link_side, modbus->m_dc_bus_current);
    canbus2modbus(cantools->m_dc_dc4_warn_word1, modbus->m_dcdc_warning_word_1);
    canbus2modbus(cantools->m_dc_dc4_warn_word2, modbus->m_dcdc_warning_word_2);
    canbus2modbus(cantools->m_dc_dc4_warn_word3, modbus->m_dcdc_warning_word_3);
    canbus2modbus(cantools->m_tx_sdo_power_current_mode, modbus->m_power_current_mode);
    canbus2modbus(cantools->m_tx_sdo_power_current_reference, modbus->m_power_current_reference);
    canbus2modbus(cantools->m_tx_sdo_power_current_min_handling, modbus->m_power_current_min_handling);
    canbus2modbus(cantools->m_pos_mix_valve, modbus->m_pos_mix_valve2);
    canbus2modbus(cantools->m_tcm_hs_pri_out, modbus->m_tcm_hs_pri_out2);
    canbus2modbus(cantools->m_tcm_hs_sec_in_sp, modbus->m_tcm_hs_sec_in_sp2);
    canbus2modbus(cantools->m_tx_pdo3_power_current_act, modbus->m_fc_power_act);
    canbus2modbus(cantools->m_tx_pdo3_power_current_peripheral, modbus->m_fc_power_peripheral);
    canbus2modbus(cantools->m_tx_pdo3_power_current_opt, modbus->m_fc_power_opt);
    canbus2modbus(cantools->m_tx_pdo4_power_current_max, modbus->m_fc_power_max);
    canbus2modbus(cantools->m_tx_pdo4_power_current_max_state, modbus->m_fc_power_max_state);
    canbus2modbus(cantools->m_tx_pdo4_power_current_min, modbus->m_fc_power_min);
    canbus2modbus(cantools->m_tx_pdo1_estimated_time_to_power, modbus->m_estimated_time_to_power);
    canbus2modbus(cantools->m_tx_pdo1_estimated_time_for_shutdown, modbus->m_estimated_time_for_shutdown);
    canbus2modbus(cantools->m_dc_dc1_spare3, modbus->m_fc_power_sp);
    canbus2modbus(cantools->m_tx_pdo2_event_code_a, modbus->m_fc_event_code1);
    canbus2modbus(cantools->m_tx_pdo2_event_code_b, modbus->m_fc_event_code2);
    canbus2modbus(cantools->m_tx_pdo2_extended_info_a, modbus->m_fc_extended_info1);
    canbus2modbus(cantools->m_tx_pdo2_extended_info_b, modbus->m_fc_extended_info2);
    canbus2modbus(cantools->m_tx_pdo1_system_state, modbus->m_fcstack_status);
    canbus2modbus(cantools->m_dc_dc1_status, modbus->m_dcdc_status);
    canbus2modbus(cantools->m_dc_dc3_err_word1, modbus->m_dcdc_error_word_1);
    canbus2modbus(cantools->m_dc_dc3_err_word2, modbus->m_dcdc_error_word_2);
    canbus2modbus(cantools->m_dc_dc3_err_word3, modbus->m_dcdc_error_word_3);
    canbus2modbus(cantools->m_dc_dc1_status_word1, modbus->m_dcdc_status_word_1);
    canbus2modbus(cantools->m_mute_h2_sens_exhaust, modbus->m_mute_h2_sens_exhaust2);
    canbus2modbus(cantools->m_tx_pdo1_status_freeze_protection, modbus->m_status_freeze_protection);

    // MODBUS => CANBUS
    modbus2canbus(modbus->m_fc_dcdc_power_limitation, cantools->m_rx_pdo1_power_current_max);
    modbus2canbus(modbus->m_system_off_request, cantools->m_rx_pdo1_system_off_request);
    modbus2canbus(modbus->m_fast_shutdown_request, cantools->m_rx_pdo1_fast_shutdown_request);
    modbus2canbus(modbus->m_freeze_protection_request, cantools->m_rx_pdo1_freeze_protectio_request);
    modbus2canbus(modbus->m_dcdc_reset2, cantools->m_dcdc_reset);

    if (!noTimer) {
        QTimer *timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, [can0]() {
            can0->messages_store->rx_pdo1->send_frame();
        });
        timer->start(500);
    }
}
