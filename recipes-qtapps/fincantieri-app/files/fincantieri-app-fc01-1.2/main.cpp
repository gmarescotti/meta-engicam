#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "cantools_qt_init.h"
#include "modbus_qt_init.h"

#include "options.h"
#include "logutils.h"

#if defined(WITH_GUI)
#include <QGuiApplication>
#else
#include <QCoreApplication>

void connect_all_fastqml(bool noTimer, MyCan *can0, MyModbus *mb0);

#endif

int main(int argc, char *argv[])
{
#if !defined(Q_OS_WIN)
    initLog();
#endif

#if defined(WITH_GUI)
    QGuiApplication app(argc, argv);
#if defined(Q_OS_WIN)
    QString qrc_file = QStringLiteral("qrc:/main_windows.qml");
#else
    QString qrc_file = QStringLiteral("qrc:/main.qml");
#endif
#else
    QCoreApplication app(argc, argv);
#endif

    app.setApplicationName("fincantieri-app-fc01");
    app.setApplicationVersion("1.0");

    QCommandLineParser parser;
    parser.setApplicationDescription(QCoreApplication::translate("main", "Gateway between MODBUS and CANBUS packets"));
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption noTimerOption(QStringList() << "n" << "no-timer", QCoreApplication::translate("main", "Don't send polling CAN packets (skip Timer)."));
    parser.addOption(noTimerOption);

    QCommandLineOption canInterfaceOption(QStringList() << "i" << "can interface", QCoreApplication::translate("main", "CAN interface <interface> to be used."), "interface", "");
    parser.addOption(canInterfaceOption);
    parser.process(app);

#if WITH_GUI
    MyOptions options(&app, parser.isSet(noTimerOption));
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("options", &options);
#endif

    MyCan *can0;
#if defined(Q_OS_WIN)
    can0 = cantools_qt_init(NULL, "ixxatcan", parser.value("i"), 500000, 0);
#else
    can0 = cantools_qt_init(NULL, "socketcan", parser.value("i") == "" ? "can0" : parser.value("i"), 500000, 0 /* disable can sniffer */);
#endif

    MyModbus *modbus_station;
    modbus_station = modbus_qt_init(NULL, ":502"); // server

#if WITH_GUI
    engine.load(QUrl(qrc_file));
    if (engine.rootObjects().isEmpty()) return -1;
#endif

    connect_all_fastqml(parser.isSet(noTimerOption), can0, modbus_station);

    return app.exec();
}

