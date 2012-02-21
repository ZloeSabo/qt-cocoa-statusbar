#ifndef COCOA_MY
#define COCOA_MY
#import <Carbon/Carbon.h>
#import <Cocoa/Cocoa.h>
#import "menubar.h"

@implementation TrayMenu

- (void) onMyRequest:(id)sender {
        [_parent emitSayHelloRequested];
}

- (void) actionQuit:(id)sender {
	[NSApp terminate:sender];
}

- (NSMenu *) createMenu {
	NSZone *menuZone = [NSMenu menuZone];
	NSMenu *menu = [[NSMenu allocWithZone:menuZone] init];
	NSMenuItem *menuItem;
	
	// Add To Items
	
	menuItem = [menu addItemWithTitle:@"Say hello"
							   action:@selector(onMyRequest:)
						keyEquivalent:@""];
	[menuItem setTarget:self];
	
	// Add Separator
	[menu addItem:[NSMenuItem separatorItem]];
	
	// Add Quit Action
	menuItem = [menu addItemWithTitle:@"Quit"
							   action:@selector(actionQuit:)
						keyEquivalent:@""];
	[menuItem setToolTip:@"Click to Quit this App"];
	[menuItem setTarget:self];
	
	return menu;
}

- (void) applicationDidFinishLaunching:(NSNotification *)notification {
	NSMenu *menu = [self createMenu];
	
	_statusItem = [[[NSStatusBar systemStatusBar]
					statusItemWithLength:NSVariableStatusItemLength] retain];
	[_statusItem setMenu:menu];
        [_statusItem setTitle: @"Menu"];
	[_statusItem setHighlightMode:YES];
	[_statusItem setToolTip:@"Test Tray"];

	[menu release];
}
- (void) setParent: (menuWrapperProxy *)parent
{
    _parent = parent;
}
@end
#endif
