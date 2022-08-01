#ifndef FASTENGINE_H
#define FASTENGINE_H

#include <QCanBusDevice>

#include "mycan.h"
#include "mymodbus.h"

void apply_can_filters(QCanBusDevice *device);
void connect_all_fastqml(bool noTimer, MyCan *can0, MyModbus *mb0);

#endif // FASTENGINE_H
