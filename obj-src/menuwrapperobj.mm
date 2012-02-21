#import "menuwrapperobj.h"
#import "MenuWrapperPrivate.h"
#import <Carbon/Carbon.h>

@implementation menuWrapperProxy
- (id)init
{
    if ((self = [super init])) {
        wrap = new menuWrapperPrivate();
        wrap->menu = [[TrayMenu alloc] init];
        [NSApp setDelegate: wrap->menu];
        [wrap->menu setParent: self];
    }
    return self;
}

-(void) dealloc
{
    [pool release];
    [super dealloc];
}
- (void) emitSayHelloRequested
{
    wrap->privateWrapperSlot();
}


- (menuWrapperPrivate *) getQtProxy
{
    return wrap;
}
@end
