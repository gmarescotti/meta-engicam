#pragma once

#include "mymodbus.h"
#include <QQmlApplicationEngine>

MyModbus *modbus_qt_init(QQmlApplicationEngine *engine, QString ip="");
