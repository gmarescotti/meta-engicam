QT += serialbus serialport

win32 {
    QT += quick
}

unix {
    QT +=  qml
}

CONFIG -= qml_debug

CONFIG += c++11

SOURCES += \
    main.cpp

win32 {
    RESOURCES += qml_windows.qrc
}

unix {
    RESOURCES += qml.qrc
}

CONFIG(release, debug|release): DEFINES += QT_NO_DEBUG_OUTPUT
CONFIG(release, debug|release): DEFINES += QT_NO_INFO_OUTPUT
CONFIG(release, debug|release): DEFINES += QT_NO_WARNING_OUTPUT

QMAKE_CXXFLAGS_RELEASE += -O2
QMAKE_CXXFLAGS_RELEASE += -fp:fast
QMAKE_CXXFLAGS_RELEASE += -Qpar

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

