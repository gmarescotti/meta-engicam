import QtQml 2.5
import QtQuick 2.5

Item {
    ListModel {
        id: nameModel
        ListElement { mod_name: "fc_dcdc_running"; can_name: "dc_dc1_running" }
        ListElement { mod_name: "fc_dcdc_failure"; can_name: "dc_dc1_failure" }
        ListElement { mod_name: "dcdc_reset2"; can_name: "dcdc_reset" }

        ListElement { mod_name: "dcdc_voltage"; can_name: "dcxc_voltage_fc_side" }
        ListElement { mod_name: "fc_dcdc_current"; can_name: "dcxc_current_fc_side" }
        ListElement { mod_name: "fc_dcdc_power"; can_name: "dc_dc1_power_act" }
        ListElement { mod_name: "fc_dcdc_power_limitation"; can_name: "rx_pdo1_power_current_max" }
        ListElement { mod_name: "dcdc_pwr_unit_temperature"; can_name: "dc_dc2_pwr_unit_temp" }
        ListElement { mod_name: "dcdc_max_available_current"; can_name: "dc_dc2_max_avlb_current" }
        ListElement { mod_name: "dcdc_max_available_power"; can_name: "dc_dc2_max_avlb_pwr" }
        ListElement { mod_name: "fcstack_voltage"; can_name: "dcxc_voltage_fc_side" }
        ListElement { mod_name: "fcstack_current"; can_name: "dcxc_current_fc_side" }
        ListElement { mod_name: "dc_bus_voltage"; can_name: "dcxc_voltage_link_side" }
        ListElement { mod_name: "dc_bus_current"; can_name: "dcxc_current_link_side" }
        ListElement { mod_name: "dcdc_warning_word_1"; can_name: "dc_dc4_warn_word1" }
        ListElement { mod_name: "dcdc_warning_word_2"; can_name: "dc_dc4_warn_word2" }
        ListElement { mod_name: "dcdc_warning_word_3"; can_name: "dc_dc4_warn_word3" }
        ListElement { mod_name: "power_current_mode"; can_name: "tx_sdo_power_current_mode" }
        ListElement { mod_name: "power_current_reference"; can_name: "tx_sdo_power_current_reference" }
        ListElement { mod_name: "power_current_min_handling"; can_name: "tx_sdo_power_current_min_handling" }
        ListElement { mod_name: "pos_mix_valve2"; can_name: "pos_mix_valve" }
        ListElement { mod_name: "tcm_hs_pri_out2"; can_name: "tcm_hs_pri_out" }
        ListElement { mod_name: "tcm_hs_sec_in_sp2"; can_name: "tcm_hs_sec_in_sp" }
        ListElement { mod_name: "fc_power_act"; can_name: "tx_pdo3_power_current_act" }
        ListElement { mod_name: "fc_power_peripheral"; can_name: "tx_pdo3_power_current_peripheral" }
        ListElement { mod_name: "fc_power_opt"; can_name: "tx_pdo3_power_current_opt" }
        ListElement { mod_name: "fc_power_max"; can_name: "tx_pdo4_power_current_max" }
        ListElement { mod_name: "fc_power_max_state"; can_name: "tx_pdo4_power_current_max_state" }
        ListElement { mod_name: "fc_power_min"; can_name: "tx_pdo4_power_current_min" }
        ListElement { mod_name: "estimated_time_to_power"; can_name: "tx_pdo1_estimated_time_to_power" }
        ListElement { mod_name: "estimated_time_for_shutdown"; can_name: "tx_pdo1_estimated_time_for_shutdown" }
        ListElement { mod_name: "fc_power_sp"; can_name: "dc_dc1_spare3" }
        ListElement { mod_name: "fc_event_code1"; can_name: "tx_pdo2_event_code_a" }
        ListElement { mod_name: "fc_event_code2"; can_name: "tx_pdo2_event_code_b" }
        ListElement { mod_name: "fc_extended_info1"; can_name: "tx_pdo2_extended_info_a" }
        ListElement { mod_name: "fc_extended_info2"; can_name: "tx_pdo2_extended_info_b" }

        ListElement { mod_name: "fcstack_status"; can_name: "tx_pdo1_system_state" }
        ListElement { mod_name: "dcdc_status"; can_name: "dc_dc1_status" }
        ListElement { mod_name: "dcdc_error_word_1"; can_name: "dc_dc3_err_word1" }
        ListElement { mod_name: "dcdc_error_word_2"; can_name: "dc_dc3_err_word2" }
        ListElement { mod_name: "dcdc_error_word_3"; can_name: "dc_dc3_err_word3" }
        ListElement { mod_name: "dcdc_status_word_1"; can_name: "dc_dc1_status_word1" }

        ListElement { mod_name: "system_off_request"; can_name: "rx_pdo1_system_off_request" }
        ListElement { mod_name: "fast_shutdown_request"; can_name: "rx_pdo1_fast_shutdown_request" }
        ListElement { mod_name: "freeze_protection_request"; can_name: "rx_pdo1_freeze_protectio_request" }
        ListElement { mod_name: "mute_h2_sens_exhaust2"; can_name: "mute_h2sens_exhaust" }
        ListElement { mod_name: "status_freeze_protection"; can_name: "txpdo1_status_freeze_protection" }
    }

    Repeater {
        model: nameModel
        delegate: Item {
            Binding {
                target: modbus[mod_name]
                property: 'smart_val' // out
                value: cantools[can_name].val // in
            }
            Binding {
                target: cantools[can_name]
                property: 'smart_val' // out ()
                value: modbus[mod_name].val // in
            }
        }
    }
}
