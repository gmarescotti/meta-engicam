#include "mycan.h"
#include "cantools_qt.h"

#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QLoggingCategory>

#include <QObject>
#include <QTimer>
#include <QDebug>



#ifdef WITH_CUSTOMTABLEMODEL
#include "customtablemodel.h"
#endif

/**
 * @brief can0
 * deve stare globale altrimenti non funziona (forse viene deallocato dal compilatore?)
 */
extern MyCan *can0;

// static cantoolsQtSignals *cantools;
// static cantoolsQtMessages *messages_store;

MyCan *cantools_qt_init(QQmlApplicationEngine *engine, QString plugin, QString device, quint32 bitrate, const int sniffer_max_size=1000)
{

    if (can0 == NULL)
        can0 = new MyCan(plugin, device, bitrate, sniffer_max_size);

    // cantools = &cantoolsQtSignals::instance();

    // MOved to log file => QLoggingCategory::setFilterRules(QStringLiteral("qt.canbus* = true"));

    if (engine) {
        engine->rootContext()->setContextProperty("cantools", can0->signals_store);
        engine->rootContext()->setContextProperty("can_sniffer_model", &can0->dataList);
    }
    
#ifdef WITH_CUSTOMTABLEMODEL
    CustomTableModel *chartModel = new CustomTableModel();
    engine->rootContext()->setContextProperty("chartModel", chartModel);
#endif

    QObject::connect(can0, &MyCan::on_receive, can0->messages_store, &cantoolsQtMessages::can_receive_frame_callback);
    QObject::connect(can0->messages_store, &cantoolsQtMessages::sendFrame, can0, &MyCan::sendFrame);
    
    if (engine) {
        QObject::connect(engine, &QQmlApplicationEngine::objectCreated, can0, &MyCan::postconnect);
        QObject::connect(engine, &QQmlApplicationEngine::objectCreated, [engine]() {
            QTimer *timer = new QTimer(engine);
            QObject::connect(timer, &QTimer::timeout, can0->messages_store, &cantoolsQtMessages::periodic_check_validity);
            timer->start(1000);
        });
    } else {
        can0->postconnect();
    }
    
    return can0;
}

