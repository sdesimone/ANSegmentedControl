//
//  SampleAppDelegate.h
//  Sample
//
//  Created by Decors on 11/04/25.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ANSegmentedControl.h"

@interface SampleAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *__unsafe_unretained window;
    IBOutlet NSView *titleBar;
    ANSegmentedControl *__unsafe_unretained segment;
}

@property (unsafe_unretained) IBOutlet NSWindow *window;
@property (unsafe_unretained) IBOutlet ANSegmentedControl *segment;

- (IBAction)clickButton1:(id)sender;
- (IBAction)clickButton2:(id)sender;
- (IBAction)clickButton3:(id)sender;

@end
