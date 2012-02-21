#ifndef MENUWRAPPEROBJ_H
#define MENUWRAPPEROBJ_H
#include <Carbon/Carbon.h>

class menuWrapperPrivate;

@interface menuWrapperProxy : NSObject {
@private
    NSAutoreleasePool *pool;
@public
    menuWrapperPrivate * wrap;
}
- (void) emitSayHelloRequested;
- (menuWrapperPrivate *) getQtProxy;
@end

#endif // MENUWRAPPEROBJ_H
