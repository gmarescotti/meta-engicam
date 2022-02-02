import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

import QtQuick.Extras 1.4
import QtQml 2.12
import QtGraphicalEffects 1.12

import FlatUI 1.0

ApplicationWindow {
    id: root
    visible: true
    width: 700
    height: 600
    title: qsTr("Modbus-Canbus Switch")

    Component {
        id: labinput
        Row {
            spacing: -30
            Label {
                text: variable.name.replace(/_/g, " ")
                font.capitalization: Font.Capitalize
                transform: Scale { xScale: 0.65}
                verticalAlignment: "AlignVCenter"
                horizontalAlignment: "AlignRight"
                wrapMode: "WordWrap"
                height: parent.height
                width: 110
                //background: Rectangle{color: "yellow"; anchors.fill: parent}
            }

            SpinBox {
                //background: Rectangle{color: "yellow"; anchors.fill: parent}
                wheelEnabled: true
                editable: true
                value: variable.val | 0
                to: 9999999

                property int decimals: Math.max(0, Math.log10(1/variable.precision))
                property real realValue: value * variable.precision

                Component.onCompleted: console.debug("UUUUU" + decimals +" ," + variable.precision)
                height: 37
                textFromValue: function(value, locale) {
                    return Number(value * variable.precision).toLocaleString(locale, 'f', decimals)
                }

                valueFromText: function(text, locale) {
                    return Number.fromLocaleString(locale, text) / variable.precision
                }
            }
        }
    }

    Component {
        id: labswitch
        Column {
            id: ccc
            spacing: 5
            Label {
                width: 140
                height: 35
                color: "white"
                text: variable.name.replace(/_/g, " ")
                font.capitalization: Font.Capitalize
                transform: Scale { xScale: 0.65}
                verticalAlignment: "AlignBottom"
                horizontalAlignment: "AlignHCenter"
                wrapMode: "WordWrap"
            }
            BoxSwitch {
                // checked: variable.val | false
                width: 140
                onCheckedChanged: {
                     console.debug(variable.name + ": " + checked)
                     variable.val = checked
                }
            }
        }
    }

    ListModel {
        id: nameModel
        ListElement { mod_name: "fc_dcdc_running"; can_name: "dc_dc1_running" }
        ListElement { mod_name: "fc_dcdc_failure"; can_name: "dc_dc1_failure" }
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
        Item {
            Binding {
                target: modbus[mod_name]
                property: 'smart_val'
                value: cantools[can_name].smart_val
                delayed: true
            }
            Binding {
                target: cantools[can_name]
                property: 'val'
                value: modbus[mod_name].smart_val
                delayed: true
                Component.onCompleted: {
                    console.debug(can_name)
                    console.debug(cantools[can_name])
                }
            }
        }
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Item {
            width: swipeView.width
            height: swipeView.height
            Grid {
                anchors.centerIn: parent
                columns: 3
                spacing: 0
                columnSpacing: -30
                verticalItemAlignment: Grid.AlignBottom
                Loader {property var variable: modbus.fc_dcdc_running; sourceComponent: labswitch}
                Loader {property var variable: modbus.fc_dcdc_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdc_reset2; sourceComponent: labswitch}
                Loader {property var variable: modbus.connector_interlock_emergency; sourceComponent: labswitch}
                Loader {property var variable: modbus.external_canbus_communication_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.external_analog_inputs_lost; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdca_hvhs_overvoltage; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdca_hvls_overvoltage; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdca_hvhs_overcurrent; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdca_hvls_overcurrent; sourceComponent: labswitch}
                Loader {property var variable: modbus.a_internal_aux_power_supply_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.a_internal_comms_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdca_overtemperature; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdcb_hvhs_overvoltage; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdcb_hvls_overvoltage; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdcb_hvhs_overcurrent; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdcb_hvls_overcurrent; sourceComponent: labswitch}
                Loader {property var variable: modbus.b_internal_aux_power_supply_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.b_internal_comms_failure; sourceComponent: labswitch}
                Loader {property var variable: modbus.dcdcb_overtemperature;sourceComponent: labswitch}
            }
        }
        Item {
            width: swipeView.width
            height: swipeView.height

            Grid {
                anchors.centerIn: parent
                columns: 3
                spacing: 5
                // columnSpacing: -30
                verticalItemAlignment: Grid.AlignBottom

                Loader {property var variable: modbus.dcdc_voltage; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_dcdc_current; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_dcdc_power; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_dcdc_power_limitation; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_pwr_unit_temperature; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_max_available_current; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_max_available_power; sourceComponent: labinput}
                Loader {property var variable: modbus.fcstack_voltage; sourceComponent: labinput}
                Loader {property var variable: modbus.fcstack_current; sourceComponent: labinput}
                Loader {property var variable: modbus.dc_bus_voltage; sourceComponent: labinput}
                Loader {property var variable: modbus.dc_bus_current; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_warning_word_1; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_warning_word_2; sourceComponent: labinput}
                Loader {property var variable: modbus.dcdc_warning_word_3; sourceComponent: labinput}
                Loader {property var variable: modbus.power_current_mode; sourceComponent: labinput}
                Loader {property var variable: modbus.power_current_reference; sourceComponent: labinput}
                Loader {property var variable: modbus.power_current_min_handling; sourceComponent: labinput}
                Loader {property var variable: modbus.pos_mix_valve2; sourceComponent: labinput}
                Loader {property var variable: modbus.tcm_hs_pri_out2; sourceComponent: labinput}
                Loader {property var variable: modbus.tcm_hs_sec_in_sp2; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_act; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_peripheral; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_opt; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_max; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_max_state; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_min; sourceComponent: labinput}
                Loader {property var variable: modbus.estimated_time_to_power; sourceComponent: labinput}
                Loader {property var variable: modbus.estimated_time_for_shutdown; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_power_sp; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_event_code1; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_event_code2; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_extended_info1; sourceComponent: labinput}
                Loader {property var variable: modbus.fc_extended_info2; sourceComponent: labinput}
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        background: null

        TabButton {
            text: "Bits"
            background: Rectangle {anchors.fill: parent; color: tabBar.currentIndex == 0 ? Qt.darker("#f4d37c", 1.2) : Qt.darker("#f4d37c", 1.5)}
        }
        TabButton {
            text: "Bytes"
            background: Rectangle {anchors.fill: parent; color: tabBar.currentIndex == 1 ? Qt.darker("#f4d37c", 1.2) : Qt.darker("#f4d37c", 1.5)}
        }
    }

    background: Rectangle {
        color: Qt.darker("#f4d37c", 1.2) // arancione
    }
}
