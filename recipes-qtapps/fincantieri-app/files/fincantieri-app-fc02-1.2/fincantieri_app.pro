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
    options.cpp \
    logutils.cpp \
    main.cpp \
    fastengine.cpp

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

win32: QMAKE_CXXFLAGS_RELEASE += -fp:fast
win32: QMAKE_CXXFLAGS_RELEASE += -Qpar
unix: QMAKE_CXXFLAGS_RELEASE += -Ofast

# CONFIG += qtquickcompiler

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

unix: QMAKE_CXXFLAGS += -fpermissive

# Default rules for deployment.
include(deployment.pri)

# Add DBC rules
include(dbccompiler.pri)

HEADERS += \
    options.h \
    logutils.h \
    fastengine.h

DISTFILES +=

