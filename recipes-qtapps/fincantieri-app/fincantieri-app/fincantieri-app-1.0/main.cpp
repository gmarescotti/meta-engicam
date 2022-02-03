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
    QString qrc_file = QStringLiteral("qrc:/main_windows.qml");
#else
    QCoreApplication app(argc, argv);
    QString qrc_file = QStringLiteral("qrc:/main.qml");
#endif

    QQmlApplicationEngine engine;

    //cantools_qt_init(&engine, "ixxatcan", "", 500000);
    modbus_qt_init(&engine, ":502"); // server

    engine.load(QUrl(qrc_file));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

