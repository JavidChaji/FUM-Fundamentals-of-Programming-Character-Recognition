/****************************************************************************
** Meta object code from reading C++ file 'ocr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ocr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ocr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCR_t {
    QByteArrayData data[30];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCR_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCR_t qt_meta_stringdata_OCR = {
    {
QT_MOC_LITERAL(0, 0, 3), // "OCR"
QT_MOC_LITERAL(1, 4, 32), // "on_detect_letters_button_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 40), // "on_add_word_to_dictionary_but..."
QT_MOC_LITERAL(4, 79, 4), // "crop"
QT_MOC_LITERAL(5, 84, 11), // "numsampeles"
QT_MOC_LITERAL(6, 96, 9), // "char[100]"
QT_MOC_LITERAL(7, 106, 4), // "harf"
QT_MOC_LITERAL(8, 111, 5), // "saveq"
QT_MOC_LITERAL(9, 117, 5), // "scale"
QT_MOC_LITERAL(10, 123, 16), // "detected_letters"
QT_MOC_LITERAL(11, 140, 1), // "p"
QT_MOC_LITERAL(12, 142, 10), // "similarity"
QT_MOC_LITERAL(13, 153, 5), // "char*"
QT_MOC_LITERAL(14, 159, 4), // "find"
QT_MOC_LITERAL(15, 164, 4), // "int*"
QT_MOC_LITERAL(16, 169, 10), // "maxtatbigh"
QT_MOC_LITERAL(17, 180, 10), // "read_table"
QT_MOC_LITERAL(18, 191, 5), // "radif"
QT_MOC_LITERAL(19, 197, 5), // "soton"
QT_MOC_LITERAL(20, 203, 5), // "width"
QT_MOC_LITERAL(21, 209, 6), // "height"
QT_MOC_LITERAL(22, 216, 9), // "find_word"
QT_MOC_LITERAL(23, 226, 8), // "learning"
QT_MOC_LITERAL(24, 235, 7), // "strstr1"
QT_MOC_LITERAL(25, 243, 6), // "char[]"
QT_MOC_LITERAL(26, 250, 1), // "a"
QT_MOC_LITERAL(27, 252, 1), // "b"
QT_MOC_LITERAL(28, 254, 1), // "y"
QT_MOC_LITERAL(29, 256, 1) // "g"

    },
    "OCR\0on_detect_letters_button_clicked\0"
    "\0on_add_word_to_dictionary_button_clicked\0"
    "crop\0numsampeles\0char[100]\0harf\0saveq\0"
    "scale\0detected_letters\0p\0similarity\0"
    "char*\0find\0int*\0maxtatbigh\0read_table\0"
    "radif\0soton\0width\0height\0find_word\0"
    "learning\0strstr1\0char[]\0a\0b\0y\0g"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCR[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    3,   66,    2, 0x08 /* Private */,
       9,    3,   73,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    3,   83,    2, 0x08 /* Private */,
      17,    4,   90,    2, 0x08 /* Private */,
      22,    0,   99,    2, 0x08 /* Private */,
      23,    2,  100,    2, 0x08 /* Private */,
      24,    4,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 6,    5,    7,    8,
    QMetaType::Char, 0x80000000 | 6,   11,
    QMetaType::Void, QMetaType::Char, 0x80000000 | 13, 0x80000000 | 15,    7,   14,   16,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   18,   19,   20,   21,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Char,    5,    7,
    QMetaType::Int, 0x80000000 | 25, 0x80000000 | 25, 0x80000000 | 15, 0x80000000 | 15,   26,   27,   28,   29,

       0        // eod
};

void OCR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OCR *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_detect_letters_button_clicked(); break;
        case 1: _t->on_add_word_to_dictionary_button_clicked(); break;
        case 2: _t->crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char(*)[100]>(_a[2])),(*reinterpret_cast< char(*)[100]>(_a[3]))); break;
        case 3: _t->scale((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char(*)[100]>(_a[2])),(*reinterpret_cast< char(*)[100]>(_a[3]))); break;
        case 4: { char _r = _t->detected_letters((*reinterpret_cast< char(*)[100]>(_a[1])));
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->similarity((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3]))); break;
        case 6: _t->read_table((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4]))); break;
        case 7: { int _r = _t->find_word();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->learning((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 9: { int _r = _t->strstr1((*reinterpret_cast< char(*)[]>(_a[1])),(*reinterpret_cast< char(*)[]>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCR::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OCR.data,
    qt_meta_data_OCR,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OCR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCR.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
