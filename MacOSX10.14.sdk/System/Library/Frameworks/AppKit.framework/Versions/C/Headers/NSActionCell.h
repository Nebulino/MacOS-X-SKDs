/*
        NSActionCell.h
	Application Kit
	Copyright (c) 1994-2018, Apple Inc.
	All rights reserved.
*/

#import <AppKit/NSCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSActionCell : NSCell
{
    /*All instance variables are private*/
    NSInteger	_tag APPKIT_IVAR;
    id		_target APPKIT_IVAR;
    SEL		_action APPKIT_IVAR;
    id		_controlView APPKIT_IVAR; // this was always private, but it isn't used for storage of the control view now either.  Please use the accessors -[NSCell controlView] and -[NSCell setControlView:].      
}

@property (nullable, weak) id target; // Target is weak for zeroing-weak compatible objects in apps linked on 10.10 or later. Otherwise the behavior of this property is 'assign’.
@property (nullable) SEL action;
@property NSInteger tag;

@end

NS_ASSUME_NONNULL_END
