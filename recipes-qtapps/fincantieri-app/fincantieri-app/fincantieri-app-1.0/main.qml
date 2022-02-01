//import QtQml 2.12

//Timer {
//    interval: 500; running: true; repeat: true
//    onTriggered: {
//        console.warn("miao: " + modbus)
//        modbus.voltage.val=1;
//    }
////    Connections {
////        target: modbus.voltage
////        function onValueChange() {
////            consol.warn("perbacco")
////        }
////    }
//}


import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

import QtQuick.Extras 1.4
import QtQml 2.12
import QtGraphicalEffects 1.12

ApplicationWindow {
    id: root
    visible: true
    width: 400
    height: 300
    title: qsTr("Modbus-Canbus Switch")

    Rectangle {
        anchors.fill: parent
        color: "#F9A72B" // arancione
    }

    Connections {
        target: modbus.voltage
        function onOn_change() {
            console.warn("perbacco")
        }
    }

    Flow {
        id: ff
        spacing: 5
        anchors.fill: parent
        Row {
            Button {
                text: "update"
                onClicked: modbus.voltage.message.update()
            }
            Button {
                text: "voltage++"
                onClicked: modbus.voltage.val = (modbus.voltage.val + 1) || 1
            }
            Label {
                text: modbus.voltage.val || "N/A"
                background: Rectangle {}
                width: 30
                height: 40
                horizontalAlignment : Label.AlignHCenter
                verticalAlignment : Label.AlignVCenter
            }
        }
//        Button {
//            text: "current++"
//            onClicked: modbus.current.val = (modbus.current.val + 1) || 1
//        }
//        Label {
//            text: modbus.current.val || "N/A"
//            background: Rectangle {}
//            width: 30
//            height: 40
//            horizontalAlignment : Label.AlignHCenter
//            verticalAlignment : Label.AlignVCenter
//        }
    }

    background: Rectangle {
        color: "#F9A72B" // arancione
        MouseArea {
            anchors.fill: parent
            onPressed: sys.sys.resume()
        }
    }
}
