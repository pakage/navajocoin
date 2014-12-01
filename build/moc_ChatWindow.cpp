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
    QByteArrayData data[23];
    char stringdata[421];
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
QT_MOC_LITERAL(6, 76, 12),
QT_MOC_LITERAL(7, 89, 23),
QT_MOC_LITERAL(8, 113, 28),
QT_MOC_LITERAL(9, 142, 32),
QT_MOC_LITERAL(10, 175, 3),
QT_MOC_LITERAL(11, 179, 35),
QT_MOC_LITERAL(12, 215, 16),
QT_MOC_LITERAL(13, 232, 4),
QT_MOC_LITERAL(14, 237, 30),
QT_MOC_LITERAL(15, 268, 5),
QT_MOC_LITERAL(16, 274, 26),
QT_MOC_LITERAL(17, 301, 25),
QT_MOC_LITERAL(18, 327, 23),
QT_MOC_LITERAL(19, 351, 31),
QT_MOC_LITERAL(20, 383, 15),
QT_MOC_LITERAL(21, 399, 14),
QT_MOC_LITERAL(22, 414, 5)
    },
    "ChatWindow\0on_loginButton_clicked\0\0"
    "on_sayButton_clicked\0readyRead\0connected\0"
    "disconnected\0on_logoutButton_clicked\0"
    "on_sayLineEdit_returnPressed\0"
    "on_roomTextBrowser_anchorClicked\0url\0"
    "on_userListWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_tabWidget_tabCloseRequested\0index\0"
    "on_tabWidget_tabBarClicked\0"
    "on_registerButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_submitRegisterButton_clicked\0"
    "requestFinished\0QNetworkReply*\0reply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08,
       3,    0,   90,    2, 0x08,
       4,    0,   91,    2, 0x08,
       5,    0,   92,    2, 0x08,
       6,    0,   93,    2, 0x08,
       7,    0,   94,    2, 0x08,
       8,    0,   95,    2, 0x08,
       9,    1,   96,    2, 0x08,
      11,    1,   99,    2, 0x08,
      14,    1,  102,    2, 0x08,
      16,    1,  105,    2, 0x08,
      17,    0,  108,    2, 0x08,
      18,    0,  109,    2, 0x08,
      19,    0,  110,    2, 0x08,
      20,    1,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

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
        case 4: _t->disconnected(); break;
        case 5: _t->on_logoutButton_clicked(); break;
        case 6: _t->on_sayLineEdit_returnPressed(); break;
        case 7: _t->on_roomTextBrowser_anchorClicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 8: _t->on_userListWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_registerButton_clicked(); break;
        case 12: _t->on_cancelButton_clicked(); break;
        case 13: _t->on_submitRegisterButton_clicked(); break;
        case 14: _t->requestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
