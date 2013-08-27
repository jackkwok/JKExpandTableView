//
//  NSBundle+JKExpandTableView.m
//  JKExpandTableView
//
//  Created by Andrey Yastrebov on 27.08.13.
//  Copyright (c) 2013 Jack-Kwok. All rights reserved.
//

#import "NSBundle+JKExpandTableView.h"

@implementation NSBundle (JKExpandTableView)

+ (NSBundle*)expandTableViewResourcesBundle {
    static dispatch_once_t onceToken;
    static NSBundle *myLibraryResourcesBundle = nil;
    dispatch_once(&onceToken, ^{
        myLibraryResourcesBundle = [NSBundle bundleWithURL:[[NSBundle mainBundle] URLForResource:@"JKImageResources" withExtension:@"bundle"]];
    });
    return myLibraryResourcesBundle;
}

@end
