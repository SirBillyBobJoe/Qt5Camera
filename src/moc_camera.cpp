/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[31];
    char stringdata0[416];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 9), // "setCamera"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "QCameraInfo"
QT_MOC_LITERAL(4, 30, 10), // "cameraInfo"
QT_MOC_LITERAL(5, 41, 11), // "startCamera"
QT_MOC_LITERAL(6, 53, 10), // "stopCamera"
QT_MOC_LITERAL(7, 64, 10), // "toggleLock"
QT_MOC_LITERAL(8, 75, 9), // "takeImage"
QT_MOC_LITERAL(9, 85, 19), // "displayCaptureError"
QT_MOC_LITERAL(10, 105, 26), // "QCameraImageCapture::Error"
QT_MOC_LITERAL(11, 132, 11), // "errorString"
QT_MOC_LITERAL(12, 144, 24), // "configureCaptureSettings"
QT_MOC_LITERAL(13, 169, 22), // "configureImageSettings"
QT_MOC_LITERAL(14, 192, 18), // "displayCameraError"
QT_MOC_LITERAL(15, 211, 18), // "updateCameraDevice"
QT_MOC_LITERAL(16, 230, 8), // "QAction*"
QT_MOC_LITERAL(17, 239, 6), // "action"
QT_MOC_LITERAL(18, 246, 17), // "updateCameraState"
QT_MOC_LITERAL(19, 264, 14), // "QCamera::State"
QT_MOC_LITERAL(20, 279, 17), // "updateCaptureMode"
QT_MOC_LITERAL(21, 297, 20), // "processCapturedImage"
QT_MOC_LITERAL(22, 318, 9), // "requestId"
QT_MOC_LITERAL(23, 328, 3), // "img"
QT_MOC_LITERAL(24, 332, 17), // "displayViewfinder"
QT_MOC_LITERAL(25, 350, 20), // "displayCapturedImage"
QT_MOC_LITERAL(26, 371, 15), // "readyForCapture"
QT_MOC_LITERAL(27, 387, 5), // "ready"
QT_MOC_LITERAL(28, 393, 10), // "imageSaved"
QT_MOC_LITERAL(29, 404, 2), // "id"
QT_MOC_LITERAL(30, 407, 8) // "fileName"

    },
    "Camera\0setCamera\0\0QCameraInfo\0cameraInfo\0"
    "startCamera\0stopCamera\0toggleLock\0"
    "takeImage\0displayCaptureError\0"
    "QCameraImageCapture::Error\0errorString\0"
    "configureCaptureSettings\0"
    "configureImageSettings\0displayCameraError\0"
    "updateCameraDevice\0QAction*\0action\0"
    "updateCameraState\0QCamera::State\0"
    "updateCaptureMode\0processCapturedImage\0"
    "requestId\0img\0displayViewfinder\0"
    "displayCapturedImage\0readyForCapture\0"
    "ready\0imageSaved\0id\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    3,  106,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      18,    1,  119,    2, 0x08 /* Private */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    2,  123,    2, 0x08 /* Private */,
      24,    0,  128,    2, 0x08 /* Private */,
      25,    0,  129,    2, 0x08 /* Private */,
      26,    1,  130,    2, 0x08 /* Private */,
      28,    2,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, QMetaType::QString,    2,    2,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   29,   30,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCamera((*reinterpret_cast< const QCameraInfo(*)>(_a[1]))); break;
        case 1: _t->startCamera(); break;
        case 2: _t->stopCamera(); break;
        case 3: _t->toggleLock(); break;
        case 4: _t->takeImage(); break;
        case 5: _t->displayCaptureError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCameraImageCapture::Error(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->configureCaptureSettings(); break;
        case 7: _t->configureImageSettings(); break;
        case 8: _t->displayCameraError(); break;
        case 9: _t->updateCameraDevice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: _t->updateCameraState((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 11: _t->updateCaptureMode(); break;
        case 12: _t->processCapturedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 13: _t->displayViewfinder(); break;
        case 14: _t->displayCapturedImage(); break;
        case 15: _t->readyForCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCameraImageCapture::Error >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Camera.data,
    qt_meta_data_Camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
