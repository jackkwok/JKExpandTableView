//
//  UIImage+JKExpandTableView.m
//  JKExpandTableView
//
//  Created by Andrey Yastrebov on 27.08.13.
//  Copyright (c) 2013 Jack-Kwok. All rights reserved.
//

#import "UIImage+JKExpandTableView.h"
#import "NSBundle+JKExpandTableView.h"

@implementation UIImage (JKExpandTableView)

+ (UIImage*)expandTableViewImageNamed:(NSString*)name {
    UIImage *imageFromMainBundle = [UIImage imageNamed:name];
    if (imageFromMainBundle) {
        return imageFromMainBundle;
    }
    
    NSString *path = [[[NSBundle expandTableViewResourcesBundle] resourcePath] stringByAppendingPathComponent:name];
    
    if ([path pathExtension].length == 0)
    {
        path = [path stringByAppendingPathExtension:@"png"];
    }
    
    UIImage *imageFromMyLibraryBundle = [UIImage imageWithContentsOfFile:path];
    return imageFromMyLibraryBundle;
}

@end
