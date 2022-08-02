QT += serialbus serialport

win32 {
    QT += quick
}

unix {
    QT +=  qml
}

CONFIG += c++11

SOURCES += \
    options.cpp \
    logutils.cpp \
    main.cpp \
    fastengine.cpp

win32 {
    RESOURCES += qml_windows.qrc
}

# CONFIG += qtquickcompiler

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

unix: QMAKE_CXXFLAGS += -fpermissive

QMAKE_CXXFLAGS_RELEASE += -O2

win32: QMAKE_CXXFLAGS_RELEASE += -fp:fast
win32: QMAKE_CXXFLAGS_RELEASE += -Qpar
unix: QMAKE_CXXFLAGS_RELEASE += -Ofast

# Default rules for deployment.
include(deployment.pri)

# Add DBC rules
include(dbccompiler.pri)

HEADERS += \
    options.h \
    logutils.h \
    fastengine.h

DISTFILES +=

