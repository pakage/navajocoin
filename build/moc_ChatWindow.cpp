/****************************************************************************
** Meta object code from reading C++ file 'ChatWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/ChatWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChatWindow_t {
    QByteArrayData data[15];
    char stringdata[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ChatWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ChatWindow_t qt_meta_stringdata_ChatWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 22),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 20),
QT_MOC_LITERAL(4, 56, 9),
QT_MOC_LITERAL(5, 66, 9),
QT_MOC_LITERAL(6, 76, 23),
QT_MOC_LITERAL(7, 100, 28),
QT_MOC_LITERAL(8, 129, 32),
QT_MOC_LITERAL(9, 162, 3),
QT_MOC_LITERAL(10, 166, 35),
QT_MOC_LITERAL(11, 202, 16),
QT_MOC_LITERAL(12, 219, 4),
QT_MOC_LITERAL(13, 224, 30),
QT_MOC_LITERAL(14, 255, 5)
    },
    "ChatWindow\0on_loginButton_clicked\0\0"
    "on_sayButton_clicked\0readyRead\0connected\0"
    "on_logoutButton_clicked\0"
    "on_sayLineEdit_returnPressed\0"
    "on_roomTextBrowser_anchorClicked\0url\0"
    "on_userListWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_tabWidget_tabCloseRequested\0index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    1,   65,    2, 0x08,
      10,    1,   68,    2, 0x08,
      13,    1,   71,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void ChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatWindow *_t = static_cast<ChatWindow *>(_o);
        switch (_id) {
        case 0: _t->on_loginButton_clicked(); break;
        case 1: _t->on_sayButton_clicked(); break;
        case 2: _t->readyRead(); break;
        case 3: _t->connected(); break;
        case 4: _t->on_logoutButton_clicked(); break;
        case 5: _t->on_sayLineEdit_returnPressed(); break;
        case 6: _t->on_roomTextBrowser_anchorClicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 7: _t->on_userListWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ChatWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChatWindow.data,
      qt_meta_data_ChatWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWindow.stringdata))
        return static_cast<void*>(const_cast< ChatWindow*>(this));
    if (!strcmp(_clname, "Ui::ChatWindow"))
        return static_cast< Ui::ChatWindow*>(const_cast< ChatWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
