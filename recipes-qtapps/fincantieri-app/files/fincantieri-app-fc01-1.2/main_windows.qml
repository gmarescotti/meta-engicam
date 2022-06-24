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

    Timer {
        interval: 500; running: !options.skip_timer; repeat: true
        onTriggered: {
            console.debug("ping!")
            cantools.messages.modbus_ctrl.send_frame()
        }
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

                    LabelBoxSwitch {variable: modbus.battery_dcdc_running}
                    LabelBoxSwitch {variable: modbus.battery_dcdc_failure}
                    LabelBoxSwitch {variable: modbus.dcdc_reset2}
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
                    LabelSpinBox {variable: modbus.batt_dcdc_current}
                    LabelSpinBox {variable: modbus.batt_dcdc_power}
                    LabelSpinBox {variable: modbus.batt_dcdc_power_limitation}
                    LabelSpinBox {variable: modbus.dcdc_pwr_unit_temperature}
                    LabelSpinBox {variable: modbus.dcdc_max_available_dis_current}
                    LabelSpinBox {variable: modbus.dcdc_max_available_ch_current}
                    LabelSpinBox {variable: modbus.batt_voltage}
                    LabelSpinBox {variable: modbus.batt_current}
                    LabelSpinBox {variable: modbus.dc_bus_voltage}
                    LabelSpinBox {variable: modbus.dc_bus_current}
                    LabelSpinBox {variable: modbus.dcdc_warning_word_1}
                    LabelSpinBox {variable: modbus.dcdc_warning_word_2}

                    LabelSpinBox {variable: modbus.battery_status}
                    LabelSpinBox {variable: modbus.dcdc_status}
                    LabelSpinBox {variable: modbus.dcdc_error_word_1}
                    LabelSpinBox {variable: modbus.dcdc_error_word_2}
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
