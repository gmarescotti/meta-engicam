import QtQml 2.12

Timer {
    interval: 500; running: true; repeat: true
    onTriggered: console.warn("miao")
}


