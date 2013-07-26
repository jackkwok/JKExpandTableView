//
//  JKAppDelegate.h
//  ExpandTableView
//
//  Created by Jack Kwok on 7/5/13.
//  Copyright (c) 2013 Jack Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

void uncaughtExceptionHandler(NSException *exception);

@end
