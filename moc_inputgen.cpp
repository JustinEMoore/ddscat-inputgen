/****************************************************************************
** Meta object code from reading C++ file 'inputgen.h'
**
** Created: Mon Oct 24 11:24:17 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputgen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputgen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputGen[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      25,    9,    9,    9, 0x08,
      39,    9,    9,    9, 0x08,
      53,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputGen[] = {
    "InputGen\0\0startClicked()\0exitClicked()\0"
    "saveClicked()\0check()\0checkFile()\0"
};

const QMetaObject InputGen::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InputGen,
      qt_meta_data_InputGen, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputGen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputGen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputGen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputGen))
        return static_cast<void*>(const_cast< InputGen*>(this));
    return QDialog::qt_metacast(_clname);
}

int InputGen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startClicked(); break;
        case 1: exitClicked(); break;
        case 2: saveClicked(); break;
        case 3: check(); break;
        case 4: checkFile(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
