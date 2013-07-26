//
//  SimpleExampleViewController.h
//  ExpandTableView
//
//  Created by Jack Kwok on 7/6/13.
//  Copyright (c) 2013 Jack Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JKExpandTableView.h"

@interface SimpleExampleViewController : UIViewController
    <JKExpandTableViewDelegate, JKExpandTableViewDataSource>

@property(nonatomic,weak) IBOutlet JKExpandTableView * expandTableView;

@property(nonatomic,strong) NSMutableArray * dataModelArray;

@end
