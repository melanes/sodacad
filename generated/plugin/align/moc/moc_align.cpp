/****************************************************************************
** Meta object code from reading C++ file 'align.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/align/align.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'align.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LC_Align_t {
    QByteArrayData data[1];
    char stringdata[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LC_Align_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LC_Align_t qt_meta_stringdata_LC_Align = {
    {
QT_MOC_LITERAL(0, 0, 8)
    },
    "LC_Align\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LC_Align[] = {

 // content:
       7,       // revision
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

void LC_Align::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LC_Align::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LC_Align.data,
      qt_meta_data_LC_Align,  qt_static_metacall, 0, 0}
};


const QMetaObject *LC_Align::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LC_Align::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LC_Align.stringdata))
        return static_cast<void*>(const_cast< LC_Align*>(this));
    if (!strcmp(_clname, "QC_PluginInterface"))
        return static_cast< QC_PluginInterface*>(const_cast< LC_Align*>(this));
    if (!strcmp(_clname, "org.librecad.PluginInterface/1.0"))
        return static_cast< QC_PluginInterface*>(const_cast< LC_Align*>(this));
    return QObject::qt_metacast(_clname);
}

int LC_Align::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x12, 0x00, 0x6f, 0x72, 0x67, 0x2e, 0x6c, 0x69,
    0x62, 0x72, 0x65, 0x63, 0x61, 0x64, 0x2e, 0x61,
    0x6c, 0x69, 0x67, 0x6e, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x08, 0x00, 0x4c, 0x43,
    0x5f, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x00, 0x00,
    0x3a, 0x00, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x0e, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 0x4b, 0x65,
    0x79, 0x73, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x64, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
    0x58, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x12, 0x00, 0x6f, 0x72, 0x67, 0x2e, 0x6c, 0x69,
    0x62, 0x72, 0x65, 0x63, 0x61, 0x64, 0x2e, 0x61,
    0x6c, 0x69, 0x67, 0x6e, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 0x4b, 0x65,
    0x79, 0x73, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 0x0e, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x08, 0x00, 0x4c, 0x43,
    0x5f, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x00, 0x00,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x3a, 0x00, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x2c, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(LC_Align, LC_Align)

QT_END_MOC_NAMESPACE
