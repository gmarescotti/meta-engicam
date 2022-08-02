/****************************************************************************
** Meta object code from reading C++ file 'cantools_qt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "cantools_qt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cantools_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QVariantSignalcantools_t {
    QByteArrayData data[15];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantSignalcantools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantSignalcantools_t qt_meta_stringdata_QVariantSignalcantools = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QVariantSignalcantools"
QT_MOC_LITERAL(1, 23, 7), // "changed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 1), // "t"
QT_MOC_LITERAL(4, 34, 3), // "val"
QT_MOC_LITERAL(5, 38, 10), // "silent_val"
QT_MOC_LITERAL(6, 49, 9), // "smart_val"
QT_MOC_LITERAL(7, 59, 3), // "max"
QT_MOC_LITERAL(8, 63, 3), // "min"
QT_MOC_LITERAL(9, 67, 9), // "precision"
QT_MOC_LITERAL(10, 77, 4), // "unit"
QT_MOC_LITERAL(11, 82, 4), // "name"
QT_MOC_LITERAL(12, 87, 11), // "description"
QT_MOC_LITERAL(13, 99, 7), // "message"
QT_MOC_LITERAL(14, 107, 18) // "cantoolsQtMessage*"

    },
    "QVariantSignalcantools\0changed\0\0t\0val\0"
    "silent_val\0smart_val\0max\0min\0precision\0"
    "unit\0name\0description\0message\0"
    "cantoolsQtMessage*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantSignalcantools[] = {

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

void QVariantSignalcantools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVariantSignalcantools *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QVariantSignalcantools::*)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVariantSignalcantools::changed)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cantoolsQtMessage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVariantSignalcantools *>(_o);
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
        case 9: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->parent; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QVariantSignalcantools *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject QVariantSignalcantools::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QVariantSignalcantools.data,
    qt_meta_data_QVariantSignalcantools,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantSignalcantools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantSignalcantools::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantSignalcantools.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QVariantSignalcantools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QVariantSignalcantools::changed(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_cantoolsQtMessage_t {
    QByteArrayData data[12];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_t qt_meta_stringdata_cantoolsQtMessage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "cantoolsQtMessage"
QT_MOC_LITERAL(1, 18, 8), // "on_valid"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 1), // "t"
QT_MOC_LITERAL(4, 30, 9), // "set_owner"
QT_MOC_LITERAL(5, 40, 9), // "get_owner"
QT_MOC_LITERAL(6, 50, 5), // "valid"
QT_MOC_LITERAL(7, 56, 7), // "frameId"
QT_MOC_LITERAL(8, 64, 11), // "is_extended"
QT_MOC_LITERAL(9, 76, 6), // "length"
QT_MOC_LITERAL(10, 83, 10), // "cycle_time"
QT_MOC_LITERAL(11, 94, 5) // "owner"

    },
    "cantoolsQtMessage\0on_valid\0\0t\0set_owner\0"
    "get_owner\0valid\0frameId\0is_extended\0"
    "length\0cycle_time\0owner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495003,
       7, QMetaType::UInt, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::UInt, 0x00095401,
      10, QMetaType::UInt, 0x00095401,
      11, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void cantoolsQtMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_valid((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->set_owner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->get_owner();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cantoolsQtMessage::*)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cantoolsQtMessage::on_valid)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->m_valid; break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->m_frameId; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->is_extended; break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->m_length; break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->m_cycle_time; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->get_owner(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<cantoolsQtMessage *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage.data,
    qt_meta_data_cantoolsQtMessage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cantoolsQtMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void cantoolsQtMessage::on_valid(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QVariantHistorySignalcantools_t {
    QByteArrayData data[5];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantHistorySignalcantools_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantHistorySignalcantools_t qt_meta_stringdata_QVariantHistorySignalcantools = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QVariantHistorySignalcantools"
QT_MOC_LITERAL(1, 30, 6), // "update"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 1), // "t"
QT_MOC_LITERAL(4, 40, 12) // "update_valid"

    },
    "QVariantHistorySignalcantools\0update\0"
    "\0t\0update_valid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantHistorySignalcantools[] = {

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

void QVariantHistorySignalcantools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVariantHistorySignalcantools *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->update_valid((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QVariantHistorySignalcantools::staticMetaObject = { {
    QMetaObject::SuperData::link<QVariantSignalcantools::staticMetaObject>(),
    qt_meta_stringdata_QVariantHistorySignalcantools.data,
    qt_meta_data_QVariantHistorySignalcantools,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantHistorySignalcantools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantHistorySignalcantools::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantHistorySignalcantools.stringdata0))
        return static_cast<void*>(this);
    return QVariantSignalcantools::qt_metacast(_clname);
}

int QVariantHistorySignalcantools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVariantSignalcantools::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state_t {
    QByteArrayData data[2];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state_t qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QVariantSignal_tx_pdo1_system..."
QT_MOC_LITERAL(1, 36, 7) // "choices"

    },
    "QVariantSignal_tx_pdo1_system_state\0"
    "choices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantSignal_tx_pdo1_system_state[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void QVariantSignal_tx_pdo1_system_state::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVariantSignal_tx_pdo1_system_state *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->m_choices; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QVariantSignal_tx_pdo1_system_state::staticMetaObject = { {
    QMetaObject::SuperData::link<QVariantSignalcantools::staticMetaObject>(),
    qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state.data,
    qt_meta_data_QVariantSignal_tx_pdo1_system_state,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantSignal_tx_pdo1_system_state::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantSignal_tx_pdo1_system_state::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantSignal_tx_pdo1_system_state.stringdata0))
        return static_cast<void*>(this);
    return QVariantSignalcantools::qt_metacast(_clname);
}

int QVariantSignal_tx_pdo1_system_state::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVariantSignalcantools::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference_t {
    QByteArrayData data[2];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference_t qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference = {
    {
QT_MOC_LITERAL(0, 0, 45), // "QVariantSignal_tx_sdo_power_c..."
QT_MOC_LITERAL(1, 46, 7) // "choices"

    },
    "QVariantSignal_tx_sdo_power_current_reference\0"
    "choices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantSignal_tx_sdo_power_current_reference[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void QVariantSignal_tx_sdo_power_current_reference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVariantSignal_tx_sdo_power_current_reference *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->m_choices; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QVariantSignal_tx_sdo_power_current_reference::staticMetaObject = { {
    QMetaObject::SuperData::link<QVariantSignalcantools::staticMetaObject>(),
    qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference.data,
    qt_meta_data_QVariantSignal_tx_sdo_power_current_reference,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantSignal_tx_sdo_power_current_reference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantSignal_tx_sdo_power_current_reference::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_reference.stringdata0))
        return static_cast<void*>(this);
    return QVariantSignalcantools::qt_metacast(_clname);
}

int QVariantSignal_tx_sdo_power_current_reference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVariantSignalcantools::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode_t {
    QByteArrayData data[2];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode_t qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QVariantSignal_tx_sdo_power_c..."
QT_MOC_LITERAL(1, 41, 7) // "choices"

    },
    "QVariantSignal_tx_sdo_power_current_mode\0"
    "choices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantSignal_tx_sdo_power_current_mode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void QVariantSignal_tx_sdo_power_current_mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVariantSignal_tx_sdo_power_current_mode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->m_choices; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QVariantSignal_tx_sdo_power_current_mode::staticMetaObject = { {
    QMetaObject::SuperData::link<QVariantSignalcantools::staticMetaObject>(),
    qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode.data,
    qt_meta_data_QVariantSignal_tx_sdo_power_current_mode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVariantSignal_tx_sdo_power_current_mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantSignal_tx_sdo_power_current_mode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantSignal_tx_sdo_power_current_mode.stringdata0))
        return static_cast<void*>(this);
    return QVariantSignalcantools::qt_metacast(_clname);
}

int QVariantSignal_tx_sdo_power_current_mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVariantSignalcantools::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_cantoolsQtSignals_t {
    QByteArrayData data[201];
    char stringdata0[4086];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtSignals_t qt_meta_stringdata_cantoolsQtSignals = {
    {
QT_MOC_LITERAL(0, 0, 17), // "cantoolsQtSignals"
QT_MOC_LITERAL(1, 18, 8), // "messages"
QT_MOC_LITERAL(2, 27, 19), // "cantoolsQtMessages*"
QT_MOC_LITERAL(3, 47, 24), // "tx_pdo1_system_sub_state"
QT_MOC_LITERAL(4, 72, 23), // "QVariantSignalcantools*"
QT_MOC_LITERAL(5, 96, 21), // "dc_dc_sta3_err_wrd1_b"
QT_MOC_LITERAL(6, 118, 30), // "rx_sdo_power_current_reference"
QT_MOC_LITERAL(7, 149, 32), // "tx_pdo1_status_freeze_protection"
QT_MOC_LITERAL(8, 182, 21), // "dc_dc_sta3_err_wrd2_b"
QT_MOC_LITERAL(9, 204, 14), // "tx_pdo1_spare1"
QT_MOC_LITERAL(10, 219, 18), // "tx_pdo1_vn1_spare1"
QT_MOC_LITERAL(11, 238, 22), // "dc_dc_sta3_warn_wrd1_b"
QT_MOC_LITERAL(12, 261, 20), // "mute_h2_sens_exhaust"
QT_MOC_LITERAL(13, 282, 24), // "dc_dc_sta5_trafo_temp3_b"
QT_MOC_LITERAL(14, 307, 20), // "tx_pdo1_system_state"
QT_MOC_LITERAL(15, 328, 24), // "dc_dc_sta5_trafo_temp4_b"
QT_MOC_LITERAL(16, 353, 18), // "tx_pdo1_vn1_spare2"
QT_MOC_LITERAL(17, 372, 24), // "dc_dc_sta5_uls_est_act_b"
QT_MOC_LITERAL(18, 397, 24), // "dc_dc_sta5_uhs_est_act_b"
QT_MOC_LITERAL(19, 422, 20), // "dcxc_current_fc_side"
QT_MOC_LITERAL(20, 443, 20), // "dcxc_voltage_fc_side"
QT_MOC_LITERAL(21, 464, 22), // "dc_dc_sta6_ind_temp1_b"
QT_MOC_LITERAL(22, 487, 31), // "tx_pdo1_estimated_time_to_power"
QT_MOC_LITERAL(23, 519, 22), // "dcxc_voltage_link_side"
QT_MOC_LITERAL(24, 542, 22), // "dc_dc_sta6_ind_temp2_b"
QT_MOC_LITERAL(25, 565, 22), // "dcxc_current_link_side"
QT_MOC_LITERAL(26, 588, 22), // "dc_dc_sta6_ind_temp3_b"
QT_MOC_LITERAL(27, 611, 33), // "tx_sdo_power_current_min_hand..."
QT_MOC_LITERAL(28, 645, 16), // "tcm_hs_sec_in_sp"
QT_MOC_LITERAL(29, 662, 22), // "dc_dc_sta6_ind_temp4_b"
QT_MOC_LITERAL(30, 685, 14), // "tcm_hs_pri_out"
QT_MOC_LITERAL(31, 700, 22), // "dc_dc_sta6_pcb_temp1_b"
QT_MOC_LITERAL(32, 723, 13), // "pos_mix_valve"
QT_MOC_LITERAL(33, 737, 20), // "dc_dc_sta2_uhs_act_b"
QT_MOC_LITERAL(34, 758, 20), // "dc_dc_sta2_uls_act_b"
QT_MOC_LITERAL(35, 779, 31), // "tx_pdo4_power_current_min_state"
QT_MOC_LITERAL(36, 811, 30), // "dc_dc_sta1_hs_pre_charge_fbk_b"
QT_MOC_LITERAL(37, 842, 25), // "tx_pdo4_power_current_min"
QT_MOC_LITERAL(38, 868, 19), // "dc_dc_sta1_spare4_b"
QT_MOC_LITERAL(39, 888, 14), // "tx_pdo1_spare2"
QT_MOC_LITERAL(40, 903, 31), // "tx_pdo4_power_current_max_state"
QT_MOC_LITERAL(41, 935, 20), // "dc_dc_sta2_ihs_act_b"
QT_MOC_LITERAL(42, 956, 30), // "tx_sdo_power_current_reference"
QT_MOC_LITERAL(43, 987, 25), // "tx_pdo4_power_current_max"
QT_MOC_LITERAL(44, 1013, 19), // "dc_dc_sta1_spare3_b"
QT_MOC_LITERAL(45, 1033, 14), // "rx_pdo1_spare3"
QT_MOC_LITERAL(46, 1048, 20), // "dc_dc_sta1_rol_cnt_b"
QT_MOC_LITERAL(47, 1069, 23), // "dc_dc_sta1_t_pow_unit_b"
QT_MOC_LITERAL(48, 1093, 14), // "tx_pdo3_spare1"
QT_MOC_LITERAL(49, 1108, 22), // "dc_dc_sta6_pcb_temp2_b"
QT_MOC_LITERAL(50, 1131, 25), // "tx_pdo3_power_current_opt"
QT_MOC_LITERAL(51, 1157, 24), // "dc_dc_sta5_trafo_temp2_b"
QT_MOC_LITERAL(52, 1182, 32), // "tx_pdo3_power_current_peripheral"
QT_MOC_LITERAL(53, 1215, 24), // "dc_dc_sta5_trafo_temp1_b"
QT_MOC_LITERAL(54, 1240, 25), // "tx_pdo3_power_current_act"
QT_MOC_LITERAL(55, 1266, 22), // "dc_dc_sta3_warn_wrd2_b"
QT_MOC_LITERAL(56, 1289, 23), // "dc_dc_sta1_rele_1_fbk_b"
QT_MOC_LITERAL(57, 1313, 22), // "dc_dc_sta1_cur_avlbl_b"
QT_MOC_LITERAL(58, 1336, 35), // "tx_pdo1_estimated_time_for_sh..."
QT_MOC_LITERAL(59, 1372, 20), // "dc_dc_sta2_ils_act_b"
QT_MOC_LITERAL(60, 1393, 22), // "dc_dc_sta6_pcb_temp3_b"
QT_MOC_LITERAL(61, 1416, 23), // "tx_pdo2_extended_info_b"
QT_MOC_LITERAL(62, 1440, 20), // "dc_dc_sta1_fan_act_b"
QT_MOC_LITERAL(63, 1461, 23), // "tx_pdo2_extended_info_a"
QT_MOC_LITERAL(64, 1485, 19), // "dc_dc_sta1_spare2_b"
QT_MOC_LITERAL(65, 1505, 22), // "dc_dc_sta6_pcb_temp4_b"
QT_MOC_LITERAL(66, 1528, 20), // "tx_pdo2_event_code_b"
QT_MOC_LITERAL(67, 1549, 19), // "dc_dc_sta1_spare1_b"
QT_MOC_LITERAL(68, 1569, 20), // "tx_pdo2_event_code_a"
QT_MOC_LITERAL(69, 1590, 16), // "dc_dc_sta1_run_b"
QT_MOC_LITERAL(70, 1607, 16), // "dc_dc_sta1_rdy_b"
QT_MOC_LITERAL(71, 1624, 17), // "dc_dc_sta1_warn_b"
QT_MOC_LITERAL(72, 1642, 23), // "dc_dc_sta1_rele_2_fbk_b"
QT_MOC_LITERAL(73, 1666, 23), // "dc_dc_sta1_rele_3_fbk_b"
QT_MOC_LITERAL(74, 1690, 33), // "rx_sdo_power_current_min_hand..."
QT_MOC_LITERAL(75, 1724, 30), // "dc_dc_sta1_ls_pre_charge_fbk_b"
QT_MOC_LITERAL(76, 1755, 15), // "dcxc_current_sp"
QT_MOC_LITERAL(77, 1771, 24), // "dc_dc_sta1_ihs_lim_max_b"
QT_MOC_LITERAL(78, 1796, 32), // "rx_pdo1_freeze_protectio_request"
QT_MOC_LITERAL(79, 1829, 17), // "dc_dc_sta1_spare1"
QT_MOC_LITERAL(80, 1847, 24), // "dc_dc_sta1_uls_lim_min_b"
QT_MOC_LITERAL(81, 1872, 14), // "rx_pdo1_spare2"
QT_MOC_LITERAL(82, 1887, 24), // "dc_dc_sta1_uls_lim_max_b"
QT_MOC_LITERAL(83, 1912, 14), // "dc_dc_ctrl1_en"
QT_MOC_LITERAL(84, 1927, 20), // "dc_dc_sta6_pcb_temp3"
QT_MOC_LITERAL(85, 1948, 22), // "dc_dc_sta1_ihs_lim_min"
QT_MOC_LITERAL(86, 1971, 19), // "dc_dc_ctrl3_uhs_min"
QT_MOC_LITERAL(87, 1991, 20), // "dc_dc_sta6_ind_temp3"
QT_MOC_LITERAL(88, 2012, 21), // "dc_dc_ctrl1_main_mode"
QT_MOC_LITERAL(89, 2034, 22), // "dc_dc_sta1_ils_lim_min"
QT_MOC_LITERAL(90, 2057, 20), // "dc_dc_sta6_pcb_temp2"
QT_MOC_LITERAL(91, 2078, 22), // "dc_dc_sta1_uls_lim_min"
QT_MOC_LITERAL(92, 2101, 7), // "data_08"
QT_MOC_LITERAL(93, 2109, 22), // "dc_dc_sta1_ihs_lim_max"
QT_MOC_LITERAL(94, 2132, 20), // "dc_dc_sta6_ind_temp4"
QT_MOC_LITERAL(95, 2153, 7), // "data_07"
QT_MOC_LITERAL(96, 2161, 19), // "dc_dc_ctrl1_main_sp"
QT_MOC_LITERAL(97, 2181, 22), // "dc_dc_sta1_uhs_lim_max"
QT_MOC_LITERAL(98, 2204, 20), // "dc_dc_sta6_pcb_temp1"
QT_MOC_LITERAL(99, 2225, 7), // "data_06"
QT_MOC_LITERAL(100, 2233, 22), // "dc_dc_sta1_uhs_lim_min"
QT_MOC_LITERAL(101, 2256, 20), // "dc_dc_sta6_ind_temp2"
QT_MOC_LITERAL(102, 2277, 5), // "data2"
QT_MOC_LITERAL(103, 2283, 17), // "dc_dc4_warn_word4"
QT_MOC_LITERAL(104, 2301, 20), // "dc_dc_sta6_ind_temp1"
QT_MOC_LITERAL(105, 2322, 17), // "dc_dc4_warn_word3"
QT_MOC_LITERAL(106, 2340, 7), // "data_03"
QT_MOC_LITERAL(107, 2348, 17), // "dc_dc4_warn_word2"
QT_MOC_LITERAL(108, 2366, 22), // "dc_dc_sta5_uhs_est_act"
QT_MOC_LITERAL(109, 2389, 17), // "dc_dc4_warn_word1"
QT_MOC_LITERAL(110, 2407, 7), // "data_02"
QT_MOC_LITERAL(111, 2415, 22), // "dc_dc_sta5_trafo_temp1"
QT_MOC_LITERAL(112, 2438, 16), // "dc_dc3_err_word4"
QT_MOC_LITERAL(113, 2455, 22), // "dc_dc_sta5_trafo_temp4"
QT_MOC_LITERAL(114, 2478, 22), // "dc_dc_sta5_trafo_temp2"
QT_MOC_LITERAL(115, 2501, 16), // "dc_dc3_err_word3"
QT_MOC_LITERAL(116, 2518, 20), // "dc_dc_sta1_cur_avlbl"
QT_MOC_LITERAL(117, 2539, 22), // "dc_dc_sta5_uls_est_act"
QT_MOC_LITERAL(118, 2562, 16), // "dc_dc3_err_word2"
QT_MOC_LITERAL(119, 2579, 7), // "data_01"
QT_MOC_LITERAL(120, 2587, 19), // "dc_dc_ctrl2_uls_min"
QT_MOC_LITERAL(121, 2607, 16), // "dc_dc3_err_word1"
QT_MOC_LITERAL(122, 2624, 19), // "dc_dc_ctrl2_ils_max"
QT_MOC_LITERAL(123, 2644, 20), // "dc_dc_sta3_warn_wrd2"
QT_MOC_LITERAL(124, 2665, 20), // "dc_dc_sta3_warn_wrd1"
QT_MOC_LITERAL(125, 2686, 5), // "data6"
QT_MOC_LITERAL(126, 2692, 20), // "dc_dc_sta6_pcb_temp4"
QT_MOC_LITERAL(127, 2713, 19), // "dc_dc2_max_avlb_pwr"
QT_MOC_LITERAL(128, 2733, 16), // "dcdc_ctrl1_span4"
QT_MOC_LITERAL(129, 2750, 19), // "dc_dc_sta3_err_wrd2"
QT_MOC_LITERAL(130, 2770, 13), // "dc_dc2_spare1"
QT_MOC_LITERAL(131, 2784, 16), // "dcdc_ctrl1_span3"
QT_MOC_LITERAL(132, 2801, 19), // "dc_dc_sta3_err_wrd1"
QT_MOC_LITERAL(133, 2821, 23), // "dc_dc2_max_avlb_current"
QT_MOC_LITERAL(134, 2845, 18), // "dc_dc_sta2_uhs_act"
QT_MOC_LITERAL(135, 2864, 14), // "dc_dc_sta1_run"
QT_MOC_LITERAL(136, 2879, 22), // "dc_dc_sta1_uls_lim_max"
QT_MOC_LITERAL(137, 2902, 20), // "dc_dc2_pwr_unit_temp"
QT_MOC_LITERAL(138, 2923, 22), // "dc_dc_sta5_trafo_temp3"
QT_MOC_LITERAL(139, 2946, 19), // "dc_dc_ctrl2_uls_max"
QT_MOC_LITERAL(140, 2966, 18), // "dc_dc_sta2_uls_act"
QT_MOC_LITERAL(141, 2985, 25), // "rx_sdo_power_current_mode"
QT_MOC_LITERAL(142, 3011, 19), // "dc_dc_ctrl2_ils_min"
QT_MOC_LITERAL(143, 3031, 16), // "dcdc_ctrl1_span2"
QT_MOC_LITERAL(144, 3048, 18), // "dc_dc_sta2_ihs_act"
QT_MOC_LITERAL(145, 3067, 13), // "dc_dc1_spare3"
QT_MOC_LITERAL(146, 3081, 14), // "dc_dc_ctrl1_on"
QT_MOC_LITERAL(147, 3096, 18), // "dc_dc_sta2_ils_act"
QT_MOC_LITERAL(148, 3115, 7), // "data_04"
QT_MOC_LITERAL(149, 3123, 16), // "dc_dc1_power_act"
QT_MOC_LITERAL(150, 3140, 19), // "dc_dc_ctrl1_rele_in"
QT_MOC_LITERAL(151, 3160, 19), // "dc_dc1_status_word1"
QT_MOC_LITERAL(152, 3180, 28), // "dc_dc_sta1_hs_pre_charge_fbk"
QT_MOC_LITERAL(153, 3209, 5), // "data0"
QT_MOC_LITERAL(154, 3215, 17), // "dc_dc_sta1_spare2"
QT_MOC_LITERAL(155, 3233, 7), // "data_05"
QT_MOC_LITERAL(156, 3241, 13), // "dc_dc1_status"
QT_MOC_LITERAL(157, 3255, 17), // "dc_dc_sta1_spare4"
QT_MOC_LITERAL(158, 3273, 5), // "data5"
QT_MOC_LITERAL(159, 3279, 21), // "dc_dc_sta1_rele_1_fbk"
QT_MOC_LITERAL(160, 3301, 28), // "dc_dc_sta1_ls_pre_charge_fbk"
QT_MOC_LITERAL(161, 3330, 13), // "dc_dc1_spare1"
QT_MOC_LITERAL(162, 3344, 10), // "dcdc_reset"
QT_MOC_LITERAL(163, 3355, 21), // "dc_dc_sta1_rele_2_fbk"
QT_MOC_LITERAL(164, 3377, 23), // "rx_pdo1_maintenance_cmd"
QT_MOC_LITERAL(165, 3401, 14), // "dc_dc1_failure"
QT_MOC_LITERAL(166, 3416, 21), // "dc_dc_sta1_t_pow_unit"
QT_MOC_LITERAL(167, 3438, 5), // "data1"
QT_MOC_LITERAL(168, 3444, 18), // "dc_dc_sta1_fan_act"
QT_MOC_LITERAL(169, 3463, 21), // "dc_dc_sta1_rele_3_fbk"
QT_MOC_LITERAL(170, 3485, 14), // "dc_dc1_running"
QT_MOC_LITERAL(171, 3500, 22), // "dc_dc_sta1_ils_lim_max"
QT_MOC_LITERAL(172, 3523, 18), // "dc_dc_sta1_rol_cnt"
QT_MOC_LITERAL(173, 3542, 19), // "dc_dc_ctrl3_uhs_max"
QT_MOC_LITERAL(174, 3562, 14), // "rx_pdo1_spare1"
QT_MOC_LITERAL(175, 3577, 24), // "dc_dc_sta1_ils_lim_min_b"
QT_MOC_LITERAL(176, 3602, 25), // "tx_sdo_power_current_mode"
QT_MOC_LITERAL(177, 3628, 24), // "dc_dc_sta1_ils_lim_max_b"
QT_MOC_LITERAL(178, 3653, 17), // "dc_dc_sta1_spare3"
QT_MOC_LITERAL(179, 3671, 16), // "dc_dc_sta1_err_b"
QT_MOC_LITERAL(180, 3688, 17), // "tx_pdo1_pc_spare3"
QT_MOC_LITERAL(181, 3706, 26), // "rx_pdo1_system_off_request"
QT_MOC_LITERAL(182, 3733, 19), // "dc_dc_ctrl3_ihs_min"
QT_MOC_LITERAL(183, 3753, 24), // "dc_dc_sta1_uhs_lim_max_b"
QT_MOC_LITERAL(184, 3778, 17), // "tx_pdo1_pc_spare2"
QT_MOC_LITERAL(185, 3796, 29), // "rx_pdo1_fast_shutdown_request"
QT_MOC_LITERAL(186, 3826, 19), // "dc_dc_ctrl3_ihs_max"
QT_MOC_LITERAL(187, 3846, 24), // "dc_dc_sta1_uhs_lim_min_b"
QT_MOC_LITERAL(188, 3871, 17), // "tx_pdo1_pc_spare1"
QT_MOC_LITERAL(189, 3889, 25), // "rx_pdo1_power_current_max"
QT_MOC_LITERAL(190, 3915, 5), // "data4"
QT_MOC_LITERAL(191, 3921, 21), // "dcxc_connection_state"
QT_MOC_LITERAL(192, 3943, 14), // "dc_dc_sta1_err"
QT_MOC_LITERAL(193, 3958, 20), // "dc_dc_ctrl1_rele_out"
QT_MOC_LITERAL(194, 3979, 15), // "dc_dc_sta1_warn"
QT_MOC_LITERAL(195, 3995, 24), // "dc_dc_sta1_ihs_lim_min_b"
QT_MOC_LITERAL(196, 4020, 5), // "data3"
QT_MOC_LITERAL(197, 4026, 16), // "dcdc_ctrl1_span1"
QT_MOC_LITERAL(198, 4043, 14), // "dc_dc_sta1_rdy"
QT_MOC_LITERAL(199, 4058, 21), // "dc_dc_ctrl1_fault_ack"
QT_MOC_LITERAL(200, 4080, 5) // "data7"

    },
    "cantoolsQtSignals\0messages\0"
    "cantoolsQtMessages*\0tx_pdo1_system_sub_state\0"
    "QVariantSignalcantools*\0dc_dc_sta3_err_wrd1_b\0"
    "rx_sdo_power_current_reference\0"
    "tx_pdo1_status_freeze_protection\0"
    "dc_dc_sta3_err_wrd2_b\0tx_pdo1_spare1\0"
    "tx_pdo1_vn1_spare1\0dc_dc_sta3_warn_wrd1_b\0"
    "mute_h2_sens_exhaust\0dc_dc_sta5_trafo_temp3_b\0"
    "tx_pdo1_system_state\0dc_dc_sta5_trafo_temp4_b\0"
    "tx_pdo1_vn1_spare2\0dc_dc_sta5_uls_est_act_b\0"
    "dc_dc_sta5_uhs_est_act_b\0dcxc_current_fc_side\0"
    "dcxc_voltage_fc_side\0dc_dc_sta6_ind_temp1_b\0"
    "tx_pdo1_estimated_time_to_power\0"
    "dcxc_voltage_link_side\0dc_dc_sta6_ind_temp2_b\0"
    "dcxc_current_link_side\0dc_dc_sta6_ind_temp3_b\0"
    "tx_sdo_power_current_min_handling\0"
    "tcm_hs_sec_in_sp\0dc_dc_sta6_ind_temp4_b\0"
    "tcm_hs_pri_out\0dc_dc_sta6_pcb_temp1_b\0"
    "pos_mix_valve\0dc_dc_sta2_uhs_act_b\0"
    "dc_dc_sta2_uls_act_b\0"
    "tx_pdo4_power_current_min_state\0"
    "dc_dc_sta1_hs_pre_charge_fbk_b\0"
    "tx_pdo4_power_current_min\0dc_dc_sta1_spare4_b\0"
    "tx_pdo1_spare2\0tx_pdo4_power_current_max_state\0"
    "dc_dc_sta2_ihs_act_b\0"
    "tx_sdo_power_current_reference\0"
    "tx_pdo4_power_current_max\0dc_dc_sta1_spare3_b\0"
    "rx_pdo1_spare3\0dc_dc_sta1_rol_cnt_b\0"
    "dc_dc_sta1_t_pow_unit_b\0tx_pdo3_spare1\0"
    "dc_dc_sta6_pcb_temp2_b\0tx_pdo3_power_current_opt\0"
    "dc_dc_sta5_trafo_temp2_b\0"
    "tx_pdo3_power_current_peripheral\0"
    "dc_dc_sta5_trafo_temp1_b\0"
    "tx_pdo3_power_current_act\0"
    "dc_dc_sta3_warn_wrd2_b\0dc_dc_sta1_rele_1_fbk_b\0"
    "dc_dc_sta1_cur_avlbl_b\0"
    "tx_pdo1_estimated_time_for_shutdown\0"
    "dc_dc_sta2_ils_act_b\0dc_dc_sta6_pcb_temp3_b\0"
    "tx_pdo2_extended_info_b\0dc_dc_sta1_fan_act_b\0"
    "tx_pdo2_extended_info_a\0dc_dc_sta1_spare2_b\0"
    "dc_dc_sta6_pcb_temp4_b\0tx_pdo2_event_code_b\0"
    "dc_dc_sta1_spare1_b\0tx_pdo2_event_code_a\0"
    "dc_dc_sta1_run_b\0dc_dc_sta1_rdy_b\0"
    "dc_dc_sta1_warn_b\0dc_dc_sta1_rele_2_fbk_b\0"
    "dc_dc_sta1_rele_3_fbk_b\0"
    "rx_sdo_power_current_min_handling\0"
    "dc_dc_sta1_ls_pre_charge_fbk_b\0"
    "dcxc_current_sp\0dc_dc_sta1_ihs_lim_max_b\0"
    "rx_pdo1_freeze_protectio_request\0"
    "dc_dc_sta1_spare1\0dc_dc_sta1_uls_lim_min_b\0"
    "rx_pdo1_spare2\0dc_dc_sta1_uls_lim_max_b\0"
    "dc_dc_ctrl1_en\0dc_dc_sta6_pcb_temp3\0"
    "dc_dc_sta1_ihs_lim_min\0dc_dc_ctrl3_uhs_min\0"
    "dc_dc_sta6_ind_temp3\0dc_dc_ctrl1_main_mode\0"
    "dc_dc_sta1_ils_lim_min\0dc_dc_sta6_pcb_temp2\0"
    "dc_dc_sta1_uls_lim_min\0data_08\0"
    "dc_dc_sta1_ihs_lim_max\0dc_dc_sta6_ind_temp4\0"
    "data_07\0dc_dc_ctrl1_main_sp\0"
    "dc_dc_sta1_uhs_lim_max\0dc_dc_sta6_pcb_temp1\0"
    "data_06\0dc_dc_sta1_uhs_lim_min\0"
    "dc_dc_sta6_ind_temp2\0data2\0dc_dc4_warn_word4\0"
    "dc_dc_sta6_ind_temp1\0dc_dc4_warn_word3\0"
    "data_03\0dc_dc4_warn_word2\0"
    "dc_dc_sta5_uhs_est_act\0dc_dc4_warn_word1\0"
    "data_02\0dc_dc_sta5_trafo_temp1\0"
    "dc_dc3_err_word4\0dc_dc_sta5_trafo_temp4\0"
    "dc_dc_sta5_trafo_temp2\0dc_dc3_err_word3\0"
    "dc_dc_sta1_cur_avlbl\0dc_dc_sta5_uls_est_act\0"
    "dc_dc3_err_word2\0data_01\0dc_dc_ctrl2_uls_min\0"
    "dc_dc3_err_word1\0dc_dc_ctrl2_ils_max\0"
    "dc_dc_sta3_warn_wrd2\0dc_dc_sta3_warn_wrd1\0"
    "data6\0dc_dc_sta6_pcb_temp4\0"
    "dc_dc2_max_avlb_pwr\0dcdc_ctrl1_span4\0"
    "dc_dc_sta3_err_wrd2\0dc_dc2_spare1\0"
    "dcdc_ctrl1_span3\0dc_dc_sta3_err_wrd1\0"
    "dc_dc2_max_avlb_current\0dc_dc_sta2_uhs_act\0"
    "dc_dc_sta1_run\0dc_dc_sta1_uls_lim_max\0"
    "dc_dc2_pwr_unit_temp\0dc_dc_sta5_trafo_temp3\0"
    "dc_dc_ctrl2_uls_max\0dc_dc_sta2_uls_act\0"
    "rx_sdo_power_current_mode\0dc_dc_ctrl2_ils_min\0"
    "dcdc_ctrl1_span2\0dc_dc_sta2_ihs_act\0"
    "dc_dc1_spare3\0dc_dc_ctrl1_on\0"
    "dc_dc_sta2_ils_act\0data_04\0dc_dc1_power_act\0"
    "dc_dc_ctrl1_rele_in\0dc_dc1_status_word1\0"
    "dc_dc_sta1_hs_pre_charge_fbk\0data0\0"
    "dc_dc_sta1_spare2\0data_05\0dc_dc1_status\0"
    "dc_dc_sta1_spare4\0data5\0dc_dc_sta1_rele_1_fbk\0"
    "dc_dc_sta1_ls_pre_charge_fbk\0dc_dc1_spare1\0"
    "dcdc_reset\0dc_dc_sta1_rele_2_fbk\0"
    "rx_pdo1_maintenance_cmd\0dc_dc1_failure\0"
    "dc_dc_sta1_t_pow_unit\0data1\0"
    "dc_dc_sta1_fan_act\0dc_dc_sta1_rele_3_fbk\0"
    "dc_dc1_running\0dc_dc_sta1_ils_lim_max\0"
    "dc_dc_sta1_rol_cnt\0dc_dc_ctrl3_uhs_max\0"
    "rx_pdo1_spare1\0dc_dc_sta1_ils_lim_min_b\0"
    "tx_sdo_power_current_mode\0"
    "dc_dc_sta1_ils_lim_max_b\0dc_dc_sta1_spare3\0"
    "dc_dc_sta1_err_b\0tx_pdo1_pc_spare3\0"
    "rx_pdo1_system_off_request\0"
    "dc_dc_ctrl3_ihs_min\0dc_dc_sta1_uhs_lim_max_b\0"
    "tx_pdo1_pc_spare2\0rx_pdo1_fast_shutdown_request\0"
    "dc_dc_ctrl3_ihs_max\0dc_dc_sta1_uhs_lim_min_b\0"
    "tx_pdo1_pc_spare1\0rx_pdo1_power_current_max\0"
    "data4\0dcxc_connection_state\0dc_dc_sta1_err\0"
    "dc_dc_ctrl1_rele_out\0dc_dc_sta1_warn\0"
    "dc_dc_sta1_ihs_lim_min_b\0data3\0"
    "dcdc_ctrl1_span1\0dc_dc_sta1_rdy\0"
    "dc_dc_ctrl1_fault_ack\0data7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtSignals[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
     198,   14, // properties
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
      52, 0x80000000 | 4, 0x00095409,
      53, 0x80000000 | 4, 0x00095409,
      54, 0x80000000 | 4, 0x00095409,
      55, 0x80000000 | 4, 0x00095409,
      56, 0x80000000 | 4, 0x00095409,
      57, 0x80000000 | 4, 0x00095409,
      58, 0x80000000 | 4, 0x00095409,
      59, 0x80000000 | 4, 0x00095409,
      60, 0x80000000 | 4, 0x00095409,
      61, 0x80000000 | 4, 0x00095409,
      62, 0x80000000 | 4, 0x00095409,
      63, 0x80000000 | 4, 0x00095409,
      64, 0x80000000 | 4, 0x00095409,
      65, 0x80000000 | 4, 0x00095409,
      66, 0x80000000 | 4, 0x00095409,
      67, 0x80000000 | 4, 0x00095409,
      68, 0x80000000 | 4, 0x00095409,
      69, 0x80000000 | 4, 0x00095409,
      70, 0x80000000 | 4, 0x00095409,
      71, 0x80000000 | 4, 0x00095409,
      72, 0x80000000 | 4, 0x00095409,
      73, 0x80000000 | 4, 0x00095409,
      74, 0x80000000 | 4, 0x00095409,
      75, 0x80000000 | 4, 0x00095409,
      76, 0x80000000 | 4, 0x00095409,
      77, 0x80000000 | 4, 0x00095409,
      78, 0x80000000 | 4, 0x00095409,
      79, 0x80000000 | 4, 0x00095409,
      80, 0x80000000 | 4, 0x00095409,
      81, 0x80000000 | 4, 0x00095409,
      82, 0x80000000 | 4, 0x00095409,
      83, 0x80000000 | 4, 0x00095409,
      84, 0x80000000 | 4, 0x00095409,
      85, 0x80000000 | 4, 0x00095409,
      86, 0x80000000 | 4, 0x00095409,
      87, 0x80000000 | 4, 0x00095409,
      88, 0x80000000 | 4, 0x00095409,
      89, 0x80000000 | 4, 0x00095409,
      90, 0x80000000 | 4, 0x00095409,
      91, 0x80000000 | 4, 0x00095409,
      92, 0x80000000 | 4, 0x00095409,
      93, 0x80000000 | 4, 0x00095409,
      94, 0x80000000 | 4, 0x00095409,
      95, 0x80000000 | 4, 0x00095409,
      96, 0x80000000 | 4, 0x00095409,
      97, 0x80000000 | 4, 0x00095409,
      98, 0x80000000 | 4, 0x00095409,
      99, 0x80000000 | 4, 0x00095409,
     100, 0x80000000 | 4, 0x00095409,
     101, 0x80000000 | 4, 0x00095409,
     102, 0x80000000 | 4, 0x00095409,
     103, 0x80000000 | 4, 0x00095409,
     104, 0x80000000 | 4, 0x00095409,
     105, 0x80000000 | 4, 0x00095409,
     106, 0x80000000 | 4, 0x00095409,
     107, 0x80000000 | 4, 0x00095409,
     108, 0x80000000 | 4, 0x00095409,
     109, 0x80000000 | 4, 0x00095409,
     110, 0x80000000 | 4, 0x00095409,
     111, 0x80000000 | 4, 0x00095409,
     112, 0x80000000 | 4, 0x00095409,
     113, 0x80000000 | 4, 0x00095409,
     114, 0x80000000 | 4, 0x00095409,
     115, 0x80000000 | 4, 0x00095409,
     116, 0x80000000 | 4, 0x00095409,
     117, 0x80000000 | 4, 0x00095409,
     118, 0x80000000 | 4, 0x00095409,
     119, 0x80000000 | 4, 0x00095409,
     120, 0x80000000 | 4, 0x00095409,
     121, 0x80000000 | 4, 0x00095409,
     122, 0x80000000 | 4, 0x00095409,
     123, 0x80000000 | 4, 0x00095409,
     124, 0x80000000 | 4, 0x00095409,
     125, 0x80000000 | 4, 0x00095409,
     126, 0x80000000 | 4, 0x00095409,
     127, 0x80000000 | 4, 0x00095409,
     128, 0x80000000 | 4, 0x00095409,
     129, 0x80000000 | 4, 0x00095409,
     130, 0x80000000 | 4, 0x00095409,
     131, 0x80000000 | 4, 0x00095409,
     132, 0x80000000 | 4, 0x00095409,
     133, 0x80000000 | 4, 0x00095409,
     134, 0x80000000 | 4, 0x00095409,
     135, 0x80000000 | 4, 0x00095409,
     136, 0x80000000 | 4, 0x00095409,
     137, 0x80000000 | 4, 0x00095409,
     138, 0x80000000 | 4, 0x00095409,
     139, 0x80000000 | 4, 0x00095409,
     140, 0x80000000 | 4, 0x00095409,
     141, 0x80000000 | 4, 0x00095409,
     142, 0x80000000 | 4, 0x00095409,
     143, 0x80000000 | 4, 0x00095409,
     144, 0x80000000 | 4, 0x00095409,
     145, 0x80000000 | 4, 0x00095409,
     146, 0x80000000 | 4, 0x00095409,
     147, 0x80000000 | 4, 0x00095409,
     148, 0x80000000 | 4, 0x00095409,
     149, 0x80000000 | 4, 0x00095409,
     150, 0x80000000 | 4, 0x00095409,
     151, 0x80000000 | 4, 0x00095409,
     152, 0x80000000 | 4, 0x00095409,
     153, 0x80000000 | 4, 0x00095409,
     154, 0x80000000 | 4, 0x00095409,
     155, 0x80000000 | 4, 0x00095409,
     156, 0x80000000 | 4, 0x00095409,
     157, 0x80000000 | 4, 0x00095409,
     158, 0x80000000 | 4, 0x00095409,
     159, 0x80000000 | 4, 0x00095409,
     160, 0x80000000 | 4, 0x00095409,
     161, 0x80000000 | 4, 0x00095409,
     162, 0x80000000 | 4, 0x00095409,
     163, 0x80000000 | 4, 0x00095409,
     164, 0x80000000 | 4, 0x00095409,
     165, 0x80000000 | 4, 0x00095409,
     166, 0x80000000 | 4, 0x00095409,
     167, 0x80000000 | 4, 0x00095409,
     168, 0x80000000 | 4, 0x00095409,
     169, 0x80000000 | 4, 0x00095409,
     170, 0x80000000 | 4, 0x00095409,
     171, 0x80000000 | 4, 0x00095409,
     172, 0x80000000 | 4, 0x00095409,
     173, 0x80000000 | 4, 0x00095409,
     174, 0x80000000 | 4, 0x00095409,
     175, 0x80000000 | 4, 0x00095409,
     176, 0x80000000 | 4, 0x00095409,
     177, 0x80000000 | 4, 0x00095409,
     178, 0x80000000 | 4, 0x00095409,
     179, 0x80000000 | 4, 0x00095409,
     180, 0x80000000 | 4, 0x00095409,
     181, 0x80000000 | 4, 0x00095409,
     182, 0x80000000 | 4, 0x00095409,
     183, 0x80000000 | 4, 0x00095409,
     184, 0x80000000 | 4, 0x00095409,
     185, 0x80000000 | 4, 0x00095409,
     186, 0x80000000 | 4, 0x00095409,
     187, 0x80000000 | 4, 0x00095409,
     188, 0x80000000 | 4, 0x00095409,
     189, 0x80000000 | 4, 0x00095409,
     190, 0x80000000 | 4, 0x00095409,
     191, 0x80000000 | 4, 0x00095409,
     192, 0x80000000 | 4, 0x00095409,
     193, 0x80000000 | 4, 0x00095409,
     194, 0x80000000 | 4, 0x00095409,
     195, 0x80000000 | 4, 0x00095409,
     196, 0x80000000 | 4, 0x00095409,
     197, 0x80000000 | 4, 0x00095409,
     198, 0x80000000 | 4, 0x00095409,
     199, 0x80000000 | 4, 0x00095409,
     200, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void cantoolsQtSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 191:
        case 190:
        case 189:
        case 188:
        case 187:
        case 186:
        case 185:
        case 184:
        case 183:
        case 182:
        case 181:
        case 180:
        case 179:
        case 178:
        case 177:
        case 176:
        case 175:
        case 174:
        case 173:
        case 172:
        case 171:
        case 170:
        case 169:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
        case 163:
        case 162:
        case 161:
        case 160:
        case 159:
        case 158:
        case 157:
        case 156:
        case 155:
        case 154:
        case 153:
        case 152:
        case 151:
        case 150:
        case 149:
        case 148:
        case 147:
        case 146:
        case 145:
        case 144:
        case 143:
        case 142:
        case 141:
        case 140:
        case 139:
        case 138:
        case 137:
        case 136:
        case 135:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
        case 127:
        case 126:
        case 125:
        case 124:
        case 123:
        case 122:
        case 121:
        case 120:
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 113:
        case 112:
        case 111:
        case 110:
        case 109:
        case 108:
        case 107:
        case 106:
        case 105:
        case 104:
        case 103:
        case 102:
        case 101:
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
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
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVariantSignalcantools* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cantoolsQtMessages* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtSignals *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< cantoolsQtMessages**>(_v) = _t->m_messages; break;
        case 1: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_system_sub_state; break;
        case 2: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_err_wrd1_b; break;
        case 3: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_sdo_power_current_reference; break;
        case 4: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_status_freeze_protection; break;
        case 5: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_err_wrd2_b; break;
        case 6: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_spare1; break;
        case 7: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_vn1_spare1; break;
        case 8: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_warn_wrd1_b; break;
        case 9: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_mute_h2_sens_exhaust; break;
        case 10: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp3_b; break;
        case 11: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_system_state; break;
        case 12: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp4_b; break;
        case 13: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_vn1_spare2; break;
        case 14: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_uls_est_act_b; break;
        case 15: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_uhs_est_act_b; break;
        case 16: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_current_fc_side; break;
        case 17: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_voltage_fc_side; break;
        case 18: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp1_b; break;
        case 19: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_estimated_time_to_power; break;
        case 20: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_voltage_link_side; break;
        case 21: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp2_b; break;
        case 22: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_current_link_side; break;
        case 23: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp3_b; break;
        case 24: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_sdo_power_current_min_handling; break;
        case 25: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tcm_hs_sec_in_sp; break;
        case 26: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp4_b; break;
        case 27: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tcm_hs_pri_out; break;
        case 28: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp1_b; break;
        case 29: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_pos_mix_valve; break;
        case 30: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_uhs_act_b; break;
        case 31: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_uls_act_b; break;
        case 32: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo4_power_current_min_state; break;
        case 33: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_hs_pre_charge_fbk_b; break;
        case 34: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo4_power_current_min; break;
        case 35: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare4_b; break;
        case 36: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_spare2; break;
        case 37: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo4_power_current_max_state; break;
        case 38: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_ihs_act_b; break;
        case 39: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_sdo_power_current_reference; break;
        case 40: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo4_power_current_max; break;
        case 41: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare3_b; break;
        case 42: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_spare3; break;
        case 43: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rol_cnt_b; break;
        case 44: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_t_pow_unit_b; break;
        case 45: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo3_spare1; break;
        case 46: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp2_b; break;
        case 47: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo3_power_current_opt; break;
        case 48: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp2_b; break;
        case 49: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo3_power_current_peripheral; break;
        case 50: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp1_b; break;
        case 51: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo3_power_current_act; break;
        case 52: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_warn_wrd2_b; break;
        case 53: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_1_fbk_b; break;
        case 54: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_cur_avlbl_b; break;
        case 55: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_estimated_time_for_shutdown; break;
        case 56: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_ils_act_b; break;
        case 57: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp3_b; break;
        case 58: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo2_extended_info_b; break;
        case 59: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_fan_act_b; break;
        case 60: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo2_extended_info_a; break;
        case 61: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare2_b; break;
        case 62: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp4_b; break;
        case 63: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo2_event_code_b; break;
        case 64: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare1_b; break;
        case 65: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo2_event_code_a; break;
        case 66: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_run_b; break;
        case 67: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rdy_b; break;
        case 68: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_warn_b; break;
        case 69: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_2_fbk_b; break;
        case 70: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_3_fbk_b; break;
        case 71: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_sdo_power_current_min_handling; break;
        case 72: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ls_pre_charge_fbk_b; break;
        case 73: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_current_sp; break;
        case 74: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ihs_lim_max_b; break;
        case 75: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_freeze_protectio_request; break;
        case 76: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare1; break;
        case 77: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uls_lim_min_b; break;
        case 78: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_spare2; break;
        case 79: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uls_lim_max_b; break;
        case 80: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_en; break;
        case 81: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp3; break;
        case 82: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ihs_lim_min; break;
        case 83: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl3_uhs_min; break;
        case 84: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp3; break;
        case 85: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_main_mode; break;
        case 86: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ils_lim_min; break;
        case 87: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp2; break;
        case 88: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uls_lim_min; break;
        case 89: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_08; break;
        case 90: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ihs_lim_max; break;
        case 91: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp4; break;
        case 92: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_07; break;
        case 93: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_main_sp; break;
        case 94: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uhs_lim_max; break;
        case 95: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp1; break;
        case 96: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_06; break;
        case 97: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uhs_lim_min; break;
        case 98: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp2; break;
        case 99: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data2; break;
        case 100: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc4_warn_word4; break;
        case 101: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_ind_temp1; break;
        case 102: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc4_warn_word3; break;
        case 103: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_03; break;
        case 104: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc4_warn_word2; break;
        case 105: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_uhs_est_act; break;
        case 106: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc4_warn_word1; break;
        case 107: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_02; break;
        case 108: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp1; break;
        case 109: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc3_err_word4; break;
        case 110: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp4; break;
        case 111: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp2; break;
        case 112: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc3_err_word3; break;
        case 113: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_cur_avlbl; break;
        case 114: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_uls_est_act; break;
        case 115: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc3_err_word2; break;
        case 116: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_01; break;
        case 117: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl2_uls_min; break;
        case 118: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc3_err_word1; break;
        case 119: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl2_ils_max; break;
        case 120: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_warn_wrd2; break;
        case 121: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_warn_wrd1; break;
        case 122: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data6; break;
        case 123: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta6_pcb_temp4; break;
        case 124: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc2_max_avlb_pwr; break;
        case 125: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcdc_ctrl1_span4; break;
        case 126: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_err_wrd2; break;
        case 127: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc2_spare1; break;
        case 128: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcdc_ctrl1_span3; break;
        case 129: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta3_err_wrd1; break;
        case 130: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc2_max_avlb_current; break;
        case 131: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_uhs_act; break;
        case 132: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_run; break;
        case 133: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uls_lim_max; break;
        case 134: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc2_pwr_unit_temp; break;
        case 135: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta5_trafo_temp3; break;
        case 136: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl2_uls_max; break;
        case 137: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_uls_act; break;
        case 138: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_sdo_power_current_mode; break;
        case 139: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl2_ils_min; break;
        case 140: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcdc_ctrl1_span2; break;
        case 141: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_ihs_act; break;
        case 142: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_spare3; break;
        case 143: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_on; break;
        case 144: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta2_ils_act; break;
        case 145: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_04; break;
        case 146: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_power_act; break;
        case 147: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_rele_in; break;
        case 148: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_status_word1; break;
        case 149: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_hs_pre_charge_fbk; break;
        case 150: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data0; break;
        case 151: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare2; break;
        case 152: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data_05; break;
        case 153: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_status; break;
        case 154: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare4; break;
        case 155: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data5; break;
        case 156: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_1_fbk; break;
        case 157: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ls_pre_charge_fbk; break;
        case 158: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_spare1; break;
        case 159: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcdc_reset; break;
        case 160: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_2_fbk; break;
        case 161: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_maintenance_cmd; break;
        case 162: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_failure; break;
        case 163: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_t_pow_unit; break;
        case 164: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data1; break;
        case 165: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_fan_act; break;
        case 166: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rele_3_fbk; break;
        case 167: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc1_running; break;
        case 168: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ils_lim_max; break;
        case 169: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rol_cnt; break;
        case 170: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl3_uhs_max; break;
        case 171: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_spare1; break;
        case 172: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ils_lim_min_b; break;
        case 173: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_sdo_power_current_mode; break;
        case 174: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ils_lim_max_b; break;
        case 175: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_spare3; break;
        case 176: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_err_b; break;
        case 177: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_pc_spare3; break;
        case 178: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_system_off_request; break;
        case 179: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl3_ihs_min; break;
        case 180: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uhs_lim_max_b; break;
        case 181: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_pc_spare2; break;
        case 182: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_fast_shutdown_request; break;
        case 183: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl3_ihs_max; break;
        case 184: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_uhs_lim_min_b; break;
        case 185: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_tx_pdo1_pc_spare1; break;
        case 186: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_rx_pdo1_power_current_max; break;
        case 187: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data4; break;
        case 188: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcxc_connection_state; break;
        case 189: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_err; break;
        case 190: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_rele_out; break;
        case 191: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_warn; break;
        case 192: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_ihs_lim_min_b; break;
        case 193: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data3; break;
        case 194: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dcdc_ctrl1_span1; break;
        case 195: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_sta1_rdy; break;
        case 196: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_dc_dc_ctrl1_fault_ack; break;
        case 197: *reinterpret_cast< QVariantSignalcantools**>(_v) = _t->m_data7; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject cantoolsQtSignals::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtSignals.data,
    qt_meta_data_cantoolsQtSignals,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtSignals.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cantoolsQtSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 198;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 198;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 198;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 198;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 198;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 198;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6 = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_dc_dc_sta6"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta6\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta6[] = {

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

void cantoolsQtMessage_dc_dc_sta6::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta6 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta6 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta6::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta6,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta6::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta6::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta6::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_sta6b"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta6b\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta6b[] = {

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

void cantoolsQtMessage_dc_dc_sta6b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta6b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta6b *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta6b::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta6b,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta6b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta6b::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta6b.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta6b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc4_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc4_t qt_meta_stringdata_cantoolsQtMessage_dc_dc4 = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cantoolsQtMessage_dc_dc4"
QT_MOC_LITERAL(1, 25, 10), // "send_frame"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc4\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc4[] = {

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

void cantoolsQtMessage_dc_dc4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc4 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc4::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc4.data,
    qt_meta_data_cantoolsQtMessage_dc_dc4,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc4.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms_t qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms = {
    {
QT_MOC_LITERAL(0, 0, 37), // "cantoolsQtMessage_iso_tp_resp..."
QT_MOC_LITERAL(1, 38, 10), // "send_frame"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4) // "name"

    },
    "cantoolsQtMessage_iso_tp_response_vms\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_iso_tp_response_vms[] = {

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

void cantoolsQtMessage_iso_tp_response_vms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_iso_tp_response_vms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_iso_tp_response_vms *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_iso_tp_response_vms::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms.data,
    qt_meta_data_cantoolsQtMessage_iso_tp_response_vms,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_iso_tp_response_vms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_iso_tp_response_vms::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_iso_tp_response_vms.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_iso_tp_response_vms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc3_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc3_t qt_meta_stringdata_cantoolsQtMessage_dc_dc3 = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cantoolsQtMessage_dc_dc3"
QT_MOC_LITERAL(1, 25, 10), // "send_frame"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc3[] = {

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

void cantoolsQtMessage_dc_dc3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc3.data,
    qt_meta_data_cantoolsQtMessage_dc_dc3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_iso_tp_request_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_iso_tp_request_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_iso_tp_request_t qt_meta_stringdata_cantoolsQtMessage_iso_tp_request = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cantoolsQtMessage_iso_tp_request"
QT_MOC_LITERAL(1, 33, 10), // "send_frame"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4) // "name"

    },
    "cantoolsQtMessage_iso_tp_request\0"
    "send_frame\0\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_iso_tp_request[] = {

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

void cantoolsQtMessage_iso_tp_request::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_iso_tp_request *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_iso_tp_request *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_iso_tp_request::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_iso_tp_request.data,
    qt_meta_data_cantoolsQtMessage_iso_tp_request,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_iso_tp_request::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_iso_tp_request::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_iso_tp_request.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_iso_tp_request::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_sdo2_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_sdo2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_sdo2_t qt_meta_stringdata_cantoolsQtMessage_tx_sdo2 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_sdo2"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_sdo2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_sdo2[] = {

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

void cantoolsQtMessage_tx_sdo2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_sdo2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_sdo2.data,
    qt_meta_data_cantoolsQtMessage_tx_sdo2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_sdo2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_sdo2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_sdo2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_sdo2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1 = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_tx_pdo1_vn1"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo1_vn1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo1_vn1[] = {

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

void cantoolsQtMessage_tx_pdo1_vn1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1_vn1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1_vn1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo1_vn1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo1_vn1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo1_vn1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo1_vn1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_vn1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo1_vn1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5 = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_dc_dc_sta5"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta5\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta5[] = {

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

void cantoolsQtMessage_dc_dc_sta5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta5 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta5 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta5::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta5,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_rx_sdo3_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_rx_sdo3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_rx_sdo3_t qt_meta_stringdata_cantoolsQtMessage_rx_sdo3 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_rx_sdo3"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_rx_sdo3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_rx_sdo3[] = {

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

void cantoolsQtMessage_rx_sdo3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_rx_sdo3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_rx_sdo3.data,
    qt_meta_data_cantoolsQtMessage_rx_sdo3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_rx_sdo3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_rx_sdo3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_rx_sdo3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_rx_sdo3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3 = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_ctrl3"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_ctrl3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_ctrl3[] = {

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

void cantoolsQtMessage_dc_dc_ctrl3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_ctrl3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_ctrl3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_ctrl3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_ctrl3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_ctrl3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_sdo1_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_sdo1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_sdo1_t qt_meta_stringdata_cantoolsQtMessage_tx_sdo1 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_sdo1"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_sdo1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_sdo1[] = {

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

void cantoolsQtMessage_tx_sdo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_sdo1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_sdo1.data,
    qt_meta_data_cantoolsQtMessage_tx_sdo1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_sdo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_sdo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_sdo1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_sdo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_sta2b"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta2b\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta2b[] = {

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

void cantoolsQtMessage_dc_dc_sta2b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta2b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta2b *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta2b::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta2b,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta2b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta2b::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2b.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta2b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_sdo3_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_sdo3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_sdo3_t qt_meta_stringdata_cantoolsQtMessage_tx_sdo3 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_sdo3"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_sdo3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_sdo3[] = {

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

void cantoolsQtMessage_tx_sdo3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_sdo3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_sdo3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_sdo3.data,
    qt_meta_data_cantoolsQtMessage_tx_sdo3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_sdo3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_sdo3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_sdo3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_sdo3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_t qt_meta_stringdata_cantoolsQtMessage_rx_pdo1 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_rx_pdo1"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_rx_pdo1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_rx_pdo1[] = {

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

void cantoolsQtMessage_rx_pdo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_rx_pdo1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_rx_pdo1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_rx_pdo1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_rx_pdo1.data,
    qt_meta_data_cantoolsQtMessage_rx_pdo1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_rx_pdo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_rx_pdo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_rx_pdo1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_rx_pdo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_rx_sdo2_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_rx_sdo2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_rx_sdo2_t qt_meta_stringdata_cantoolsQtMessage_rx_sdo2 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_rx_sdo2"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_rx_sdo2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_rx_sdo2[] = {

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

void cantoolsQtMessage_rx_sdo2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_rx_sdo2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_rx_sdo2.data,
    qt_meta_data_cantoolsQtMessage_rx_sdo2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_rx_sdo2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_rx_sdo2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_rx_sdo2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_rx_sdo2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo3_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo3_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo3 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_pdo3"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo3[] = {

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

void cantoolsQtMessage_tx_pdo3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo3.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc1_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc1_t qt_meta_stringdata_cantoolsQtMessage_dc_dc1 = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cantoolsQtMessage_dc_dc1"
QT_MOC_LITERAL(1, 25, 10), // "send_frame"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc1[] = {

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

void cantoolsQtMessage_dc_dc1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc1.data,
    qt_meta_data_cantoolsQtMessage_dc_dc1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3 = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_dc_dc_sta3"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta3\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta3[] = {

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

void cantoolsQtMessage_dc_dc_sta3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta3 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta3::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta3,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo2_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo2_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo2 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_pdo2"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo2[] = {

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

void cantoolsQtMessage_tx_pdo2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo2.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc2_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc2_t qt_meta_stringdata_cantoolsQtMessage_dc_dc2 = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cantoolsQtMessage_dc_dc2"
QT_MOC_LITERAL(1, 25, 10), // "send_frame"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc2[] = {

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

void cantoolsQtMessage_dc_dc2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc2.data,
    qt_meta_data_cantoolsQtMessage_dc_dc2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2 = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_ctrl2"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_ctrl2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_ctrl2[] = {

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

void cantoolsQtMessage_dc_dc_ctrl2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_ctrl2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_ctrl2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_ctrl2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_ctrl2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_ctrl2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_rx_sdo1_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_rx_sdo1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_rx_sdo1_t qt_meta_stringdata_cantoolsQtMessage_rx_sdo1 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_rx_sdo1"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_rx_sdo1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_rx_sdo1[] = {

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

void cantoolsQtMessage_rx_sdo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_rx_sdo1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_rx_sdo1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_rx_sdo1.data,
    qt_meta_data_cantoolsQtMessage_rx_sdo1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_rx_sdo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_rx_sdo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_rx_sdo1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_rx_sdo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo1 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_pdo1"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo1[] = {

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

void cantoolsQtMessage_tx_pdo1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo1.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo4_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo4_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo4 = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cantoolsQtMessage_tx_pdo4"
QT_MOC_LITERAL(1, 26, 10), // "send_frame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo4\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo4[] = {

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

void cantoolsQtMessage_tx_pdo4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo4 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo4::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo4.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo4,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo4.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc_t qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_tx_pdo1_pc"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_tx_pdo1_pc\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_tx_pdo1_pc[] = {

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

void cantoolsQtMessage_tx_pdo1_pc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1_pc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_tx_pdo1_pc *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_tx_pdo1_pc::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc.data,
    qt_meta_data_cantoolsQtMessage_tx_pdo1_pc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_tx_pdo1_pc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_tx_pdo1_pc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_tx_pdo1_pc.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_tx_pdo1_pc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_sta5b"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta5b\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta5b[] = {

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

void cantoolsQtMessage_dc_dc_sta5b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta5b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta5b *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta5b::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta5b,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta5b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta5b::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta5b.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta5b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2 = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_dc_dc_sta2"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta2\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta2[] = {

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

void cantoolsQtMessage_dc_dc_sta2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta2 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta2::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta2.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_sta3b"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta3b\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta3b[] = {

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

void cantoolsQtMessage_dc_dc_sta3b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta3b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta3b *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta3b::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta3b,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta3b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta3b::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta3b.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta3b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1 = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_ctrl1"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_ctrl1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_ctrl1[] = {

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

void cantoolsQtMessage_dc_dc_ctrl1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_ctrl1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_ctrl1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_ctrl1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_ctrl1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_ctrl1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_ctrl1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_ctrl1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1 = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_dc_dc_sta1"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta1\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta1[] = {

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

void cantoolsQtMessage_dc_dc_sta1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta1 *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta1::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b_t qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cantoolsQtMessage_dc_dc_sta1b"
QT_MOC_LITERAL(1, 30, 10), // "send_frame"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4) // "name"

    },
    "cantoolsQtMessage_dc_dc_sta1b\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_dc_dc_sta1b[] = {

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

void cantoolsQtMessage_dc_dc_sta1b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta1b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_dc_dc_sta1b *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_dc_dc_sta1b::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b.data,
    qt_meta_data_cantoolsQtMessage_dc_dc_sta1b,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_dc_dc_sta1b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_dc_dc_sta1b::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_dc_dc_sta1b.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_dc_dc_sta1b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc_t qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cantoolsQtMessage_rx_pdo1_pc"
QT_MOC_LITERAL(1, 29, 10), // "send_frame"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4) // "name"

    },
    "cantoolsQtMessage_rx_pdo1_pc\0send_frame\0"
    "\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessage_rx_pdo1_pc[] = {

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

void cantoolsQtMessage_rx_pdo1_pc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessage_rx_pdo1_pc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_frame(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessage_rx_pdo1_pc *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessage_rx_pdo1_pc::staticMetaObject = { {
    QMetaObject::SuperData::link<cantoolsQtMessage::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc.data,
    qt_meta_data_cantoolsQtMessage_rx_pdo1_pc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessage_rx_pdo1_pc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessage_rx_pdo1_pc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessage_rx_pdo1_pc.stringdata0))
        return static_cast<void*>(this);
    return cantoolsQtMessage::qt_metacast(_clname);
}

int cantoolsQtMessage_rx_pdo1_pc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cantoolsQtMessage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cantoolsQtMessages_t {
    QByteArrayData data[40];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cantoolsQtMessages_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cantoolsQtMessages_t qt_meta_stringdata_cantoolsQtMessages = {
    {
QT_MOC_LITERAL(0, 0, 18), // "cantoolsQtMessages"
QT_MOC_LITERAL(1, 19, 9), // "sendFrame"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QCanBusFrame"
QT_MOC_LITERAL(4, 43, 5), // "frame"
QT_MOC_LITERAL(5, 49, 23), // "periodic_check_validity"
QT_MOC_LITERAL(6, 73, 10), // "dc_dc_sta6"
QT_MOC_LITERAL(7, 84, 18), // "cantoolsQtMessage*"
QT_MOC_LITERAL(8, 103, 11), // "dc_dc_sta6b"
QT_MOC_LITERAL(9, 115, 6), // "dc_dc4"
QT_MOC_LITERAL(10, 122, 19), // "iso_tp_response_vms"
QT_MOC_LITERAL(11, 142, 6), // "dc_dc3"
QT_MOC_LITERAL(12, 149, 14), // "iso_tp_request"
QT_MOC_LITERAL(13, 164, 7), // "tx_sdo2"
QT_MOC_LITERAL(14, 172, 11), // "tx_pdo1_vn1"
QT_MOC_LITERAL(15, 184, 10), // "dc_dc_sta5"
QT_MOC_LITERAL(16, 195, 7), // "rx_sdo3"
QT_MOC_LITERAL(17, 203, 11), // "dc_dc_ctrl3"
QT_MOC_LITERAL(18, 215, 7), // "tx_sdo1"
QT_MOC_LITERAL(19, 223, 11), // "dc_dc_sta2b"
QT_MOC_LITERAL(20, 235, 7), // "tx_sdo3"
QT_MOC_LITERAL(21, 243, 7), // "rx_pdo1"
QT_MOC_LITERAL(22, 251, 7), // "rx_sdo2"
QT_MOC_LITERAL(23, 259, 7), // "tx_pdo3"
QT_MOC_LITERAL(24, 267, 6), // "dc_dc1"
QT_MOC_LITERAL(25, 274, 10), // "dc_dc_sta3"
QT_MOC_LITERAL(26, 285, 7), // "tx_pdo2"
QT_MOC_LITERAL(27, 293, 6), // "dc_dc2"
QT_MOC_LITERAL(28, 300, 11), // "dc_dc_ctrl2"
QT_MOC_LITERAL(29, 312, 7), // "rx_sdo1"
QT_MOC_LITERAL(30, 320, 7), // "tx_pdo1"
QT_MOC_LITERAL(31, 328, 7), // "tx_pdo4"
QT_MOC_LITERAL(32, 336, 10), // "tx_pdo1_pc"
QT_MOC_LITERAL(33, 347, 11), // "dc_dc_sta5b"
QT_MOC_LITERAL(34, 359, 10), // "dc_dc_sta2"
QT_MOC_LITERAL(35, 370, 11), // "dc_dc_sta3b"
QT_MOC_LITERAL(36, 382, 11), // "dc_dc_ctrl1"
QT_MOC_LITERAL(37, 394, 10), // "dc_dc_sta1"
QT_MOC_LITERAL(38, 405, 11), // "dc_dc_sta1b"
QT_MOC_LITERAL(39, 417, 10) // "rx_pdo1_pc"

    },
    "cantoolsQtMessages\0sendFrame\0\0"
    "QCanBusFrame\0frame\0periodic_check_validity\0"
    "dc_dc_sta6\0cantoolsQtMessage*\0dc_dc_sta6b\0"
    "dc_dc4\0iso_tp_response_vms\0dc_dc3\0"
    "iso_tp_request\0tx_sdo2\0tx_pdo1_vn1\0"
    "dc_dc_sta5\0rx_sdo3\0dc_dc_ctrl3\0tx_sdo1\0"
    "dc_dc_sta2b\0tx_sdo3\0rx_pdo1\0rx_sdo2\0"
    "tx_pdo3\0dc_dc1\0dc_dc_sta3\0tx_pdo2\0"
    "dc_dc2\0dc_dc_ctrl2\0rx_sdo1\0tx_pdo1\0"
    "tx_pdo4\0tx_pdo1_pc\0dc_dc_sta5b\0"
    "dc_dc_sta2\0dc_dc_sta3b\0dc_dc_ctrl1\0"
    "dc_dc_sta1\0dc_dc_sta1b\0rx_pdo1_pc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cantoolsQtMessages[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      33,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,
       8, 0x80000000 | 7, 0x00095409,
       9, 0x80000000 | 7, 0x00095409,
      10, 0x80000000 | 7, 0x00095409,
      11, 0x80000000 | 7, 0x00095409,
      12, 0x80000000 | 7, 0x00095409,
      13, 0x80000000 | 7, 0x00095409,
      14, 0x80000000 | 7, 0x00095409,
      15, 0x80000000 | 7, 0x00095409,
      16, 0x80000000 | 7, 0x00095409,
      17, 0x80000000 | 7, 0x00095409,
      18, 0x80000000 | 7, 0x00095409,
      19, 0x80000000 | 7, 0x00095409,
      20, 0x80000000 | 7, 0x00095409,
      21, 0x80000000 | 7, 0x00095409,
      22, 0x80000000 | 7, 0x00095409,
      23, 0x80000000 | 7, 0x00095409,
      24, 0x80000000 | 7, 0x00095409,
      25, 0x80000000 | 7, 0x00095409,
      26, 0x80000000 | 7, 0x00095409,
      27, 0x80000000 | 7, 0x00095409,
      28, 0x80000000 | 7, 0x00095409,
      29, 0x80000000 | 7, 0x00095409,
      30, 0x80000000 | 7, 0x00095409,
      31, 0x80000000 | 7, 0x00095409,
      32, 0x80000000 | 7, 0x00095409,
      33, 0x80000000 | 7, 0x00095409,
      34, 0x80000000 | 7, 0x00095409,
      35, 0x80000000 | 7, 0x00095409,
      36, 0x80000000 | 7, 0x00095409,
      37, 0x80000000 | 7, 0x00095409,
      38, 0x80000000 | 7, 0x00095409,
      39, 0x80000000 | 7, 0x00095409,

       0        // eod
};

void cantoolsQtMessages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cantoolsQtMessages *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFrame((*reinterpret_cast< const QCanBusFrame(*)>(_a[1]))); break;
        case 1: _t->periodic_check_validity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cantoolsQtMessages::*)(const QCanBusFrame & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cantoolsQtMessages::sendFrame)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cantoolsQtMessage* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cantoolsQtMessages *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta6; break;
        case 1: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta6b; break;
        case 2: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc4; break;
        case 3: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->iso_tp_response_vms; break;
        case 4: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc3; break;
        case 5: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->iso_tp_request; break;
        case 6: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_sdo2; break;
        case 7: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo1_vn1; break;
        case 8: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta5; break;
        case 9: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->rx_sdo3; break;
        case 10: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_ctrl3; break;
        case 11: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_sdo1; break;
        case 12: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta2b; break;
        case 13: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_sdo3; break;
        case 14: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->rx_pdo1; break;
        case 15: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->rx_sdo2; break;
        case 16: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo3; break;
        case 17: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc1; break;
        case 18: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta3; break;
        case 19: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo2; break;
        case 20: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc2; break;
        case 21: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_ctrl2; break;
        case 22: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->rx_sdo1; break;
        case 23: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo1; break;
        case 24: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo4; break;
        case 25: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->tx_pdo1_pc; break;
        case 26: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta5b; break;
        case 27: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta2; break;
        case 28: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta3b; break;
        case 29: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_ctrl1; break;
        case 30: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta1; break;
        case 31: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->dc_dc_sta1b; break;
        case 32: *reinterpret_cast< cantoolsQtMessage**>(_v) = _t->rx_pdo1_pc; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject cantoolsQtMessages::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cantoolsQtMessages.data,
    qt_meta_data_cantoolsQtMessages,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cantoolsQtMessages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cantoolsQtMessages::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cantoolsQtMessages.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cantoolsQtMessages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 33;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void cantoolsQtMessages::sendFrame(const QCanBusFrame & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< cantoolsQtMessages *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
