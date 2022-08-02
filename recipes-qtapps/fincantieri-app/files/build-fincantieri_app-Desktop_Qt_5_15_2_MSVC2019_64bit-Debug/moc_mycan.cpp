/****************************************************************************
** Meta object code from reading C++ file 'mycan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mycan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanSnifferModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanSnifferModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanSnifferModel_t qt_meta_stringdata_CanSnifferModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CanSnifferModel"

    },
    "CanSnifferModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanSnifferModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CanSnifferModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CanSnifferModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CanSnifferModel.data,
    qt_meta_data_CanSnifferModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CanSnifferModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanSnifferModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CanSnifferModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CanSnifferModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MyCan_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCan_t qt_meta_stringdata_MyCan = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MyCan"
QT_MOC_LITERAL(1, 6, 10), // "on_receive"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "QCanBusFrame"
QT_MOC_LITERAL(4, 31, 5), // "frame"
QT_MOC_LITERAL(5, 37, 21), // "before_connect_device"
QT_MOC_LITERAL(6, 59, 14), // "QCanBusDevice*"
QT_MOC_LITERAL(7, 74, 6), // "device"
QT_MOC_LITERAL(8, 81, 11), // "postconnect"
QT_MOC_LITERAL(9, 93, 9), // "sendFrame"
QT_MOC_LITERAL(10, 103, 13), // "processErrors"
QT_MOC_LITERAL(11, 117, 26), // "QCanBusDevice::CanBusError"
QT_MOC_LITERAL(12, 144, 21), // "processReceivedFrames"
QT_MOC_LITERAL(13, 166, 20) // "processFramesWritten"

    },
    "MyCan\0on_receive\0\0QCanBusFrame\0frame\0"
    "before_connect_device\0QCanBusDevice*\0"
    "device\0postconnect\0sendFrame\0processErrors\0"
    "QCanBusDevice::CanBusError\0"
    "processReceivedFrames\0processFramesWritten"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCan[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   55,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x08 /* Private */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void MyCan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyCan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_receive((*reinterpret_cast< const QCanBusFrame(*)>(_a[1]))); break;
        case 1: _t->before_connect_device((*reinterpret_cast< QCanBusDevice*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->postconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->sendFrame((*reinterpret_cast< const QCanBusFrame(*)>(_a[1]))); break;
        case 4: _t->processErrors((*reinterpret_cast< QCanBusDevice::CanBusError(*)>(_a[1]))); break;
        case 5: _t->processReceivedFrames(); break;
        case 6: _t->processFramesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyCan::*)(const QCanBusFrame );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCan::on_receive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyCan::*)(QCanBusDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCan::before_connect_device)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyCan::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyCan.data,
    qt_meta_data_MyCan,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyCan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCan.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyCan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyCan::on_receive(const QCanBusFrame _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyCan::before_connect_device(QCanBusDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
