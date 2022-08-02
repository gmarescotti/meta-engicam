#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "cantools_qt_init.h"
#include "modbus_qt_init.h"

#include "options.h"
#include "logutils.h"
#include "fastengine.h"

#if defined(Q_OS_WIN)
#include <QGuiApplication>
#else
#include <QCoreApplication>
#endif

int main(int argc, char *argv[])
{
#if !defined(Q_OS_WIN)
    initLog();
#endif

#if defined(Q_OS_WIN)
    QGuiApplication app(argc, argv);
#else
    QCoreApplication app(argc, argv);
#endif

    MyOptions options(&app);
    MyCan *can0;
    QQmlApplicationEngine *engine = NULL;

#if defined(Q_OS_WIN)
    engine = new QQmlApplicationEngine(&app);
    engine->rootContext()->setContextProperty("options", &options);
    can0 = cantools_qt_init(engine, "ixxatcan", options.m_interface, 500000, 0);
#else
    can0 = cantools_qt_init(engine, "socketcan", options.m_interface == "" ? "can0" : options.m_interface, 500000, 0 /* disable can sniffer */);
#endif

    MyModbus *modbus_station;
    modbus_station = modbus_qt_init(engine, ":502"); // server

#if defined(Q_OS_WIN)
    engine->load(QUrl(QStringLiteral("qrc:/main_windows.qml")));
    if (engine->rootObjects().isEmpty()) return -1;
#endif

    connect_all_fastqml(options.m_skip_timer, can0, modbus_station);

    return app.exec();
}

