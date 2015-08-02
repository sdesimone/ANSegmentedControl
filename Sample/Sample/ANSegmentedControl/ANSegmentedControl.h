//
//  ANSegmentedControl.h
//  test01
//
//  Created by Decors on 11/04/22.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, ANSegmentedControlStyle) {
    ANSegmentedControlStyleWithGradient = 0,
    ANSegmentedControlStylePlain
};

@interface ANSegmentedControl : NSSegmentedControl <NSAnimationDelegate> {
@private
    NSPoint location;
}

-(void)setSelectedSegment:(NSInteger)newSegment animate:(bool)animate;
@property CGFloat fastAnimationDuration;
@property CGFloat slowAnimationDuration;
@property (nonatomic, strong) NSFont *labelFont;

@property (nonatomic) ANSegmentedControlStyle segmentedControlStyle;

@end
