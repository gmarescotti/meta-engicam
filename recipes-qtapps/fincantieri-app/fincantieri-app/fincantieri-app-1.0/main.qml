import QtQml 2.12
import QtQuick 2.15

Timer {
    interval: 500; running: true; repeat: true
    onTriggered: {
        console.warn("miao: ")
        // modbus.voltage.val=1;
    }

    ListModel {
        id: nameModel
        ListElement { mod_name: "fc_dcdc_running"; can_name: "dc_dc1_running" }
        ListElement { mod_name: "fc_dcdc_failure"; can_name: "dc_dc1_failure" }
        ListElement { mod_name: "dcdc_reset2"; can_name: "dcdc_reset" }

        ListElement { mod_name: "connector_interlock_emergency"; can_name: "connector_interlock_emergency2" }
        ListElement { mod_name: "external_canbus_communication_failure"; can_name: "external_canbus_communication_failure2" }
        ListElement { mod_name: "external_analog_inputs_lost"; can_name: "external_analog_inputs_lost2" }

        ListElement { mod_name: "dcdca_hvhs_overvoltage"; can_name: "dcdca_hvhs_overvoltage2" }
        ListElement { mod_name: "dcdca_hvls_overvoltage"; can_name: "dcdca_hvls_overvoltage2" }
        ListElement { mod_name: "dcdca_hvhs_overcurrent"; can_name: "dcdca_hvhs_overcurrent2" }
        ListElement { mod_name: "dcdca_hvls_overcurrent"; can_name: "dcdca_hvls_overcurrent2" }
        ListElement { mod_name: "a_internal_aux_power_supply_failure"; can_name: "a_internal_aux_power_supply_failure2" }
        ListElement { mod_name: "a_internal_comms_failure"; can_name: "a_internal_comms_failure2" }
        ListElement { mod_name: "dcdca_overtemperature"; can_name: "dcdca_overtemperature2" }


        ListElement { mod_name: "dcdcb_hvhs_overvoltage"; can_name: "dcdcb_hvhs_overvoltage2" }
        ListElement { mod_name: "dcdcb_hvls_overvoltage"; can_name: "dcdcb_hvls_overvoltage2" }
        ListElement { mod_name: "dcdcb_hvhs_overcurrent"; can_name: "dcdcb_hvhs_overcurrent2" }
        ListElement { mod_name: "dcdcb_hvls_overcurrent"; can_name: "dcdcb_hvls_overcurrent2" }
        ListElement { mod_name: "b_internal_aux_power_supply_failure"; can_name: "b_internal_aux_power_supply_failure2" }
        ListElement { mod_name: "b_internal_comms_failure"; can_name: "b_internal_comms_failure2" }
        ListElement { mod_name: "dcdcb_overtemperature"; can_name: "dcdcb_overtemperature2" }


        ListElement { mod_name: "emergency_stop_request_fbk"; can_name: "emergency_stop_request_fbk2" }
        ListElement { mod_name: "on_off_cmd_fbk"; can_name: "on_off_cmd_fbk2" }
        ListElement { mod_name: "spare_di_0_fbk"; can_name: "spare_di_0_fbk2" }
        ListElement { mod_name: "spare_di_1_fbk"; can_name: "spare_di_1_fbk2" }
        ListElement { mod_name: "fc_disconnect_fbk"; can_name: "fc_disconnect_fbk2" }
        ListElement { mod_name: "spare_di_3_fbk"; can_name: "spare_di_3_fbk2" }
        ListElement { mod_name: "converter_ready"; can_name: "converter_ready2" }
        ListElement { mod_name: "converter_run"; can_name: "converter_run2" }
        ListElement { mod_name: "spare_do_0"; can_name: "spare_do_02" }
        ListElement { mod_name: "spare_do_1"; can_name: "spare_do_12" }
        ListElement { mod_name: "esd_fc_request"; can_name: "esd_fc_request2" }
        ListElement { mod_name: "spare_do_3"; can_name: "spare_do_32" }
        ListElement { mod_name: "power_derating_limit_active"; can_name: "power_derating_limit_active2" }
        ListElement { mod_name: "temp_derating_active"; can_name: "temp_derating_active2" }
        ListElement { mod_name: "fc_emergency_shutdown_fbk_esd_fbk"; can_name: "fc_emergency_shutdown_fbk_esd_fbk2" }
        ListElement { mod_name: "fc_enable_command_fbk_ci15_fbk"; can_name: "fc_enable_command_fbk_ci15_fbk2" }


        ListElement { mod_name: "dcdc_voltage"; can_name: "dcxc_voltage_fc_side" }
        ListElement { mod_name: "fc_dcdc_current"; can_name: "dcxc_current_fc_side" }
        ListElement { mod_name: "fc_dcdc_power"; can_name: "dc_dc1_power_act" }
        ListElement { mod_name: "fc_dcdc_power_limitation"; can_name: "rx_pdo1_power_current_max" }
        ListElement { mod_name: "dcdc_pwr_unit_temperature"; can_name: "dc_dc2_pwr_unit_temp" }
        ListElement { mod_name: "dcdc_max_available_current"; can_name: "dc_dc2_max_avlb_current" }
        ListElement { mod_name: "dcdc_max_available_power"; can_name: "dc_dc2_max_avlb_pwr" }
        ListElement { mod_name: "fcstack_voltage"; can_name: "dcxc_current_fc_side" }
        ListElement { mod_name: "fcstack_current"; can_name: "dcxc_voltage_fc_side" }
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
        ListElement { mod_name: "fc_power_sp"; can_name: "dcxc_current_sp" }
        ListElement { mod_name: "fc_event_code1"; can_name: "tx_pdo2_event_code_a" }
        ListElement { mod_name: "fc_event_code2"; can_name: "tx_pdo2_event_code_b" }
        ListElement { mod_name: "fc_extended_info1"; can_name: "tx_pdo2_extended_info_a" }
        ListElement { mod_name: "fc_extended_info2"; can_name: "tx_pdo2_extended_info_b" }
    }

    Repeater {
        model: nameModel
        Component {
            Binding {
                target: modbus[mod_name]
                property: 'smart_val' // out
                value: cantools[can_name].val // in
                delayed: true
            }
            Binding {
                target: cantools[can_name]
                property: 'smart_val' // out ()
                value: modbus[mod_name].val // in
                delayed: true
            }
        }
    }
}
