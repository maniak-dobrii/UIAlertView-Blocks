//
//  UIAlertView+Blocks.h
//  Shibui
//
//  Created by Jiva DeVoe on 12/28/10.
//  Copyright 2010 Random Ideas, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RIButtonItem.h"

@interface UIAlertView (Blocks)

-(id)initWithTitle:(NSString *)inTitle message:(NSString *)inMessage cancelButtonItem:(RIButtonItem *)inCancelButtonItem otherButtonItems:(RIButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION;

-(id)initWithTitle:(NSString *)inTitle message:(NSString *)inMessage cancelButtonItem:(RIButtonItem *)inCancelButtonItem otherButtonItemsArray:(NSArray *)inOtherButtonItemsArray;

- (NSInteger)addButtonItem:(RIButtonItem *)item;

#pragma mark convenience methods
/**
  Shows simple alert with Ok button and text without title.
 
 @param text message for UIAlertView.
 */
+ (void) simpleAlertWithText: (NSString*)text;

/**
 Shows simple alert with Ok button, title and text.
 
 @param title title for UIAlertView.
 @param text message for UIAlertView.
 */
+ (void) simpleAlertWithTitle: (NSString*)title andText: (NSString*)text;

/**
 Shows simple alert with Ok button, title and text. Performs block after Ok button tapped.
 
 @param title title for UIAlertView.
 @param text message for UIAlertView.
 @param conpletionBlock Block to be performed after Ok button tapped.
 */
+ (void) simpleAlertWithTitle: (NSString*)title text: (NSString*)text completionBlock: (void(^)())completionBlock;

@end