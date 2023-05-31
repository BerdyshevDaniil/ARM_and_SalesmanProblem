/****************************************************************************
** Meta object code from reading C++ file 'arm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ARM/ARM/arm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ARM_t {
    QByteArrayData data[11];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ARM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ARM_t qt_meta_stringdata_ARM = {
    {
QT_MOC_LITERAL(0, 0, 3), // "ARM"
QT_MOC_LITERAL(1, 4, 28), // "on_UserInputLine_textChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "line"
QT_MOC_LITERAL(4, 39, 21), // "on_btnSkipped_clicked"
QT_MOC_LITERAL(5, 61, 22), // "on_btnBirthday_clicked"
QT_MOC_LITERAL(6, 84, 23), // "on_btnSendEmail_clicked"
QT_MOC_LITERAL(7, 108, 31), // "on_boxMarks_currentIndexChanged"
QT_MOC_LITERAL(8, 140, 4), // "arg1"
QT_MOC_LITERAL(9, 145, 33), // "on_boxStudent_currentIndexCha..."
QT_MOC_LITERAL(10, 179, 21) // "on_btnMeeting_clicked"

    },
    "ARM\0on_UserInputLine_textChanged\0\0"
    "line\0on_btnSkipped_clicked\0"
    "on_btnBirthday_clicked\0on_btnSendEmail_clicked\0"
    "on_boxMarks_currentIndexChanged\0arg1\0"
    "on_boxStudent_currentIndexChanged\0"
    "on_btnMeeting_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ARM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void ARM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ARM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_UserInputLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_btnSkipped_clicked(); break;
        case 2: _t->on_btnBirthday_clicked(); break;
        case 3: _t->on_btnSendEmail_clicked(); break;
        case 4: _t->on_boxMarks_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_boxStudent_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_btnMeeting_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ARM::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ARM.data,
    qt_meta_data_ARM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ARM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ARM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ARM.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ARM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
