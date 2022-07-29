#include <QQmlApplicationEngine>

#if defined(Q_OS_WIN)
#include <QGuiApplication>
#else
#include <QCoreApplication>
#endif

 #include "cantools_qt_init.h"
 #include "modbus_qt_init.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QGuiApplication app(argc, argv);
    QString qrc_file = QStringLiteral("qrc:/main_windows.qml");
#else
    QCoreApplication app(argc, argv);
    QString qrc_file = QStringLiteral("qrc:/main.qml");
#endif

    QQmlApplicationEngine engine;

#if defined(Q_OS_WIN)
    cantools_qt_init(&engine, "ixxatcan", "", 500000);
#else
    cantools_qt_init(&engine, "socketcan", "can0", 500000, 0 /* disable can sniffer */);
#endif
    modbus_qt_init(&engine, ":502"); // server

    engine.load(QUrl(qrc_file));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

