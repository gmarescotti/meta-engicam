#pragma once

#include "mycan.h"
#include <QQmlApplicationEngine>

MyCan *cantools_qt_init(QQmlApplicationEngine *engine, QString plugin, QString device, quint32 bitrate, const int sniffer_max_size=1000);
