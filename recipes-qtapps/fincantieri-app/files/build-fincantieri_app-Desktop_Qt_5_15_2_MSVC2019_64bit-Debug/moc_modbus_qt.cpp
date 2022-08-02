/****************************************************************************
** Meta object code from reading C++ file 'modbus_qt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "modbus_qt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modbus_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QVariantSignalmodbus_t {
    QByteArrayData data[15];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantSignalmodbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantSignalmodbus_t qt_meta_stringdata_QVariantSignalmodbus = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QVariantSignalmodbus"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "t"
QT_MOC_LITERAL(4, 32, 3), // "val"
QT_MOC_LITERAL(5, 36, 10), // "silent_val"
QT_MOC_LITERAL(6, 47, 9), // "smart_val"
QT_MOC_LITERAL(7, 57, 3), // "max"
QT_MOC_LITERAL(8, 61, 3), // "min"
QT_MOC_LITERAL(9, 65, 9), // "precision"
QT_MOC_LITERAL(10, 75, 4), // "unit"
QT_MOC_LITERAL(11, 80, 4), // "name"
QT_MOC_LITERAL(12, 85, 11), // "description"
QT_MOC_LITERAL(13, 97, 7), // "message"
QT_MOC_LITERAL(14, 105, 16) // "modbusQtMessage*"

    },
    "QVariantSignalmodbus\0changed\0\0t\0val\0"
    "silent_val\0smart_val\0max\0min\0precision\0"
    "unit\0name\0description\0message\0"
    "modbusQtMessage*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantSignalmodbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,

 // properties: name, type, flags
       4, QMetaType::QVariant, 0x00495003,
       5, QMetaType::QVariant, 0x00095003,
       6, QMetaType::QVariant, 0x00495003,
       7, QMetaType::QVariant, 0x00095401,
       8, QMetaType::QVariant, 0x00095401,
       9, QMetaType::QVariant, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, 0x80000000 | 14, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QVariantSignalmodbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVariantSignalmodbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QVariantSignalmodbus::*)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVariantSignalmodbus::changed)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< modbusQtMessage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVariantSignalmodbus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->m_val; break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->m_val; break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->m_val; break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->m_max; break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->m_min; break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->m_precision; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->m_unit; break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->m_description; break;
        case 9: *reinterpret_cast< modbusQtMessage**>(_v) = _t->parent; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QVariantSignalmodbus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->send(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->silent_send(*reinterpret_cast< QVariant*>(_v)); break;
        case 2: _t->smart_send(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QVariantSignalmodbus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QVariantSignalmodbus.data,
    qt_meta_data_QVariantSignalmodbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantSignalmodbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantSignalmodbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantSignalmodbus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QVariantSignalmodbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QVariantSignalmodbus::changed(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_modbusQtMessage_t {
    QByteArrayData data[14];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_t qt_meta_stringdata_modbusQtMessage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "modbusQtMessage"
QT_MOC_LITERAL(1, 16, 8), // "on_valid"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "t"
QT_MOC_LITERAL(4, 28, 9), // "set_owner"
QT_MOC_LITERAL(5, 38, 9), // "get_owner"
QT_MOC_LITERAL(6, 48, 6), // "update"
QT_MOC_LITERAL(7, 55, 5), // "valid"
QT_MOC_LITERAL(8, 61, 7), // "frameId"
QT_MOC_LITERAL(9, 69, 11), // "is_extended"
QT_MOC_LITERAL(10, 81, 6), // "length"
QT_MOC_LITERAL(11, 88, 10), // "cycle_time"
QT_MOC_LITERAL(12, 99, 5), // "owner"
QT_MOC_LITERAL(13, 105, 14) // "stationAddress"

    },
    "modbusQtMessage\0on_valid\0\0t\0set_owner\0"
    "get_owner\0update\0valid\0frameId\0"
    "is_extended\0length\0cycle_time\0owner\0"
    "stationAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495003,
       8, QMetaType::UInt, 0x00095401,
       9, QMetaType::Bool, 0x00095401,
      10, QMetaType::UInt, 0x00095401,
      11, QMetaType::UInt, 0x00095401,
      12, QMetaType::Bool, 0x00095003,
      13, QMetaType::UInt, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void modbusQtMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_valid((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->set_owner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->get_owner();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (modbusQtMessage::*)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&modbusQtMessage::on_valid)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->m_valid; break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->m_frameId; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->is_extended; break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->m_length; break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->m_cycle_time; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->get_owner(); break;
        case 6: *reinterpret_cast< uint*>(_v) = _t->m_stationAddress; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<modbusQtMessage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_valid != *reinterpret_cast< bool*>(_v)) {
                _t->m_valid = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 5: _t->set_owner(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage.data,
    qt_meta_data_modbusQtMessage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int modbusQtMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void modbusQtMessage::on_valid(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVariantHistorySignalmodbus_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantHistorySignalmodbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantHistorySignalmodbus_t qt_meta_stringdata_QVariantHistorySignalmodbus = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QVariantHistorySignalmodbus"
QT_MOC_LITERAL(1, 28, 6), // "update"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "t"
QT_MOC_LITERAL(4, 38, 12) // "update_valid"

    },
    "QVariantHistorySignalmodbus\0update\0\0"
    "t\0update_valid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantHistorySignalmodbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QDateTime,    3,

       0        // eod
};

void QVariantHistorySignalmodbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVariantHistorySignalmodbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->update_valid((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QVariantHistorySignalmodbus::staticMetaObject = { {
    QMetaObject::SuperData::link<QVariantSignalmodbus::staticMetaObject>(),
    qt_meta_stringdata_QVariantHistorySignalmodbus.data,
    qt_meta_data_QVariantHistorySignalmodbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantHistorySignalmodbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantHistorySignalmodbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantHistorySignalmodbus.stringdata0))
        return static_cast<void*>(this);
    return QVariantSignalmodbus::qt_metacast(_clname);
}

int QVariantHistorySignalmodbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVariantSignalmodbus::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_modbusQtSignals_t {
    QByteArrayData data[52];
    char stringdata0[961];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtSignals_t qt_meta_stringdata_modbusQtSignals = {
    {
QT_MOC_LITERAL(0, 0, 15), // "modbusQtSignals"
QT_MOC_LITERAL(1, 16, 8), // "messages"
QT_MOC_LITERAL(2, 25, 17), // "modbusQtMessages*"
QT_MOC_LITERAL(3, 43, 19), // "dcdc_warning_word_2"
QT_MOC_LITERAL(4, 63, 21), // "QVariantSignalmodbus*"
QT_MOC_LITERAL(5, 85, 23), // "power_current_reference"
QT_MOC_LITERAL(6, 109, 23), // "estimated_time_to_power"
QT_MOC_LITERAL(7, 133, 26), // "dcdc_max_available_current"
QT_MOC_LITERAL(8, 160, 26), // "power_current_min_handling"
QT_MOC_LITERAL(9, 187, 17), // "fc_extended_info2"
QT_MOC_LITERAL(10, 205, 17), // "dcdc_error_word_3"
QT_MOC_LITERAL(11, 223, 15), // "fc_dcdc_current"
QT_MOC_LITERAL(12, 239, 12), // "fc_power_max"
QT_MOC_LITERAL(13, 252, 14), // "dc_bus_voltage"
QT_MOC_LITERAL(14, 267, 19), // "dcdc_warning_word_1"
QT_MOC_LITERAL(15, 287, 15), // "fcstack_voltage"
QT_MOC_LITERAL(16, 303, 19), // "dcdc_warning_word_3"
QT_MOC_LITERAL(17, 323, 24), // "status_freeze_protection"
QT_MOC_LITERAL(18, 348, 25), // "dcdc_pwr_unit_temperature"
QT_MOC_LITERAL(19, 374, 15), // "fcstack_current"
QT_MOC_LITERAL(20, 390, 18), // "system_off_request"
QT_MOC_LITERAL(21, 409, 11), // "dcdc_status"
QT_MOC_LITERAL(22, 421, 14), // "pos_mix_valve2"
QT_MOC_LITERAL(23, 436, 17), // "dcdc_error_word_1"
QT_MOC_LITERAL(24, 454, 15), // "tcm_hs_pri_out2"
QT_MOC_LITERAL(25, 470, 14), // "fc_event_code2"
QT_MOC_LITERAL(26, 485, 11), // "dcdc_reset2"
QT_MOC_LITERAL(27, 497, 14), // "fcstack_status"
QT_MOC_LITERAL(28, 512, 21), // "fast_shutdown_request"
QT_MOC_LITERAL(29, 534, 17), // "tcm_hs_sec_in_sp2"
QT_MOC_LITERAL(30, 552, 14), // "dc_bus_current"
QT_MOC_LITERAL(31, 567, 11), // "fc_power_sp"
QT_MOC_LITERAL(32, 579, 27), // "estimated_time_for_shutdown"
QT_MOC_LITERAL(33, 607, 12), // "fc_power_opt"
QT_MOC_LITERAL(34, 620, 17), // "dcdc_error_word_2"
QT_MOC_LITERAL(35, 638, 15), // "fc_dcdc_running"
QT_MOC_LITERAL(36, 654, 21), // "mute_h2_sens_exhaust2"
QT_MOC_LITERAL(37, 676, 18), // "power_current_mode"
QT_MOC_LITERAL(38, 695, 25), // "freeze_protection_request"
QT_MOC_LITERAL(39, 721, 13), // "fc_dcdc_power"
QT_MOC_LITERAL(40, 735, 12), // "fc_power_act"
QT_MOC_LITERAL(41, 748, 12), // "dcdc_voltage"
QT_MOC_LITERAL(42, 761, 12), // "fc_power_min"
QT_MOC_LITERAL(43, 774, 18), // "dcdc_status_word_1"
QT_MOC_LITERAL(44, 793, 18), // "fc_power_max_state"
QT_MOC_LITERAL(45, 812, 29), // "dcdc_max_available_fc_current"
QT_MOC_LITERAL(46, 842, 19), // "fc_power_peripheral"
QT_MOC_LITERAL(47, 862, 24), // "fc_dcdc_power_limitation"
QT_MOC_LITERAL(48, 887, 17), // "fc_extended_info1"
QT_MOC_LITERAL(49, 905, 15), // "fc_dcdc_failure"
QT_MOC_LITERAL(50, 921, 14), // "fc_event_code1"
QT_MOC_LITERAL(51, 936, 24) // "dcdc_max_available_power"

    },
    "modbusQtSignals\0messages\0modbusQtMessages*\0"
    "dcdc_warning_word_2\0QVariantSignalmodbus*\0"
    "power_current_reference\0estimated_time_to_power\0"
    "dcdc_max_available_current\0"
    "power_current_min_handling\0fc_extended_info2\0"
    "dcdc_error_word_3\0fc_dcdc_current\0"
    "fc_power_max\0dc_bus_voltage\0"
    "dcdc_warning_word_1\0fcstack_voltage\0"
    "dcdc_warning_word_3\0status_freeze_protection\0"
    "dcdc_pwr_unit_temperature\0fcstack_current\0"
    "system_off_request\0dcdc_status\0"
    "pos_mix_valve2\0dcdc_error_word_1\0"
    "tcm_hs_pri_out2\0fc_event_code2\0"
    "dcdc_reset2\0fcstack_status\0"
    "fast_shutdown_request\0tcm_hs_sec_in_sp2\0"
    "dc_bus_current\0fc_power_sp\0"
    "estimated_time_for_shutdown\0fc_power_opt\0"
    "dcdc_error_word_2\0fc_dcdc_running\0"
    "mute_h2_sens_exhaust2\0power_current_mode\0"
    "freeze_protection_request\0fc_dcdc_power\0"
    "fc_power_act\0dcdc_voltage\0fc_power_min\0"
    "dcdc_status_word_1\0fc_power_max_state\0"
    "dcdc_max_available_fc_current\0"
    "fc_power_peripheral\0fc_dcdc_power_limitation\0"
    "fc_extended_info1\0fc_dcdc_failure\0"
    "fc_event_code1\0dcdc_max_available_power"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtSignals[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      49,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 4, 0x00095409,
       6, 0x80000000 | 4, 0x00095409,
       7, 0x80000000 | 4, 0x00095409,
       8, 0x80000000 | 4, 0x00095409,
       9, 0x80000000 | 4, 0x00095409,
      10, 0x80000000 | 4, 0x00095409,
      11, 0x80000000 | 4, 0x00095409,
      12, 0x80000000 | 4, 0x00095409,
      13, 0x80000000 | 4, 0x00095409,
      14, 0x80000000 | 4, 0x00095409,
      15, 0x80000000 | 4, 0x00095409,
      16, 0x80000000 | 4, 0x00095409,
      17, 0x80000000 | 4, 0x00095409,
      18, 0x80000000 | 4, 0x00095409,
      19, 0x80000000 | 4, 0x00095409,
      20, 0x80000000 | 4, 0x00095409,
      21, 0x80000000 | 4, 0x00095409,
      22, 0x80000000 | 4, 0x00095409,
      23, 0x80000000 | 4, 0x00095409,
      24, 0x80000000 | 4, 0x00095409,
      25, 0x80000000 | 4, 0x00095409,
      26, 0x80000000 | 4, 0x00095409,
      27, 0x80000000 | 4, 0x00095409,
      28, 0x80000000 | 4, 0x00095409,
      29, 0x80000000 | 4, 0x00095409,
      30, 0x80000000 | 4, 0x00095409,
      31, 0x80000000 | 4, 0x00095409,
      32, 0x80000000 | 4, 0x00095409,
      33, 0x80000000 | 4, 0x00095409,
      34, 0x80000000 | 4, 0x00095409,
      35, 0x80000000 | 4, 0x00095409,
      36, 0x80000000 | 4, 0x00095409,
      37, 0x80000000 | 4, 0x00095409,
      38, 0x80000000 | 4, 0x00095409,
      39, 0x80000000 | 4, 0x00095409,
      40, 0x80000000 | 4, 0x00095409,
      41, 0x80000000 | 4, 0x00095409,
      42, 0x80000000 | 4, 0x00095409,
      43, 0x80000000 | 4, 0x00095409,
      44, 0x80000000 | 4, 0x00095409,
      45, 0x80000000 | 4, 0x00095409,
      46, 0x80000000 | 4, 0x00095409,
      47, 0x80000000 | 4, 0x00095409,
      48, 0x80000000 | 4, 0x00095409,
      49, 0x80000000 | 4, 0x00095409,
      50, 0x80000000 | 4, 0x00095409,
      51, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void modbusQtSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVariantSignalmodbus* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< modbusQtMessages* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtSignals *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< modbusQtMessages**>(_v) = _t->m_messages; break;
        case 1: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_warning_word_2; break;
        case 2: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_power_current_reference; break;
        case 3: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_estimated_time_to_power; break;
        case 4: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_max_available_current; break;
        case 5: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_power_current_min_handling; break;
        case 6: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_extended_info2; break;
        case 7: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_error_word_3; break;
        case 8: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_dcdc_current; break;
        case 9: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_max; break;
        case 10: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dc_bus_voltage; break;
        case 11: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_warning_word_1; break;
        case 12: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fcstack_voltage; break;
        case 13: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_warning_word_3; break;
        case 14: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_status_freeze_protection; break;
        case 15: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_pwr_unit_temperature; break;
        case 16: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fcstack_current; break;
        case 17: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_system_off_request; break;
        case 18: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_status; break;
        case 19: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_pos_mix_valve2; break;
        case 20: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_error_word_1; break;
        case 21: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_tcm_hs_pri_out2; break;
        case 22: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_event_code2; break;
        case 23: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_reset2; break;
        case 24: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fcstack_status; break;
        case 25: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fast_shutdown_request; break;
        case 26: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_tcm_hs_sec_in_sp2; break;
        case 27: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dc_bus_current; break;
        case 28: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_sp; break;
        case 29: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_estimated_time_for_shutdown; break;
        case 30: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_opt; break;
        case 31: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_error_word_2; break;
        case 32: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_dcdc_running; break;
        case 33: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_mute_h2_sens_exhaust2; break;
        case 34: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_power_current_mode; break;
        case 35: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_freeze_protection_request; break;
        case 36: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_dcdc_power; break;
        case 37: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_act; break;
        case 38: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_voltage; break;
        case 39: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_min; break;
        case 40: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_status_word_1; break;
        case 41: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_max_state; break;
        case 42: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_max_available_fc_current; break;
        case 43: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_power_peripheral; break;
        case 44: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_dcdc_power_limitation; break;
        case 45: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_extended_info1; break;
        case 46: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_dcdc_failure; break;
        case 47: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_fc_event_code1; break;
        case 48: *reinterpret_cast< QVariantSignalmodbus**>(_v) = _t->m_dcdc_max_available_power; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtSignals::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_modbusQtSignals.data,
    qt_meta_data_modbusQtSignals,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtSignals.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int modbusQtSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 49;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dc_bus_current_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dc_bus_current_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dc_bus_current_t qt_meta_stringdata_modbusQtMessage_dc_bus_current = {
    {
QT_MOC_LITERAL(0, 0, 30), // "modbusQtMessage_dc_bus_current"
QT_MOC_LITERAL(1, 31, 10), // "send_frame"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4) // "name"

    },
    "modbusQtMessage_dc_bus_current\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dc_bus_current[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dc_bus_current::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dc_bus_current *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dc_bus_current *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dc_bus_current::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dc_bus_current.data,
    qt_meta_data_modbusQtMessage_dc_bus_current,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dc_bus_current::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dc_bus_current::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dc_bus_current.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dc_bus_current::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_max_state_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_max_state_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_max_state_t qt_meta_stringdata_modbusQtMessage_fc_power_max_state = {
    {
QT_MOC_LITERAL(0, 0, 34), // "modbusQtMessage_fc_power_max_..."
QT_MOC_LITERAL(1, 35, 10), // "send_frame"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4) // "name"

    },
    "modbusQtMessage_fc_power_max_state\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_max_state[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_max_state::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_max_state *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_max_state *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_max_state::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_max_state.data,
    qt_meta_data_modbusQtMessage_fc_power_max_state,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_max_state::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_max_state::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_max_state.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_max_state::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_sp_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_sp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_sp_t qt_meta_stringdata_modbusQtMessage_fc_power_sp = {
    {
QT_MOC_LITERAL(0, 0, 27), // "modbusQtMessage_fc_power_sp"
QT_MOC_LITERAL(1, 28, 10), // "send_frame"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4) // "name"

    },
    "modbusQtMessage_fc_power_sp\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_sp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_sp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_sp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_sp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_sp::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_sp.data,
    qt_meta_data_modbusQtMessage_fc_power_sp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_sp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_sp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_sp.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_sp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power_t qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power = {
    {
QT_MOC_LITERAL(0, 0, 40), // "modbusQtMessage_dcdc_max_avai..."
QT_MOC_LITERAL(1, 41, 10), // "send_frame"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4) // "name"

    },
    "modbusQtMessage_dcdc_max_available_power\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_max_available_power[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_max_available_power::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_power *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_power *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_max_available_power::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power.data,
    qt_meta_data_modbusQtMessage_dcdc_max_available_power,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_max_available_power::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_max_available_power::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_max_available_power.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_max_available_power::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_40204_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_40204_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_40204_t qt_meta_stringdata_modbusQtMessage_msg_40204 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_40204"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_40204\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_40204[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_40204::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_40204 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_40204 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_40204::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_40204.data,
    qt_meta_data_modbusQtMessage_msg_40204,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_40204::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_40204::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_40204.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_40204::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_30201_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_30201_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_30201_t qt_meta_stringdata_modbusQtMessage_msg_30201 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_30201"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_30201\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_30201[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_30201::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_30201 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_30201 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_30201::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_30201.data,
    qt_meta_data_modbusQtMessage_msg_30201,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_30201::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_30201::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_30201.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_30201::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_min_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_min_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_min_t qt_meta_stringdata_modbusQtMessage_fc_power_min = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_fc_power_min"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_fc_power_min\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_min[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_min::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_min *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_min *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_min::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_min.data,
    qt_meta_data_modbusQtMessage_fc_power_min,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_min::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_min::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_min.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_min::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_pos_mix_valve_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_pos_mix_valve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_pos_mix_valve_t qt_meta_stringdata_modbusQtMessage_pos_mix_valve = {
    {
QT_MOC_LITERAL(0, 0, 29), // "modbusQtMessage_pos_mix_valve"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "modbusQtMessage_pos_mix_valve\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_pos_mix_valve[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_pos_mix_valve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_pos_mix_valve *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_pos_mix_valve *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_pos_mix_valve::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_pos_mix_valve.data,
    qt_meta_data_modbusQtMessage_pos_mix_valve,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_pos_mix_valve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_pos_mix_valve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_pos_mix_valve.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_pos_mix_valve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_dcdc_status_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_dcdc_status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_dcdc_status_t qt_meta_stringdata_modbusQtMessage_fc_dcdc_status = {
    {
QT_MOC_LITERAL(0, 0, 30), // "modbusQtMessage_fc_dcdc_status"
QT_MOC_LITERAL(1, 31, 10), // "send_frame"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4) // "name"

    },
    "modbusQtMessage_fc_dcdc_status\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_dcdc_status[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_dcdc_status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_status *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_status *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_dcdc_status::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_dcdc_status.data,
    qt_meta_data_modbusQtMessage_fc_dcdc_status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_dcdc_status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_dcdc_status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_dcdc_status.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_dcdc_status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3_t qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3 = {
    {
QT_MOC_LITERAL(0, 0, 35), // "modbusQtMessage_dcdc_warning_..."
QT_MOC_LITERAL(1, 36, 10), // "send_frame"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4) // "name"

    },
    "modbusQtMessage_dcdc_warning_word_3\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_warning_word_3[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_warning_word_3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_3 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_warning_word_3::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3.data,
    qt_meta_data_modbusQtMessage_dcdc_warning_word_3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_warning_word_3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_warning_word_3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_3.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_warning_word_3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fcstack_voltage_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fcstack_voltage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fcstack_voltage_t qt_meta_stringdata_modbusQtMessage_fcstack_voltage = {
    {
QT_MOC_LITERAL(0, 0, 31), // "modbusQtMessage_fcstack_voltage"
QT_MOC_LITERAL(1, 32, 10), // "send_frame"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4) // "name"

    },
    "modbusQtMessage_fcstack_voltage\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fcstack_voltage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fcstack_voltage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fcstack_voltage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fcstack_voltage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fcstack_voltage::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fcstack_voltage.data,
    qt_meta_data_modbusQtMessage_fcstack_voltage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fcstack_voltage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fcstack_voltage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fcstack_voltage.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fcstack_voltage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_30052_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_30052_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_30052_t qt_meta_stringdata_modbusQtMessage_msg_30052 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_30052"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_30052\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_30052[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_30052::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_30052 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_30052 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_30052::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_30052.data,
    qt_meta_data_modbusQtMessage_msg_30052,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_30052::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_30052::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_30052.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_30052::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature_t qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature = {
    {
QT_MOC_LITERAL(0, 0, 41), // "modbusQtMessage_dcdc_pwr_unit..."
QT_MOC_LITERAL(1, 42, 10), // "send_frame"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4) // "name"

    },
    "modbusQtMessage_dcdc_pwr_unit_temperature\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_pwr_unit_temperature[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_pwr_unit_temperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_pwr_unit_temperature *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_pwr_unit_temperature *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_pwr_unit_temperature::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature.data,
    qt_meta_data_modbusQtMessage_dcdc_pwr_unit_temperature,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_pwr_unit_temperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_pwr_unit_temperature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_pwr_unit_temperature.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_pwr_unit_temperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_voltage_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_voltage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_voltage_t qt_meta_stringdata_modbusQtMessage_dcdc_voltage = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_dcdc_voltage"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_dcdc_voltage\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_voltage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_voltage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_voltage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_voltage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_voltage::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_voltage.data,
    qt_meta_data_modbusQtMessage_dcdc_voltage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_voltage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_voltage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_voltage.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_voltage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_extended_info_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_extended_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_extended_info_t qt_meta_stringdata_modbusQtMessage_fc_extended_info = {
    {
QT_MOC_LITERAL(0, 0, 32), // "modbusQtMessage_fc_extended_info"
QT_MOC_LITERAL(1, 33, 10), // "send_frame"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4) // "name"

    },
    "modbusQtMessage_fc_extended_info\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_extended_info[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_extended_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_extended_info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_extended_info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_extended_info::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_extended_info.data,
    qt_meta_data_modbusQtMessage_fc_extended_info,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_extended_info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_extended_info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_extended_info.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_extended_info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_30051_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_30051_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_30051_t qt_meta_stringdata_modbusQtMessage_msg_30051 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_30051"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_30051\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_30051[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_30051::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_30051 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_30051 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_30051::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_30051.data,
    qt_meta_data_modbusQtMessage_msg_30051,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_30051::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_30051::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_30051.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_30051::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_estimated_time_to_power_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_estimated_time_to_power_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_estimated_time_to_power_t qt_meta_stringdata_modbusQtMessage_estimated_time_to_power = {
    {
QT_MOC_LITERAL(0, 0, 39), // "modbusQtMessage_estimated_tim..."
QT_MOC_LITERAL(1, 40, 10), // "send_frame"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 4) // "name"

    },
    "modbusQtMessage_estimated_time_to_power\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_estimated_time_to_power[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_estimated_time_to_power::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_estimated_time_to_power *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_estimated_time_to_power *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_estimated_time_to_power::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_estimated_time_to_power.data,
    qt_meta_data_modbusQtMessage_estimated_time_to_power,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_estimated_time_to_power::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_estimated_time_to_power::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_estimated_time_to_power.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_estimated_time_to_power::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_command_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_command_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_command_t qt_meta_stringdata_modbusQtMessage_dcdc_command = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_dcdc_command"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_dcdc_command\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_command[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_command::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_command *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_command *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_command::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_command.data,
    qt_meta_data_modbusQtMessage_dcdc_command,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_command::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_command::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_command.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_command::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown_t qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown = {
    {
QT_MOC_LITERAL(0, 0, 43), // "modbusQtMessage_estimated_tim..."
QT_MOC_LITERAL(1, 44, 10), // "send_frame"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 4) // "name"

    },
    "modbusQtMessage_estimated_time_for_shutdown\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_estimated_time_for_shutdown[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_estimated_time_for_shutdown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_estimated_time_for_shutdown *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_estimated_time_for_shutdown *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_estimated_time_for_shutdown::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown.data,
    qt_meta_data_modbusQtMessage_estimated_time_for_shutdown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_estimated_time_for_shutdown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_estimated_time_for_shutdown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_estimated_time_for_shutdown.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_estimated_time_for_shutdown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dc_bus_voltage_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dc_bus_voltage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dc_bus_voltage_t qt_meta_stringdata_modbusQtMessage_dc_bus_voltage = {
    {
QT_MOC_LITERAL(0, 0, 30), // "modbusQtMessage_dc_bus_voltage"
QT_MOC_LITERAL(1, 31, 10), // "send_frame"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4) // "name"

    },
    "modbusQtMessage_dc_bus_voltage\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dc_bus_voltage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dc_bus_voltage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dc_bus_voltage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dc_bus_voltage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dc_bus_voltage::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dc_bus_voltage.data,
    qt_meta_data_modbusQtMessage_dc_bus_voltage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dc_bus_voltage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dc_bus_voltage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dc_bus_voltage.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dc_bus_voltage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp_t qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp = {
    {
QT_MOC_LITERAL(0, 0, 32), // "modbusQtMessage_tcm_hs_sec_in_sp"
QT_MOC_LITERAL(1, 33, 10), // "send_frame"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4) // "name"

    },
    "modbusQtMessage_tcm_hs_sec_in_sp\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_tcm_hs_sec_in_sp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_tcm_hs_sec_in_sp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_tcm_hs_sec_in_sp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_tcm_hs_sec_in_sp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_tcm_hs_sec_in_sp::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp.data,
    qt_meta_data_modbusQtMessage_tcm_hs_sec_in_sp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_tcm_hs_sec_in_sp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_tcm_hs_sec_in_sp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_tcm_hs_sec_in_sp.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_tcm_hs_sec_in_sp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_power_current_mode_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_power_current_mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_power_current_mode_t qt_meta_stringdata_modbusQtMessage_power_current_mode = {
    {
QT_MOC_LITERAL(0, 0, 34), // "modbusQtMessage_power_current..."
QT_MOC_LITERAL(1, 35, 10), // "send_frame"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4) // "name"

    },
    "modbusQtMessage_power_current_mode\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_power_current_mode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_power_current_mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_power_current_mode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_power_current_mode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_power_current_mode::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_power_current_mode.data,
    qt_meta_data_modbusQtMessage_power_current_mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_power_current_mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_power_current_mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_power_current_mode.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_power_current_mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_event_code_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_event_code_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_event_code_t qt_meta_stringdata_modbusQtMessage_fc_event_code = {
    {
QT_MOC_LITERAL(0, 0, 29), // "modbusQtMessage_fc_event_code"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "modbusQtMessage_fc_event_code\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_event_code[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_event_code::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_event_code *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_event_code *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_event_code::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_event_code.data,
    qt_meta_data_modbusQtMessage_fc_event_code,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_event_code::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_event_code::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_event_code.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_event_code::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_act_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_act_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_act_t qt_meta_stringdata_modbusQtMessage_fc_power_act = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_fc_power_act"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_fc_power_act\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_act[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_act::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_act *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_act *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_act::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_act.data,
    qt_meta_data_modbusQtMessage_fc_power_act,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_act::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_act::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_act.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_act::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current_t qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current = {
    {
QT_MOC_LITERAL(0, 0, 45), // "modbusQtMessage_dcdc_max_avai..."
QT_MOC_LITERAL(1, 46, 10), // "send_frame"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 4) // "name"

    },
    "modbusQtMessage_dcdc_max_available_fc_current\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_max_available_fc_current[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_max_available_fc_current::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_fc_current *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_fc_current *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_max_available_fc_current::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current.data,
    qt_meta_data_modbusQtMessage_dcdc_max_available_fc_current,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_max_available_fc_current::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_max_available_fc_current::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_max_available_fc_current.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_max_available_fc_current::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_power_current_min_handling_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_power_current_min_handling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_power_current_min_handling_t qt_meta_stringdata_modbusQtMessage_power_current_min_handling = {
    {
QT_MOC_LITERAL(0, 0, 42), // "modbusQtMessage_power_current..."
QT_MOC_LITERAL(1, 43, 10), // "send_frame"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 4) // "name"

    },
    "modbusQtMessage_power_current_min_handling\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_power_current_min_handling[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_power_current_min_handling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_power_current_min_handling *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_power_current_min_handling *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_power_current_min_handling::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_power_current_min_handling.data,
    qt_meta_data_modbusQtMessage_power_current_min_handling,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_power_current_min_handling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_power_current_min_handling::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_power_current_min_handling.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_power_current_min_handling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current_t qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current = {
    {
QT_MOC_LITERAL(0, 0, 42), // "modbusQtMessage_dcdc_max_avai..."
QT_MOC_LITERAL(1, 43, 10), // "send_frame"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 4) // "name"

    },
    "modbusQtMessage_dcdc_max_available_current\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_max_available_current[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_max_available_current::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_current *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_max_available_current *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_max_available_current::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current.data,
    qt_meta_data_modbusQtMessage_dcdc_max_available_current,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_max_available_current::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_max_available_current::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_max_available_current.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_max_available_current::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1_t qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1 = {
    {
QT_MOC_LITERAL(0, 0, 35), // "modbusQtMessage_dcdc_warning_..."
QT_MOC_LITERAL(1, 36, 10), // "send_frame"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4) // "name"

    },
    "modbusQtMessage_dcdc_warning_word_1\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_warning_word_1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_warning_word_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_warning_word_1::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1.data,
    qt_meta_data_modbusQtMessage_dcdc_warning_word_1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_warning_word_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_warning_word_1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_1.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_warning_word_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_status_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_status_t qt_meta_stringdata_modbusQtMessage_dcdc_status = {
    {
QT_MOC_LITERAL(0, 0, 27), // "modbusQtMessage_dcdc_status"
QT_MOC_LITERAL(1, 28, 10), // "send_frame"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4) // "name"

    },
    "modbusQtMessage_dcdc_status\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_status[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_status *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_status *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_status::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_status.data,
    qt_meta_data_modbusQtMessage_dcdc_status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_status.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out_t qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out = {
    {
QT_MOC_LITERAL(0, 0, 30), // "modbusQtMessage_tcm_hs_pri_out"
QT_MOC_LITERAL(1, 31, 10), // "send_frame"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4) // "name"

    },
    "modbusQtMessage_tcm_hs_pri_out\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_tcm_hs_pri_out[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_tcm_hs_pri_out::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_tcm_hs_pri_out *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_tcm_hs_pri_out *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_tcm_hs_pri_out::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out.data,
    qt_meta_data_modbusQtMessage_tcm_hs_pri_out,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_tcm_hs_pri_out::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_tcm_hs_pri_out::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_tcm_hs_pri_out.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_tcm_hs_pri_out::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2_t qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2 = {
    {
QT_MOC_LITERAL(0, 0, 35), // "modbusQtMessage_dcdc_warning_..."
QT_MOC_LITERAL(1, 36, 10), // "send_frame"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4) // "name"

    },
    "modbusQtMessage_dcdc_warning_word_2\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_dcdc_warning_word_2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_dcdc_warning_word_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_dcdc_warning_word_2 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_dcdc_warning_word_2::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2.data,
    qt_meta_data_modbusQtMessage_dcdc_warning_word_2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_dcdc_warning_word_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_dcdc_warning_word_2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_dcdc_warning_word_2.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_dcdc_warning_word_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_peripheral_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_peripheral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_peripheral_t qt_meta_stringdata_modbusQtMessage_fc_power_peripheral = {
    {
QT_MOC_LITERAL(0, 0, 35), // "modbusQtMessage_fc_power_peri..."
QT_MOC_LITERAL(1, 36, 10), // "send_frame"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4) // "name"

    },
    "modbusQtMessage_fc_power_peripheral\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_peripheral[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_peripheral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_peripheral *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_peripheral *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_peripheral::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_peripheral.data,
    qt_meta_data_modbusQtMessage_fc_power_peripheral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_peripheral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_peripheral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_peripheral.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_peripheral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_30053_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_30053_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_30053_t qt_meta_stringdata_modbusQtMessage_msg_30053 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_30053"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_30053\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_30053[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_30053::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_30053 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_30053 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_30053::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_30053.data,
    qt_meta_data_modbusQtMessage_msg_30053,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_30053::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_30053::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_30053.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_30053::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fcstack_status_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fcstack_status_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fcstack_status_t qt_meta_stringdata_modbusQtMessage_fcstack_status = {
    {
QT_MOC_LITERAL(0, 0, 30), // "modbusQtMessage_fcstack_status"
QT_MOC_LITERAL(1, 31, 10), // "send_frame"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4) // "name"

    },
    "modbusQtMessage_fcstack_status\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fcstack_status[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fcstack_status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fcstack_status *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fcstack_status *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fcstack_status::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fcstack_status.data,
    qt_meta_data_modbusQtMessage_fcstack_status,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fcstack_status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fcstack_status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fcstack_status.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fcstack_status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_opt_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_opt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_opt_t qt_meta_stringdata_modbusQtMessage_fc_power_opt = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_fc_power_opt"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_fc_power_opt\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_opt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_opt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_opt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_opt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_opt::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_opt.data,
    qt_meta_data_modbusQtMessage_fc_power_opt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_opt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_opt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_opt.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_opt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation_t qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation = {
    {
QT_MOC_LITERAL(0, 0, 40), // "modbusQtMessage_fc_dcdc_power..."
QT_MOC_LITERAL(1, 41, 10), // "send_frame"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4) // "name"

    },
    "modbusQtMessage_fc_dcdc_power_limitation\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_dcdc_power_limitation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_dcdc_power_limitation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_power_limitation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_power_limitation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_dcdc_power_limitation::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation.data,
    qt_meta_data_modbusQtMessage_fc_dcdc_power_limitation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_dcdc_power_limitation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_dcdc_power_limitation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_limitation.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_dcdc_power_limitation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_power_current_reference_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_power_current_reference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_power_current_reference_t qt_meta_stringdata_modbusQtMessage_power_current_reference = {
    {
QT_MOC_LITERAL(0, 0, 39), // "modbusQtMessage_power_current..."
QT_MOC_LITERAL(1, 40, 10), // "send_frame"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 4) // "name"

    },
    "modbusQtMessage_power_current_reference\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_power_current_reference[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_power_current_reference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_power_current_reference *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_power_current_reference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_power_current_reference::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_power_current_reference.data,
    qt_meta_data_modbusQtMessage_power_current_reference,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_power_current_reference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_power_current_reference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_power_current_reference.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_power_current_reference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_power_max_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_power_max_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_power_max_t qt_meta_stringdata_modbusQtMessage_fc_power_max = {
    {
QT_MOC_LITERAL(0, 0, 28), // "modbusQtMessage_fc_power_max"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "modbusQtMessage_fc_power_max\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_power_max[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_power_max::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_power_max *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_power_max *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_power_max::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_power_max.data,
    qt_meta_data_modbusQtMessage_fc_power_max,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_power_max::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_power_max::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_power_max.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_power_max::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_msg_30101_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_msg_30101_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_msg_30101_t qt_meta_stringdata_modbusQtMessage_msg_30101 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "modbusQtMessage_msg_30101"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "modbusQtMessage_msg_30101\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_msg_30101[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_msg_30101::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_msg_30101 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_msg_30101 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_msg_30101::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_msg_30101.data,
    qt_meta_data_modbusQtMessage_msg_30101,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_msg_30101::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_msg_30101::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_msg_30101.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_msg_30101::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_dcdc_power_t qt_meta_stringdata_modbusQtMessage_fc_dcdc_power = {
    {
QT_MOC_LITERAL(0, 0, 29), // "modbusQtMessage_fc_dcdc_power"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "modbusQtMessage_fc_dcdc_power\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_dcdc_power[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_dcdc_power::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_power *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_power *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_dcdc_power::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_dcdc_power.data,
    qt_meta_data_modbusQtMessage_fc_dcdc_power,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_dcdc_power::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_dcdc_power::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_dcdc_power.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_dcdc_power::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fc_dcdc_current_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fc_dcdc_current_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fc_dcdc_current_t qt_meta_stringdata_modbusQtMessage_fc_dcdc_current = {
    {
QT_MOC_LITERAL(0, 0, 31), // "modbusQtMessage_fc_dcdc_current"
QT_MOC_LITERAL(1, 32, 10), // "send_frame"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4) // "name"

    },
    "modbusQtMessage_fc_dcdc_current\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fc_dcdc_current[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fc_dcdc_current::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_current *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fc_dcdc_current *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fc_dcdc_current::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fc_dcdc_current.data,
    qt_meta_data_modbusQtMessage_fc_dcdc_current,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fc_dcdc_current::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fc_dcdc_current::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fc_dcdc_current.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fc_dcdc_current::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessage_fcstack_current_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessage_fcstack_current_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessage_fcstack_current_t qt_meta_stringdata_modbusQtMessage_fcstack_current = {
    {
QT_MOC_LITERAL(0, 0, 31), // "modbusQtMessage_fcstack_current"
QT_MOC_LITERAL(1, 32, 10), // "send_frame"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4) // "name"

    },
    "modbusQtMessage_fcstack_current\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessage_fcstack_current[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void modbusQtMessage_fcstack_current::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessage_fcstack_current *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessage_fcstack_current *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessage_fcstack_current::staticMetaObject = { {
    QMetaObject::SuperData::link<modbusQtMessage::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessage_fcstack_current.data,
    qt_meta_data_modbusQtMessage_fcstack_current,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessage_fcstack_current::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessage_fcstack_current::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessage_fcstack_current.stringdata0))
        return static_cast<void*>(this);
    return modbusQtMessage::qt_metacast(_clname);
}

int modbusQtMessage_fcstack_current::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = modbusQtMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_modbusQtMessages_t {
    QByteArrayData data[54];
    char stringdata0[863];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modbusQtMessages_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modbusQtMessages_t qt_meta_stringdata_modbusQtMessages = {
    {
QT_MOC_LITERAL(0, 0, 16), // "modbusQtMessages"
QT_MOC_LITERAL(1, 17, 9), // "sendFrame"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "QModbusDataUnit"
QT_MOC_LITERAL(4, 44, 5), // "frame"
QT_MOC_LITERAL(5, 50, 14), // "stationAddress"
QT_MOC_LITERAL(6, 65, 6), // "update"
QT_MOC_LITERAL(7, 72, 16), // "m_stationAddress"
QT_MOC_LITERAL(8, 89, 9), // "m_frameId"
QT_MOC_LITERAL(9, 99, 7), // "wlength"
QT_MOC_LITERAL(10, 107, 23), // "periodic_check_validity"
QT_MOC_LITERAL(11, 131, 14), // "dc_bus_current"
QT_MOC_LITERAL(12, 146, 16), // "modbusQtMessage*"
QT_MOC_LITERAL(13, 163, 18), // "fc_power_max_state"
QT_MOC_LITERAL(14, 182, 11), // "fc_power_sp"
QT_MOC_LITERAL(15, 194, 24), // "dcdc_max_available_power"
QT_MOC_LITERAL(16, 219, 9), // "msg_40204"
QT_MOC_LITERAL(17, 229, 9), // "msg_30201"
QT_MOC_LITERAL(18, 239, 12), // "fc_power_min"
QT_MOC_LITERAL(19, 252, 13), // "pos_mix_valve"
QT_MOC_LITERAL(20, 266, 14), // "fc_dcdc_status"
QT_MOC_LITERAL(21, 281, 19), // "dcdc_warning_word_3"
QT_MOC_LITERAL(22, 301, 15), // "fcstack_voltage"
QT_MOC_LITERAL(23, 317, 9), // "msg_30052"
QT_MOC_LITERAL(24, 327, 25), // "dcdc_pwr_unit_temperature"
QT_MOC_LITERAL(25, 353, 12), // "dcdc_voltage"
QT_MOC_LITERAL(26, 366, 16), // "fc_extended_info"
QT_MOC_LITERAL(27, 383, 9), // "msg_30051"
QT_MOC_LITERAL(28, 393, 23), // "estimated_time_to_power"
QT_MOC_LITERAL(29, 417, 12), // "dcdc_command"
QT_MOC_LITERAL(30, 430, 27), // "estimated_time_for_shutdown"
QT_MOC_LITERAL(31, 458, 14), // "dc_bus_voltage"
QT_MOC_LITERAL(32, 473, 16), // "tcm_hs_sec_in_sp"
QT_MOC_LITERAL(33, 490, 18), // "power_current_mode"
QT_MOC_LITERAL(34, 509, 13), // "fc_event_code"
QT_MOC_LITERAL(35, 523, 12), // "fc_power_act"
QT_MOC_LITERAL(36, 536, 29), // "dcdc_max_available_fc_current"
QT_MOC_LITERAL(37, 566, 26), // "power_current_min_handling"
QT_MOC_LITERAL(38, 593, 26), // "dcdc_max_available_current"
QT_MOC_LITERAL(39, 620, 19), // "dcdc_warning_word_1"
QT_MOC_LITERAL(40, 640, 11), // "dcdc_status"
QT_MOC_LITERAL(41, 652, 14), // "tcm_hs_pri_out"
QT_MOC_LITERAL(42, 667, 19), // "dcdc_warning_word_2"
QT_MOC_LITERAL(43, 687, 19), // "fc_power_peripheral"
QT_MOC_LITERAL(44, 707, 9), // "msg_30053"
QT_MOC_LITERAL(45, 717, 14), // "fcstack_status"
QT_MOC_LITERAL(46, 732, 12), // "fc_power_opt"
QT_MOC_LITERAL(47, 745, 24), // "fc_dcdc_power_limitation"
QT_MOC_LITERAL(48, 770, 23), // "power_current_reference"
QT_MOC_LITERAL(49, 794, 12), // "fc_power_max"
QT_MOC_LITERAL(50, 807, 9), // "msg_30101"
QT_MOC_LITERAL(51, 817, 13), // "fc_dcdc_power"
QT_MOC_LITERAL(52, 831, 15), // "fc_dcdc_current"
QT_MOC_LITERAL(53, 847, 15) // "fcstack_current"

    },
    "modbusQtMessages\0sendFrame\0\0QModbusDataUnit\0"
    "frame\0stationAddress\0update\0"
    "m_stationAddress\0m_frameId\0wlength\0"
    "periodic_check_validity\0dc_bus_current\0"
    "modbusQtMessage*\0fc_power_max_state\0"
    "fc_power_sp\0dcdc_max_available_power\0"
    "msg_40204\0msg_30201\0fc_power_min\0"
    "pos_mix_valve\0fc_dcdc_status\0"
    "dcdc_warning_word_3\0fcstack_voltage\0"
    "msg_30052\0dcdc_pwr_unit_temperature\0"
    "dcdc_voltage\0fc_extended_info\0msg_30051\0"
    "estimated_time_to_power\0dcdc_command\0"
    "estimated_time_for_shutdown\0dc_bus_voltage\0"
    "tcm_hs_sec_in_sp\0power_current_mode\0"
    "fc_event_code\0fc_power_act\0"
    "dcdc_max_available_fc_current\0"
    "power_current_min_handling\0"
    "dcdc_max_available_current\0"
    "dcdc_warning_word_1\0dcdc_status\0"
    "tcm_hs_pri_out\0dcdc_warning_word_2\0"
    "fc_power_peripheral\0msg_30053\0"
    "fcstack_status\0fc_power_opt\0"
    "fc_dcdc_power_limitation\0"
    "power_current_reference\0fc_power_max\0"
    "msg_30101\0fc_dcdc_power\0fc_dcdc_current\0"
    "fcstack_current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modbusQtMessages[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      42,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00095409,
      13, 0x80000000 | 12, 0x00095409,
      14, 0x80000000 | 12, 0x00095409,
      15, 0x80000000 | 12, 0x00095409,
      16, 0x80000000 | 12, 0x00095409,
      17, 0x80000000 | 12, 0x00095409,
      18, 0x80000000 | 12, 0x00095409,
      19, 0x80000000 | 12, 0x00095409,
      20, 0x80000000 | 12, 0x00095409,
      21, 0x80000000 | 12, 0x00095409,
      22, 0x80000000 | 12, 0x00095409,
      23, 0x80000000 | 12, 0x00095409,
      24, 0x80000000 | 12, 0x00095409,
      25, 0x80000000 | 12, 0x00095409,
      26, 0x80000000 | 12, 0x00095409,
      27, 0x80000000 | 12, 0x00095409,
      28, 0x80000000 | 12, 0x00095409,
      29, 0x80000000 | 12, 0x00095409,
      30, 0x80000000 | 12, 0x00095409,
      31, 0x80000000 | 12, 0x00095409,
      32, 0x80000000 | 12, 0x00095409,
      33, 0x80000000 | 12, 0x00095409,
      34, 0x80000000 | 12, 0x00095409,
      35, 0x80000000 | 12, 0x00095409,
      36, 0x80000000 | 12, 0x00095409,
      37, 0x80000000 | 12, 0x00095409,
      38, 0x80000000 | 12, 0x00095409,
      39, 0x80000000 | 12, 0x00095409,
      40, 0x80000000 | 12, 0x00095409,
      41, 0x80000000 | 12, 0x00095409,
      42, 0x80000000 | 12, 0x00095409,
      43, 0x80000000 | 12, 0x00095409,
      44, 0x80000000 | 12, 0x00095409,
      45, 0x80000000 | 12, 0x00095409,
      46, 0x80000000 | 12, 0x00095409,
      47, 0x80000000 | 12, 0x00095409,
      48, 0x80000000 | 12, 0x00095409,
      49, 0x80000000 | 12, 0x00095409,
      50, 0x80000000 | 12, 0x00095409,
      51, 0x80000000 | 12, 0x00095409,
      52, 0x80000000 | 12, 0x00095409,
      53, 0x80000000 | 12, 0x00095409,

       0        // eod
};

void modbusQtMessages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<modbusQtMessages *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFrame((*reinterpret_cast< const QModbusDataUnit(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->update((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3]))); break;
        case 2: _t->periodic_check_validity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (modbusQtMessages::*)(const QModbusDataUnit & , uint ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&modbusQtMessages::sendFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (modbusQtMessages::*)(const uint , const uint , const uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&modbusQtMessages::update)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< modbusQtMessage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<modbusQtMessages *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dc_bus_current; break;
        case 1: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_max_state; break;
        case 2: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_sp; break;
        case 3: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_max_available_power; break;
        case 4: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_40204; break;
        case 5: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_30201; break;
        case 6: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_min; break;
        case 7: *reinterpret_cast< modbusQtMessage**>(_v) = _t->pos_mix_valve; break;
        case 8: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_dcdc_status; break;
        case 9: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_warning_word_3; break;
        case 10: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fcstack_voltage; break;
        case 11: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_30052; break;
        case 12: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_pwr_unit_temperature; break;
        case 13: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_voltage; break;
        case 14: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_extended_info; break;
        case 15: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_30051; break;
        case 16: *reinterpret_cast< modbusQtMessage**>(_v) = _t->estimated_time_to_power; break;
        case 17: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_command; break;
        case 18: *reinterpret_cast< modbusQtMessage**>(_v) = _t->estimated_time_for_shutdown; break;
        case 19: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dc_bus_voltage; break;
        case 20: *reinterpret_cast< modbusQtMessage**>(_v) = _t->tcm_hs_sec_in_sp; break;
        case 21: *reinterpret_cast< modbusQtMessage**>(_v) = _t->power_current_mode; break;
        case 22: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_event_code; break;
        case 23: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_act; break;
        case 24: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_max_available_fc_current; break;
        case 25: *reinterpret_cast< modbusQtMessage**>(_v) = _t->power_current_min_handling; break;
        case 26: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_max_available_current; break;
        case 27: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_warning_word_1; break;
        case 28: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_status; break;
        case 29: *reinterpret_cast< modbusQtMessage**>(_v) = _t->tcm_hs_pri_out; break;
        case 30: *reinterpret_cast< modbusQtMessage**>(_v) = _t->dcdc_warning_word_2; break;
        case 31: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_peripheral; break;
        case 32: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_30053; break;
        case 33: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fcstack_status; break;
        case 34: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_opt; break;
        case 35: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_dcdc_power_limitation; break;
        case 36: *reinterpret_cast< modbusQtMessage**>(_v) = _t->power_current_reference; break;
        case 37: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_power_max; break;
        case 38: *reinterpret_cast< modbusQtMessage**>(_v) = _t->msg_30101; break;
        case 39: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_dcdc_power; break;
        case 40: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fc_dcdc_current; break;
        case 41: *reinterpret_cast< modbusQtMessage**>(_v) = _t->fcstack_current; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject modbusQtMessages::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_modbusQtMessages.data,
    qt_meta_data_modbusQtMessages,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *modbusQtMessages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modbusQtMessages::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_modbusQtMessages.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int modbusQtMessages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 42;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void modbusQtMessages::sendFrame(const QModbusDataUnit & _t1, uint _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< modbusQtMessages *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void modbusQtMessages::update(const uint _t1, const uint _t2, const uint _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
