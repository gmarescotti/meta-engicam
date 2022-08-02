/****************************************************************************
** Meta object code from reading C++ file 'mymodbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mymodbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymodbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyModbus_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyModbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyModbus_t qt_meta_stringdata_MyModbus = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyModbus"
QT_MOC_LITERAL(1, 9, 8), // "on_reply"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "QModbusDataUnit&"
QT_MOC_LITERAL(4, 36, 5), // "reply"
QT_MOC_LITERAL(5, 42, 10), // "cmdConnect"
QT_MOC_LITERAL(6, 53, 13), // "cmdDisconnect"
QT_MOC_LITERAL(7, 67, 7), // "cmdRead"
QT_MOC_LITERAL(8, 75, 14), // "stationAddress"
QT_MOC_LITERAL(9, 90, 7), // "frameId"
QT_MOC_LITERAL(10, 98, 7), // "wlength"
QT_MOC_LITERAL(11, 106, 12), // "cmdReadWrite"
QT_MOC_LITERAL(12, 119, 12), // "severAddress"
QT_MOC_LITERAL(13, 132, 12), // "startAddress"
QT_MOC_LITERAL(14, 145, 15), // "numberOfEntries"
QT_MOC_LITERAL(15, 161, 29), // "QModbusDataUnit::RegisterType"
QT_MOC_LITERAL(16, 191, 12), // "registerType"
QT_MOC_LITERAL(17, 204, 8), // "cmdWrite"
QT_MOC_LITERAL(18, 213, 15), // "QModbusDataUnit"
QT_MOC_LITERAL(19, 229, 11), // "onReadReady"
QT_MOC_LITERAL(20, 241, 20), // "onModbusStateChanged"
QT_MOC_LITERAL(21, 262, 5) // "state"

    },
    "MyModbus\0on_reply\0\0QModbusDataUnit&\0"
    "reply\0cmdConnect\0cmdDisconnect\0cmdRead\0"
    "stationAddress\0frameId\0wlength\0"
    "cmdReadWrite\0severAddress\0startAddress\0"
    "numberOfEntries\0QModbusDataUnit::RegisterType\0"
    "registerType\0cmdWrite\0QModbusDataUnit\0"
    "onReadReady\0onModbusStateChanged\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyModbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    3,   59,    2, 0x0a /* Public */,
      11,    4,   66,    2, 0x0a /* Public */,
      17,    2,   75,    2, 0x0a /* Public */,
      19,    0,   80,    2, 0x0a /* Public */,
      20,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UShort, 0x80000000 | 15,   12,   13,   14,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::UInt,    4,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void MyModbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyModbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_reply((*reinterpret_cast< QModbusDataUnit(*)>(_a[1]))); break;
        case 1: _t->cmdConnect(); break;
        case 2: _t->cmdDisconnect(); break;
        case 3: _t->cmdRead((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3]))); break;
        case 4: _t->cmdReadWrite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3])),(*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[4]))); break;
        case 5: _t->cmdWrite((*reinterpret_cast< const QModbusDataUnit(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: _t->onReadReady(); break;
        case 7: _t->onModbusStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyModbus::*)(QModbusDataUnit & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyModbus::on_reply)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyModbus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyModbus.data,
    qt_meta_data_MyModbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyModbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyModbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyModbus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyModbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MyModbus::on_reply(QModbusDataUnit & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TcpModbus_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpModbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpModbus_t qt_meta_stringdata_TcpModbus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpModbus"
QT_MOC_LITERAL(1, 10, 10), // "cmdConnect"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "TcpModbus\0cmdConnect\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpModbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TcpModbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpModbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cmdConnect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TcpModbus::staticMetaObject = { {
    QMetaObject::SuperData::link<MyModbus::staticMetaObject>(),
    qt_meta_stringdata_TcpModbus.data,
    qt_meta_data_TcpModbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpModbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpModbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpModbus.stringdata0))
        return static_cast<void*>(this);
    return MyModbus::qt_metacast(_clname);
}

int TcpModbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyModbus::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_SerialModbus_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialModbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialModbus_t qt_meta_stringdata_SerialModbus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SerialModbus"
QT_MOC_LITERAL(1, 13, 10), // "cmdConnect"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "SerialModbus\0cmdConnect\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialModbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SerialModbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialModbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cmdConnect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SerialModbus::staticMetaObject = { {
    QMetaObject::SuperData::link<MyModbus::staticMetaObject>(),
    qt_meta_stringdata_SerialModbus.data,
    qt_meta_data_SerialModbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialModbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialModbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialModbus.stringdata0))
        return static_cast<void*>(this);
    return MyModbus::qt_metacast(_clname);
}

int SerialModbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyModbus::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
