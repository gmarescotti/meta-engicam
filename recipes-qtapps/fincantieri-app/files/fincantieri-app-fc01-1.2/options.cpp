#include "options.h"
#include <QCommandLineOption>

MyOptions::MyOptions(QCoreApplication *app)
{
    QCommandLineParser& app_add_options(QCoreApplication &app);

    app->setApplicationName("fincantieri-app-fc01");
    app->setApplicationVersion("1.0");

    parser.setApplicationDescription(QCoreApplication::translate("main", "Gateway between MODBUS and CANBUS packets"));
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption noTimerOption(QStringList() << "n" << "no-timer", QCoreApplication::translate("main", "Don't send polling CAN packets (skip Timer)."));
    parser.addOption(noTimerOption);

    QCommandLineOption canInterfaceOption(QStringList() << "i" << "can interface", QCoreApplication::translate("main", "CAN interface <interface> to be used."), "interface", "");
    parser.addOption(canInterfaceOption);
    parser.process(*app);

    // QCommandLineParser &parser = app_add_options(app);
    m_skip_timer = parser.isSet(noTimerOption);
    m_interface = parser.value("i");
}
