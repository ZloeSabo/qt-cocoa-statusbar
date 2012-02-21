#ifndef BAR_H
#define BAR_H
#import <Carbon/Carbon.h>
#import <Cocoa/Cocoa.h>
#import "menuwrapperobj.h"

@interface TrayMenu : NSObject {
@private
        NSStatusItem *_statusItem;
        menuWrapperProxy *_parent;
}
- (void) setParent: (menuWrapperProxy *)parent;
@end
#endif // BAR_H
