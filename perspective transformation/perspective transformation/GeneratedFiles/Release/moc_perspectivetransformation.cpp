/****************************************************************************
** Meta object code from reading C++ file 'perspectivetransformation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../perspectivetransformation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'perspectivetransformation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_perspectivetransformation_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_perspectivetransformation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_perspectivetransformation_t qt_meta_stringdata_perspectivetransformation = {
    {
QT_MOC_LITERAL(0, 0, 25), // "perspectivetransformation"
QT_MOC_LITERAL(1, 26, 22), // "on_Btn_readimg_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "on_Btn_ok_clicked"
QT_MOC_LITERAL(4, 68, 20), // "on_Btn_trans_clicked"
QT_MOC_LITERAL(5, 89, 15), // "mousePressEvent"
QT_MOC_LITERAL(6, 105, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 118, 2), // "ev"
QT_MOC_LITERAL(8, 121, 21) // "on_Btn_reload_clicked"

    },
    "perspectivetransformation\0"
    "on_Btn_readimg_clicked\0\0on_Btn_ok_clicked\0"
    "on_Btn_trans_clicked\0mousePressEvent\0"
    "QMouseEvent*\0ev\0on_Btn_reload_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_perspectivetransformation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void perspectivetransformation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        perspectivetransformation *_t = static_cast<perspectivetransformation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Btn_readimg_clicked(); break;
        case 1: _t->on_Btn_ok_clicked(); break;
        case 2: _t->on_Btn_trans_clicked(); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->on_Btn_reload_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject perspectivetransformation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_perspectivetransformation.data,
      qt_meta_data_perspectivetransformation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *perspectivetransformation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *perspectivetransformation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_perspectivetransformation.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int perspectivetransformation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
