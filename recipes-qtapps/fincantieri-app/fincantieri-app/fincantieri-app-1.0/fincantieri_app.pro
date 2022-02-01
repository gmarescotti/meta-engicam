# TEMPLATE = app

win32 {
    QT += quick
}

nix {
    QT +=  qml
}

CONFIG += c++11

SOURCES += main.cpp \

RESOURCES += qml.qrc

CONFIG += qtquickcompiler

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

# Add DBC rules
include(dbccompiler.pri)

HEADERS += \

DISTFILES +=


