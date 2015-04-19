//
//  CustomParentCell.m
//  JKExpandTableViewSamples
//
//  Created by Jesse A on 4/12/15.
//  Copyright (c) 2015 Jack Kwok. All rights reserved.
//

#import "CustomParentCell.h"

@interface CustomParentCell ()

@property (nonatomic,strong) IBOutlet UIImageView *indicator;
@end

@implementation CustomParentCell

- (UIImageView *)pIndicator {
    return self.indicator;
}

@end
