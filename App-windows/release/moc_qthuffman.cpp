/****************************************************************************
** Meta object code from reading C++ file 'qthuffman.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../huffman-file-compression/qthuffman.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qthuffman.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Qthuffman_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[24];
    char stringdata5[24];
    char stringdata6[24];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Qthuffman_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Qthuffman_t qt_meta_stringdata_Qthuffman = {
    {
        QT_MOC_LITERAL(0, 9),  // "Qthuffman"
        QT_MOC_LITERAL(10, 23),  // "on_enocdeSrcBtn_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 20),  // "on_encodeBtn_clicked"
        QT_MOC_LITERAL(56, 23),  // "on_decodeDstBtn_clicked"
        QT_MOC_LITERAL(80, 23),  // "on_encodeDstBtn_clicked"
        QT_MOC_LITERAL(104, 23),  // "on_decodeSrcBtn_clicked"
        QT_MOC_LITERAL(128, 20)   // "on_decodeBtn_clicked"
    },
    "Qthuffman",
    "on_enocdeSrcBtn_clicked",
    "",
    "on_encodeBtn_clicked",
    "on_decodeDstBtn_clicked",
    "on_encodeDstBtn_clicked",
    "on_decodeSrcBtn_clicked",
    "on_decodeBtn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Qthuffman[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Qthuffman::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Qthuffman.offsetsAndSizes,
    qt_meta_data_Qthuffman,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Qthuffman_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Qthuffman, std::true_type>,
        // method 'on_enocdeSrcBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_encodeBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decodeDstBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_encodeDstBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decodeSrcBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_decodeBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Qthuffman::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Qthuffman *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_enocdeSrcBtn_clicked(); break;
        case 1: _t->on_encodeBtn_clicked(); break;
        case 2: _t->on_decodeDstBtn_clicked(); break;
        case 3: _t->on_encodeDstBtn_clicked(); break;
        case 4: _t->on_decodeSrcBtn_clicked(); break;
        case 5: _t->on_decodeBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Qthuffman::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qthuffman::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qthuffman.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Qthuffman::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
