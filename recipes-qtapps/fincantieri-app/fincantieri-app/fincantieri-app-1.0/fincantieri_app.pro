QT += serialbus serialport

win32 {
    QT += quick
}

unix {
    QT +=  qml
}

CONFIG += c++11

SOURCES += \
    main.cpp

win32 {
    RESOURCES += qml_windows.qrc
}

unix {
    RESOURCES += qml.qrc
}

# CONFIG += qtquickcompiler

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

unix: QMAKE_CXXFLAGS += -fpermissive

# Default rules for deployment.
include(deployment.pri)

# Add DBC rules
include(dbccompiler.pri)

HEADERS += \

DISTFILES +=

