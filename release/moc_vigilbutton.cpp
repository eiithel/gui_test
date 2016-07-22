/****************************************************************************
** Meta object code from reading C++ file 'vigilbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vigilbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vigilbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VigilButton_t {
    QByteArrayData data[13];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VigilButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VigilButton_t qt_meta_stringdata_VigilButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VigilButton"
QT_MOC_LITERAL(1, 12, 10), // "VigilColor"
QT_MOC_LITERAL(2, 23, 4), // "BLUE"
QT_MOC_LITERAL(3, 28, 3), // "RED"
QT_MOC_LITERAL(4, 32, 6), // "ORANGE"
QT_MOC_LITERAL(5, 39, 5), // "GREEN"
QT_MOC_LITERAL(6, 45, 4), // "GRAY"
QT_MOC_LITERAL(7, 50, 11), // "LIGHT_GREEN"
QT_MOC_LITERAL(8, 62, 10), // "LIGHT_BLUE"
QT_MOC_LITERAL(9, 73, 5), // "Shape"
QT_MOC_LITERAL(10, 79, 7), // "FACTORY"
QT_MOC_LITERAL(11, 87, 5), // "ROUND"
QT_MOC_LITERAL(12, 93, 7) // "DEFAULT"

    },
    "VigilButton\0VigilColor\0BLUE\0RED\0ORANGE\0"
    "GREEN\0GRAY\0LIGHT_GREEN\0LIGHT_BLUE\0"
    "Shape\0FACTORY\0ROUND\0DEFAULT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VigilButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    7,   22,
       9, 0x0,    3,   36,

 // enum data: key, value
       2, uint(VigilButton::BLUE),
       3, uint(VigilButton::RED),
       4, uint(VigilButton::ORANGE),
       5, uint(VigilButton::GREEN),
       6, uint(VigilButton::GRAY),
       7, uint(VigilButton::LIGHT_GREEN),
       8, uint(VigilButton::LIGHT_BLUE),
      10, uint(VigilButton::FACTORY),
      11, uint(VigilButton::ROUND),
      12, uint(VigilButton::DEFAULT),

       0        // eod
};

void VigilButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VigilButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_VigilButton.data,
      qt_meta_data_VigilButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VigilButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VigilButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VigilButton.stringdata0))
        return static_cast<void*>(const_cast< VigilButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int VigilButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
