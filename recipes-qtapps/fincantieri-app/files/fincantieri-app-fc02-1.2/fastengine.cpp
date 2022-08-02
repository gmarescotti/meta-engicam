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

void lega(QVariantSignalmodbus *modbus_msg, QVariantSignalcantools *can_msg) {
    qDebug() << "lega: " << can_msg->m_name << " <=> " << modbus_msg->m_name;

    QObject::connect(modbus_msg, &QVariantSignalmodbus::changed, [can_msg, modbus_msg]() {
        qInfo() << "mod=>can: changed " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")" << " to " << can_msg->m_name << "(" << can_msg->m_val << ")";
        can_msg->setProperty("val", modbus_msg->m_val);
    });
}

void lega2(QVariantSignalcantools *can_msg, QVariantSignalmodbus *modbus_msg) {
    qDebug() << "lega2: " << can_msg->m_name << " <=> " << modbus_msg->m_name;

    QObject::connect(can_msg, &QVariantSignalcantools::changed, [can_msg, modbus_msg]() {
        qInfo() << "can=>mod: changed " << can_msg->m_name << "(" << can_msg->m_val << ")" << " to " << modbus_msg->m_name << "(" << modbus_msg->m_val << ")";
        modbus_msg->setProperty("smart_val", can_msg->m_val);
    });
}

void connect_all_fastqml(bool noTimer, MyCan *can0, MyModbus *mb0) {
    cantoolsQtSignals *cantools = can0->signals_store;
    modbusQtSignals *modbus = mb0->signals_store;

    // MODBUS => CANBUS
    lega(modbus->m_fc_dcdc_running, cantools->m_dc_dc1_running);
    lega(modbus->m_fc_dcdc_failure, cantools->m_dc_dc1_failure);
    lega(modbus->m_dcdc_voltage, cantools->m_dcxc_voltage_fc_side);
    lega(modbus->m_fc_dcdc_current, cantools->m_dcxc_current_fc_side);
    lega(modbus->m_fc_dcdc_power, cantools->m_dc_dc1_power_act);
    lega(modbus->m_dcdc_pwr_unit_temperature, cantools->m_dc_dc2_pwr_unit_temp);
    lega(modbus->m_dcdc_max_available_current, cantools->m_dc_dc2_max_avlb_current);
    lega(modbus->m_dcdc_max_available_power, cantools->m_dc_dc2_max_avlb_pwr);
    lega(modbus->m_fcstack_voltage, cantools->m_dcxc_voltage_fc_side);
    lega(modbus->m_fcstack_current, cantools->m_dcxc_current_fc_side);
    lega(modbus->m_dc_bus_voltage, cantools->m_dcxc_voltage_link_side);
    lega(modbus->m_dc_bus_current, cantools->m_dcxc_current_link_side);
    lega(modbus->m_dcdc_warning_word_1, cantools->m_dc_dc4_warn_word1);
    lega(modbus->m_dcdc_warning_word_2, cantools->m_dc_dc4_warn_word2);
    lega(modbus->m_dcdc_warning_word_3, cantools->m_dc_dc4_warn_word3);
    lega(modbus->m_power_current_mode, cantools->m_tx_sdo_power_current_mode);
    lega(modbus->m_power_current_reference, cantools->m_tx_sdo_power_current_reference);
    lega(modbus->m_power_current_min_handling, cantools->m_tx_sdo_power_current_min_handling);
    lega(modbus->m_pos_mix_valve2, cantools->m_pos_mix_valve);
    lega(modbus->m_tcm_hs_pri_out2, cantools->m_tcm_hs_pri_out);
    lega(modbus->m_tcm_hs_sec_in_sp2, cantools->m_tcm_hs_sec_in_sp);
    lega(modbus->m_fc_power_act, cantools->m_tx_pdo3_power_current_act);
    lega(modbus->m_fc_power_peripheral, cantools->m_tx_pdo3_power_current_peripheral);
    lega(modbus->m_fc_power_opt, cantools->m_tx_pdo3_power_current_opt);
    lega(modbus->m_fc_power_max, cantools->m_tx_pdo4_power_current_max);
    lega(modbus->m_fc_power_max_state, cantools->m_tx_pdo4_power_current_max_state);
    lega(modbus->m_fc_power_min, cantools->m_tx_pdo4_power_current_min);
    lega(modbus->m_estimated_time_to_power, cantools->m_tx_pdo1_estimated_time_to_power);
    lega(modbus->m_estimated_time_for_shutdown, cantools->m_tx_pdo1_estimated_time_for_shutdown);
    lega(modbus->m_fc_power_sp, cantools->m_dc_dc1_spare3);
    lega(modbus->m_fc_event_code1, cantools->m_tx_pdo2_event_code_a);
    lega(modbus->m_fc_event_code2, cantools->m_tx_pdo2_event_code_b);
    lega(modbus->m_fc_extended_info1, cantools->m_tx_pdo2_extended_info_a);
    lega(modbus->m_fc_extended_info2, cantools->m_tx_pdo2_extended_info_b);
    lega(modbus->m_fcstack_status, cantools->m_tx_pdo1_system_state);
    lega(modbus->m_dcdc_status, cantools->m_dc_dc1_status);
    lega(modbus->m_dcdc_error_word_1, cantools->m_dc_dc3_err_word1);
    lega(modbus->m_dcdc_error_word_2, cantools->m_dc_dc3_err_word2);
    lega(modbus->m_dcdc_error_word_3, cantools->m_dc_dc3_err_word3);
    lega(modbus->m_dcdc_status_word_1, cantools->m_dc_dc1_status_word1);
    lega(modbus->m_mute_h2_sens_exhaust2, cantools->m_mute_h2_sens_exhaust);
    lega(modbus->m_status_freeze_protection, cantools->m_tx_pdo1_status_freeze_protection);

    // CANBUS => MODBUS
    lega2(cantools->m_rx_pdo1_power_current_max, modbus->m_fc_dcdc_power_limitation);
    lega2(cantools->m_rx_pdo1_system_off_request, modbus->m_system_off_request);
    lega2(cantools->m_rx_pdo1_fast_shutdown_request, modbus->m_fast_shutdown_request);
    lega2(cantools->m_rx_pdo1_freeze_protectio_request, modbus->m_freeze_protection_request);
    lega2(cantools->m_dcdc_reset, modbus->m_dcdc_reset2);

    if (!noTimer) {
        QTimer *timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, [can0]() {
            can0->messages_store->rx_pdo1->send_frame();
        });
        timer->start(500);
    }
}
