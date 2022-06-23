#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#if defined(Q_OS_WIN)
#include <QGuiApplication>
#else
#include <QCoreApplication>
#endif

void cantools_qt_init(QQmlApplicationEngine *engine, QString plugin, QString device, quint32 bitrate, int sniffer_max_size=0);
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

    app.setApplicationName("fincantieri-app-fc01");
    app.setApplicationVersion("1.0");

    QCommandLineParser parser;
    parser.setApplicationDescription(QCoreApplication::translate("main", "Gateway between MODBUS and CANBUS packets"));
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption noTimerOption(QStringList() << "n" << "no-timer", QCoreApplication::translate("main", "Don't send polling CAN packets (skip Timer)."));
    parser.addOption(noTimerOption);
    parser.process(app);

    QQmlApplicationEngine engine;

    QVariant &skip_timer = QVariant::fromValue(parser.isSet(noTimerOption));

    QQmlContext *context = new QQmlContext(engine.rootContext());
    context->setContextProperty("skip_timer", &skip_timer);

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

