import QtQml 2.5
import QtQuick 2.5

Item {
    ListModel {
        id: nameModel
        ListElement { mod_name: "battery_dcdc_running"; can_name: "dc_dc1_running" }
        ListElement { mod_name: "battery_dcdc_failure"; can_name: "dc_dc1_failure" }
        ListElement { mod_name: "dcdc_reset2"; can_name: "dcdc_reset" }

        ListElement { mod_name: "dcdc_voltage"; can_name: "dc_dc_sta2_uls_act" }
        ListElement { mod_name: "batt_dcdc_current"; can_name: "dc_dc_sta2_ils_act" }
        ListElement { mod_name: "batt_dcdc_power"; can_name: "dc_dc1_power_act" }
        ListElement { mod_name: "batt_dcdc_power_limitation"; can_name: "power_limitation" }
        ListElement { mod_name: "dcdc_pwr_unit_temperature"; can_name: "dc_dc2_pwr_unit_temp" }
        ListElement { mod_name: "dcdc_max_available_dis_current"; can_name: "dc_dc2_max_avlb_pos_current" }
        ListElement { mod_name: "dcdc_max_available_ch_current"; can_name: "dc_dc2_max_avlb_neg_current" }
        ListElement { mod_name: "dcdc_max_available_power"; can_name: "dc_dc2_max_avlb_pwr" }
        ListElement { mod_name: "batt_voltage"; can_name: "dc_dc_sta2_uls_act" }
        ListElement { mod_name: "batt_current"; can_name: "dc_dc_sta2_ils_act" }
        ListElement { mod_name: "dc_bus_voltage"; can_name: "dc_dc_sta2_uhs_act" }
        ListElement { mod_name: "dc_bus_current"; can_name: "dc_dc_sta2_ihs_act" }

        ListElement { mod_name: "battery_status"; can_name: "dc_dc4_battery_soc" }
        ListElement { mod_name: "dcdc_status"; can_name: "dc_dc1_status" }
        ListElement { mod_name: "dcdc_error_word_1"; can_name: "dc_dc3_err_word1" }
        ListElement { mod_name: "dcdc_error_word_2"; can_name: "dc_dc3_err_word2" }
        ListElement { mod_name: "dcdc_warning_word_1"; can_name: "dc_dc4_warn_word1" }
        ListElement { mod_name: "dcdc_warning_word_2"; can_name: "dc_dc4_warn_word2" }
        ListElement { mod_name: "dcdc_status_word_1"; can_name: "dc_dc1_status_word1" }
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
                property: 'val' // out ()
                value: modbus[mod_name].val // in
            }
        }
    }

    Timer {
        interval: 500; running: !options.skip_timer; repeat: true
        onTriggered: {
            console.debug("ping!")
            cantools.messages.modbus_ctrl.send_frame()
        }
    }
}
