#ifndef MENUWRAPPER_H
#define MENUWRAPPER_H

#include <QObject>
#include <Carbon/Carbon.h>
//#include "menuwrapperobj.h"

class menuWrapperPrivate;
/*
class menuWrapper : public QObject
{
    Q_OBJECT
public:
    menuWrapper();
    ~menuWrapper();
    void onSayHelloPressed();
private:
    menuWrapperPrivate * wrap;
    NSAutoreleasePool *pool;
    menuWrapperProxy * mwp;
signals:
        void sayHello();
};
*/
/*
 class menuWrapper : public QObject, public NSObject
{
    Q_OBJECT
public:
    menuWrapper();
    //~menuWrapper();
    //void onSayHelloPressed();
private:
    //menuWrapperPrivate * wrap;
    menuWrapperObj * mwo;
signals:
        void sayHello();
};
*/
#endif // MENUWRAPPER_H
