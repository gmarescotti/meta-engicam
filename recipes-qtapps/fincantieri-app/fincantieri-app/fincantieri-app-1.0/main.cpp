#include <QQmlApplicationEngine>

#if defined(Q_OS_WIN)
#include <QGuiApplication>
#else
#include <QCoreApplication>
#endif

void cantools_qt_init(QQmlApplicationEngine *engine, QString plugin, QString device, quint32 bitrate);
void modbus_qt_init(QQmlApplicationEngine *engine, QString ip);

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QGuiApplication app(argc, argv);
#else
    QCoreApplication app(argc, argv);
#endif

    QQmlApplicationEngine engine;

    // cantools_qt_init(&engine, "ixxatcan", "", 500000);
    // modbus_qt_init(&engine, "127.0.0.1:502");
    modbus_qt_init(&engine, ":502");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

