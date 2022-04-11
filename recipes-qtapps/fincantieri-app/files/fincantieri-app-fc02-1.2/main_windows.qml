import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

import QtQuick.Extras 1.4
import QtQml 2.12
import QtGraphicalEffects 1.12

import VFlatUI 1.0
import Utilities 1.0

ApplicationWindow {
    id: root
    visible: true
    width: 730
    height: 620
    title: qsTr("Modbus-Canbus Switch")

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
        Item {
            Binding {
                target: modbus[mod_name]
                property: 'smart_val' // out
                value: cantools[can_name].val // in
                delayed: true
            }
            Binding {
                target: cantools[can_name]
                property: 'val' // out ()
                value: modbus[mod_name].val // in
                delayed: true
            }
        }
    }

    Timer {
        interval: 500; running: true; repeat: true
        onTriggered: {
            console.debug("ping!")
            cantools.messages.rx_pdo1.send_frame()
            cantools.messages.tx_pdo1.send_frame()
            cantools.messages.tx_pdo2.send_frame()
            cantools.messages.tx_pdo3.send_frame()
            cantools.messages.tx_pdo4.send_frame()
            cantools.messages.tx_pdo1_vn1.send_frame()
            cantools.messages.rx_pdo1_pc.send_frame()
            cantools.messages.tx_pdo1_pc.send_frame()
            cantools.messages.tx_sdo1.send_frame()
            cantools.messages.rx_sdo1.send_frame()
            cantools.messages.dc_dc2.send_frame()
            cantools.messages.dc_dc3.send_frame()
            cantools.messages.dc_dc4.send_frame()
            cantools.messages.dc_dc_ctrl1.send_frame()
            cantools.messages.dc_dc_ctrl2.send_frame()
            cantools.messages.dc_dc_ctrl3.send_frame()
            cantools.messages.dc_dc_sta1.send_frame()
            cantools.messages.dc_dc_sta2.send_frame()
            cantools.messages.dc_dc_sta3.send_frame()
            cantools.messages.dc_dc_sta5.send_frame()
            cantools.messages.dc_dc_sta6.send_frame()
            cantools.messages.dc_dc_sta1b.send_frame()
            cantools.messages.dc_dc_sta2b.send_frame()
            cantools.messages.dc_dc_sta3b.send_frame()
            cantools.messages.dc_dc_sta5b.send_frame()
            cantools.messages.dc_dc_sta6b.send_frame()
            cantools.messages.tx_sdo2.send_frame()
            cantools.messages.tx_sdo3.send_frame()
            cantools.messages.rx_sdo2.send_frame()
            cantools.messages.rx_sdo3.send_frame()
        }
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex
        anchors.margins: 10

        Pane {
            spacing: 10
            clip: true
            background: null
            Flickable {
                anchors.fill: parent
                contentHeight: f1.height
                flickableDirection: Flickable.AutoFlickIfNeeded

                Flow {
                    id: f1
                    width: parent.width
                    spacing: 5

                    LabelBoxSwitch {variable: modbus.fc_dcdc_running}
                    LabelBoxSwitch {variable: modbus.fc_dcdc_failure}
                    LabelBoxSwitch {variable: modbus.dcdc_reset2}

                    LabelBoxSwitch {variable: modbus.system_off_request}
                    LabelBoxSwitch {variable: modbus.fast_shutdown_request}
                    LabelBoxSwitch {variable: modbus.freeze_protection_request}

                    LabelBoxSwitch {variable: modbus.mute_h2_sens_exhaust2}
                    LabelBoxSwitch {variable: modbus.status_freeze_protection}
                }
            }
        }
        Pane {
            spacing: 10
            clip: true
            background: null
            Flickable {
                anchors.fill: parent
                contentHeight: f2.height
                flickableDirection: Flickable.AutoFlickIfNeeded

                Flow {
                    id: f2
                    width: parent.width
                    spacing: 5
                    LabelSpinBox {variable: modbus.dcdc_voltage}
                    LabelSpinBox {variable: modbus.fc_dcdc_current}
                    LabelSpinBox {variable: modbus.fc_dcdc_power}
                    LabelSpinBox {variable: modbus.fc_dcdc_power_limitation}
                    LabelSpinBox {variable: modbus.dcdc_pwr_unit_temperature}
                    LabelSpinBox {variable: modbus.dcdc_max_available_current}
                    LabelSpinBox {variable: modbus.dcdc_max_available_power}
                    LabelSpinBox {variable: modbus.fcstack_voltage}
                    LabelSpinBox {variable: modbus.fcstack_current}
                    LabelSpinBox {variable: modbus.dc_bus_voltage}
                    LabelSpinBox {variable: modbus.dc_bus_current}
                    LabelSpinBox {variable: modbus.dcdc_warning_word_1}
                    LabelSpinBox {variable: modbus.dcdc_warning_word_2}
                    LabelSpinBox {variable: modbus.dcdc_warning_word_3}
                    LabelSpinBox {variable: modbus.power_current_mode}
                    LabelSpinBox {variable: modbus.power_current_reference}
                    LabelSpinBox {variable: modbus.power_current_min_handling}
                    LabelSpinBox {variable: modbus.pos_mix_valve2}
                    LabelSpinBox {variable: modbus.tcm_hs_pri_out2}
                    LabelSpinBox {variable: modbus.tcm_hs_sec_in_sp2}
                    LabelSpinBox {variable: modbus.fc_power_act}
                    LabelSpinBox {variable: modbus.fc_power_peripheral}
                    LabelSpinBox {variable: modbus.fc_power_opt}
                    LabelSpinBox {variable: modbus.fc_power_max}
                    LabelSpinBox {variable: modbus.fc_power_max_state}
                    LabelSpinBox {variable: modbus.fc_power_min}
                    LabelSpinBox {variable: modbus.estimated_time_to_power}
                    LabelSpinBox {variable: modbus.estimated_time_for_shutdown}
                    LabelSpinBox {variable: modbus.fc_power_sp}
                    LabelSpinBox {variable: modbus.fc_event_code1}
                    LabelSpinBox {variable: modbus.fc_event_code2}
                    LabelSpinBox {variable: modbus.fc_extended_info1}
                    LabelSpinBox {variable: modbus.fc_extended_info2}

                    LabelSpinBox {variable: modbus.fcstack_status}
                    LabelSpinBox {variable: modbus.dcdc_status}
                    LabelSpinBox {variable: modbus.dcdc_error_word_1}
                    LabelSpinBox {variable: modbus.dcdc_error_word_2}
                    LabelSpinBox {variable: modbus.dcdc_error_word_3}
                    LabelSpinBox {variable: modbus.dcdc_status_word_1}
                }
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        background: null

        TabButton {
            text: "Bits"
            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      opacity: enabled ? 1.0 : 0.3
                      color: tabBar.currentIndex == 0 ? "white" : "lightgrey"
                      horizontalAlignment: Text.AlignHCenter
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                  }
            background: Rectangle {anchors.fill: parent; color: tabBar.currentIndex == 0 ? "#34495e" : Qt.darker("#34495e", 1.2)}
        }
        TabButton {
            text: "Bytes"
            contentItem: Text {
                      text: parent.text
                      font: parent.font
                      opacity: enabled ? 1.0 : 0.3
                      color: tabBar.currentIndex == 1 ? "white" : "lightgrey"
                      horizontalAlignment: Text.AlignHCenter
                      verticalAlignment: Text.AlignVCenter
                      elide: Text.ElideRight
                  }
            background: Rectangle {anchors.fill: parent; color: tabBar.currentIndex == 1 ? "#34495e" : Qt.darker("#34495e", 1.2)}
        }
    }

    background: Rectangle {
        color: "#34495e"
    }
}
