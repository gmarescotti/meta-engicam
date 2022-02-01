import QtQml 2.12

Timer {
    interval: 500; running: true; repeat: true
    onTriggered: {
        console.warn("miao: " + modbus)
        modbus.voltage.val=1;
    }
//    Connections {
//        target: modbus.voltage
//        function onValueChange() {
//            consol.warn("perbacco")
//        }
//    }
}
