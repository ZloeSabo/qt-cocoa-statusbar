#ifndef MENUWRAPPERPRIVATE_H
#define MENUWRAPPERPRIVATE_H
#include <QObject>
#include "menubar.h"

class menuWrapperPrivate : public QObject
{
    Q_OBJECT
    public:
        TrayMenu * menu;
    signals:
        void sayHello();
    public slots:
        void privateWrapperSlot() { emit sayHello();};
};

#endif // MENUWRAPPERPRIVATE_H
