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

//    Timer {
//        interval: 500; running: !options.skip_timer; repeat: true
//        onTriggered: {
//            console.debug("ping!")
//            cantools.messages.modbus_ctrl.send_frame()
//        }
//    }

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
