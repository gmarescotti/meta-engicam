#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "options.h"

#if defined(WITH_GUI)
#include <QGuiApplication>
void cantools_qt_init(QQmlApplicationEngine *engine, QString plugin, QString device, quint32 bitrate, int sniffer_max_size=0);
void modbus_qt_init(QQmlApplicationEngine *engine, QString ip);
#else
#include <QCoreApplication>
void fast_cantools_qt_init(QString plugin, QString device, quint32 bitrate, const int sniffer_max_size=1000);
void fast_modbus_qt_init(QString ip);
void connect_all_fastqml(bool);
#endif

int main(int argc, char *argv[])
{
#if defined(WITH_GUI)
    QGuiApplication app(argc, argv);
    QString qrc_file = QStringLiteral("qrc:/main_windows.qml");
#else
    QCoreApplication app(argc, argv);
    // QString qrc_file = QStringLiteral("qrc:/main.qml");
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

    MyOptions options(&app, parser.isSet(noTimerOption));

#if WITH_GUI
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("options", &options);
#endif

#if defined(Q_OS_WIN)
    fast_cantools_qt_init("ixxatcan", "", 500000);
#else
    cantools_qt_init(&engine, "socketcan", "can0", 500000, 0 /* disable can sniffer */);
#endif

    fast_modbus_qt_init(":502"); // server

    // engine.load(QUrl(qrc_file));

    // if (engine.rootObjects().isEmpty()) return -1;

    connect_all_fastqml(parser.isSet(noTimerOption));

    return app.exec();
}

