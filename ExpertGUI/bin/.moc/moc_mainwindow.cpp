/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ExpertGUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[56];
    char stringdata0[1458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "readTcpData"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "Errore"
QT_MOC_LITERAL(4, 31, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(5, 60, 10), // "sock_error"
QT_MOC_LITERAL(6, 71, 21), // "readTcpData_existence"
QT_MOC_LITERAL(7, 93, 16), // "Errore_existence"
QT_MOC_LITERAL(8, 110, 30), // "on_CommandStringButton_clicked"
QT_MOC_LITERAL(9, 141, 32), // "on_ConnectToServerButton_clicked"
QT_MOC_LITERAL(10, 174, 28), // "on_ConnectProgrammer_clicked"
QT_MOC_LITERAL(11, 203, 24), // "on_CheckDrvAssoc_clicked"
QT_MOC_LITERAL(12, 228, 25), // "on_CheckExistence_clicked"
QT_MOC_LITERAL(13, 254, 27), // "on_ConnectExistence_clicked"
QT_MOC_LITERAL(14, 282, 31), // "on_KillProcess_CollSoft_clicked"
QT_MOC_LITERAL(15, 314, 30), // "on_NewProcess_CollSoft_clicked"
QT_MOC_LITERAL(16, 345, 30), // "on_DisconnectExistence_clicked"
QT_MOC_LITERAL(17, 376, 35), // "on_DisconnectToServerButton_c..."
QT_MOC_LITERAL(18, 412, 7), // "closing"
QT_MOC_LITERAL(19, 420, 27), // "on_ReadSerialDrvLog_clicked"
QT_MOC_LITERAL(20, 448, 25), // "on_ReadFileParLog_clicked"
QT_MOC_LITERAL(21, 474, 24), // "on_CheckParAssoc_clicked"
QT_MOC_LITERAL(22, 499, 31), // "on_SetParameterDriver_1_clicked"
QT_MOC_LITERAL(23, 531, 31), // "on_SetParameterDriver_2_clicked"
QT_MOC_LITERAL(24, 563, 31), // "on_SetParameterDriver_3_clicked"
QT_MOC_LITERAL(25, 595, 31), // "on_SetParameterDriver_4_clicked"
QT_MOC_LITERAL(26, 627, 31), // "on_SetParameterDriver_5_clicked"
QT_MOC_LITERAL(27, 659, 31), // "on_SetParameterDriver_6_clicked"
QT_MOC_LITERAL(28, 691, 31), // "on_SetParameterDriver_7_clicked"
QT_MOC_LITERAL(29, 723, 31), // "on_SetParameterDriver_8_clicked"
QT_MOC_LITERAL(30, 755, 31), // "on_SetParameterDriver_9_clicked"
QT_MOC_LITERAL(31, 787, 32), // "on_SetParameterDriver_10_clicked"
QT_MOC_LITERAL(32, 820, 32), // "on_SetParameterDriver_11_clicked"
QT_MOC_LITERAL(33, 853, 32), // "on_SetParameterDriver_12_clicked"
QT_MOC_LITERAL(34, 886, 32), // "on_SetParameterDriver_13_clicked"
QT_MOC_LITERAL(35, 919, 32), // "on_SetParameterDriver_14_clicked"
QT_MOC_LITERAL(36, 952, 26), // "GetParameterDriver_clicked"
QT_MOC_LITERAL(37, 979, 7), // "drv_num"
QT_MOC_LITERAL(38, 987, 14), // "Homing_clicked"
QT_MOC_LITERAL(39, 1002, 23), // "GetParameterMov_clicked"
QT_MOC_LITERAL(40, 1026, 14), // "MoveTo_clicked"
QT_MOC_LITERAL(41, 1041, 27), // "CheckPositionButton_clicked"
QT_MOC_LITERAL(42, 1069, 26), // "on_GetAllParameter_clicked"
QT_MOC_LITERAL(43, 1096, 23), // "on_checkBox_all_clicked"
QT_MOC_LITERAL(44, 1120, 21), // "on_Homing_all_clicked"
QT_MOC_LITERAL(45, 1142, 21), // "on_MoveTo_all_clicked"
QT_MOC_LITERAL(46, 1164, 33), // "on_SetParameterDriver_all_cli..."
QT_MOC_LITERAL(47, 1198, 28), // "on_CheckEncoderAssoc_clicked"
QT_MOC_LITERAL(48, 1227, 25), // "on_ReadEncoderLog_clicked"
QT_MOC_LITERAL(49, 1253, 25), // "on_ReadGeneralLog_clicked"
QT_MOC_LITERAL(50, 1279, 30), // "on_CheckInternalStatus_clicked"
QT_MOC_LITERAL(51, 1310, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(52, 1334, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(53, 1359, 36), // "on_LoadEncoderFromFileButton_..."
QT_MOC_LITERAL(54, 1396, 33), // "on_ReadActualEncoderValue_cli..."
QT_MOC_LITERAL(55, 1430, 27) // "on_DeviceListButton_clicked"

    },
    "MainWindow\0readTcpData\0\0Errore\0"
    "QAbstractSocket::SocketError\0sock_error\0"
    "readTcpData_existence\0Errore_existence\0"
    "on_CommandStringButton_clicked\0"
    "on_ConnectToServerButton_clicked\0"
    "on_ConnectProgrammer_clicked\0"
    "on_CheckDrvAssoc_clicked\0"
    "on_CheckExistence_clicked\0"
    "on_ConnectExistence_clicked\0"
    "on_KillProcess_CollSoft_clicked\0"
    "on_NewProcess_CollSoft_clicked\0"
    "on_DisconnectExistence_clicked\0"
    "on_DisconnectToServerButton_clicked\0"
    "closing\0on_ReadSerialDrvLog_clicked\0"
    "on_ReadFileParLog_clicked\0"
    "on_CheckParAssoc_clicked\0"
    "on_SetParameterDriver_1_clicked\0"
    "on_SetParameterDriver_2_clicked\0"
    "on_SetParameterDriver_3_clicked\0"
    "on_SetParameterDriver_4_clicked\0"
    "on_SetParameterDriver_5_clicked\0"
    "on_SetParameterDriver_6_clicked\0"
    "on_SetParameterDriver_7_clicked\0"
    "on_SetParameterDriver_8_clicked\0"
    "on_SetParameterDriver_9_clicked\0"
    "on_SetParameterDriver_10_clicked\0"
    "on_SetParameterDriver_11_clicked\0"
    "on_SetParameterDriver_12_clicked\0"
    "on_SetParameterDriver_13_clicked\0"
    "on_SetParameterDriver_14_clicked\0"
    "GetParameterDriver_clicked\0drv_num\0"
    "Homing_clicked\0GetParameterMov_clicked\0"
    "MoveTo_clicked\0CheckPositionButton_clicked\0"
    "on_GetAllParameter_clicked\0"
    "on_checkBox_all_clicked\0on_Homing_all_clicked\0"
    "on_MoveTo_all_clicked\0"
    "on_SetParameterDriver_all_clicked\0"
    "on_CheckEncoderAssoc_clicked\0"
    "on_ReadEncoderLog_clicked\0"
    "on_ReadGeneralLog_clicked\0"
    "on_CheckInternalStatus_clicked\0"
    "on_actionQuit_triggered\0"
    "on_actionAbout_triggered\0"
    "on_LoadEncoderFromFileButton_clicked\0"
    "on_ReadActualEncoderValue_clicked\0"
    "on_DeviceListButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  269,    2, 0x08 /* Private */,
       3,    1,  270,    2, 0x08 /* Private */,
       6,    0,  273,    2, 0x08 /* Private */,
       7,    1,  274,    2, 0x08 /* Private */,
       8,    0,  277,    2, 0x08 /* Private */,
       9,    0,  278,    2, 0x08 /* Private */,
      10,    0,  279,    2, 0x08 /* Private */,
      11,    0,  280,    2, 0x08 /* Private */,
      12,    0,  281,    2, 0x08 /* Private */,
      13,    0,  282,    2, 0x08 /* Private */,
      14,    0,  283,    2, 0x08 /* Private */,
      15,    0,  284,    2, 0x08 /* Private */,
      16,    0,  285,    2, 0x08 /* Private */,
      17,    0,  286,    2, 0x08 /* Private */,
      18,    0,  287,    2, 0x08 /* Private */,
      19,    0,  288,    2, 0x08 /* Private */,
      20,    0,  289,    2, 0x08 /* Private */,
      21,    0,  290,    2, 0x08 /* Private */,
      22,    0,  291,    2, 0x08 /* Private */,
      23,    0,  292,    2, 0x08 /* Private */,
      24,    0,  293,    2, 0x08 /* Private */,
      25,    0,  294,    2, 0x08 /* Private */,
      26,    0,  295,    2, 0x08 /* Private */,
      27,    0,  296,    2, 0x08 /* Private */,
      28,    0,  297,    2, 0x08 /* Private */,
      29,    0,  298,    2, 0x08 /* Private */,
      30,    0,  299,    2, 0x08 /* Private */,
      31,    0,  300,    2, 0x08 /* Private */,
      32,    0,  301,    2, 0x08 /* Private */,
      33,    0,  302,    2, 0x08 /* Private */,
      34,    0,  303,    2, 0x08 /* Private */,
      35,    0,  304,    2, 0x08 /* Private */,
      36,    1,  305,    2, 0x08 /* Private */,
      38,    1,  308,    2, 0x08 /* Private */,
      39,    1,  311,    2, 0x08 /* Private */,
      40,    1,  314,    2, 0x08 /* Private */,
      41,    1,  317,    2, 0x08 /* Private */,
      42,    0,  320,    2, 0x08 /* Private */,
      43,    0,  321,    2, 0x08 /* Private */,
      44,    0,  322,    2, 0x08 /* Private */,
      45,    0,  323,    2, 0x08 /* Private */,
      46,    0,  324,    2, 0x08 /* Private */,
      47,    0,  325,    2, 0x08 /* Private */,
      48,    0,  326,    2, 0x08 /* Private */,
      49,    0,  327,    2, 0x08 /* Private */,
      50,    0,  328,    2, 0x08 /* Private */,
      51,    0,  329,    2, 0x08 /* Private */,
      52,    0,  330,    2, 0x08 /* Private */,
      53,    0,  331,    2, 0x08 /* Private */,
      54,    0,  332,    2, 0x08 /* Private */,
      55,    0,  333,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readTcpData(); break;
        case 1: _t->Errore((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->readTcpData_existence(); break;
        case 3: _t->Errore_existence((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->on_CommandStringButton_clicked(); break;
        case 5: _t->on_ConnectToServerButton_clicked(); break;
        case 6: _t->on_ConnectProgrammer_clicked(); break;
        case 7: _t->on_CheckDrvAssoc_clicked(); break;
        case 8: _t->on_CheckExistence_clicked(); break;
        case 9: _t->on_ConnectExistence_clicked(); break;
        case 10: _t->on_KillProcess_CollSoft_clicked(); break;
        case 11: _t->on_NewProcess_CollSoft_clicked(); break;
        case 12: _t->on_DisconnectExistence_clicked(); break;
        case 13: _t->on_DisconnectToServerButton_clicked(); break;
        case 14: _t->closing(); break;
        case 15: _t->on_ReadSerialDrvLog_clicked(); break;
        case 16: _t->on_ReadFileParLog_clicked(); break;
        case 17: _t->on_CheckParAssoc_clicked(); break;
        case 18: _t->on_SetParameterDriver_1_clicked(); break;
        case 19: _t->on_SetParameterDriver_2_clicked(); break;
        case 20: _t->on_SetParameterDriver_3_clicked(); break;
        case 21: _t->on_SetParameterDriver_4_clicked(); break;
        case 22: _t->on_SetParameterDriver_5_clicked(); break;
        case 23: _t->on_SetParameterDriver_6_clicked(); break;
        case 24: _t->on_SetParameterDriver_7_clicked(); break;
        case 25: _t->on_SetParameterDriver_8_clicked(); break;
        case 26: _t->on_SetParameterDriver_9_clicked(); break;
        case 27: _t->on_SetParameterDriver_10_clicked(); break;
        case 28: _t->on_SetParameterDriver_11_clicked(); break;
        case 29: _t->on_SetParameterDriver_12_clicked(); break;
        case 30: _t->on_SetParameterDriver_13_clicked(); break;
        case 31: _t->on_SetParameterDriver_14_clicked(); break;
        case 32: _t->GetParameterDriver_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->Homing_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->GetParameterMov_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->MoveTo_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->CheckPositionButton_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_GetAllParameter_clicked(); break;
        case 38: _t->on_checkBox_all_clicked(); break;
        case 39: _t->on_Homing_all_clicked(); break;
        case 40: _t->on_MoveTo_all_clicked(); break;
        case 41: _t->on_SetParameterDriver_all_clicked(); break;
        case 42: _t->on_CheckEncoderAssoc_clicked(); break;
        case 43: _t->on_ReadEncoderLog_clicked(); break;
        case 44: _t->on_ReadGeneralLog_clicked(); break;
        case 45: _t->on_CheckInternalStatus_clicked(); break;
        case 46: _t->on_actionQuit_triggered(); break;
        case 47: _t->on_actionAbout_triggered(); break;
        case 48: _t->on_LoadEncoderFromFileButton_clicked(); break;
        case 49: _t->on_ReadActualEncoderValue_clicked(); break;
        case 50: _t->on_DeviceListButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
