//
//  JKSubTableViewCell.h
//  ExpandTableView
//
//  Created by Jack Kwok on 7/20/13.
//  Copyright (c) 2013 Jack Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JKSubTableViewCellCell;

@protocol JKSubTableViewCellDelegate <NSObject>
// return total number of children under this parentIndex
- (NSInteger) numberOfChildrenUnderParentIndex:(NSInteger)parentIndex;

// selection state: returns YES if child is in selected state
- (BOOL) isSelectedForChildIndex:(NSInteger)childIndex underParentIndex:(NSInteger)parentIndex;

// notify delegate that a child has just been selected
- (void) didSelectRowAtChildIndex:(NSInteger)childIndex
                         selected:(BOOL)isSwitchedOn
                 underParentIndex:(NSInteger)parentIndex;

// get the label string
- (NSString *) labelForChildIndex:(NSInteger)childIndex underParentIndex:(NSInteger)parentIndex;
// get the icon image
- (UIImage *) iconForChildIndex:(NSInteger)childIndex underParentIndex:(NSInteger)parentIndex;

@optional
/*! Optional method to override and provide your custom cell for multi selection mode.
 
 */
- (JKSubTableViewCellCell *)tableView:(UITableView *)tableView multiSelectCellForRowAtIndexPath:(NSIndexPath *)indexPath;
/*! Optional method to override and provide your custom cell for single selection mode.
 
 */
- (JKSubTableViewCellCell *)tableView:(UITableView *)tableView singleSelectCellForRowAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface JKSubTableViewCell : UITableViewCell <UITableViewDataSource, UITableViewDelegate> {
    UITableView *insideTableView;
    __weak id delegate;
    UIColor *bgColor;
    UIColor *fgColor;
    UIFont *font;
    UIImage *selectionIndicatorImg;
}

@property(nonatomic,strong) UITableView *insideTableView;
@property(nonatomic,weak,getter = getDelegate, setter = setDelegate:) id<JKSubTableViewCellDelegate> delegate;
@property(nonatomic) NSInteger parentIndex;
@property(nonatomic, assign) CGFloat childCellHeight;
@property(nonatomic,strong) UIImage *selectionIndicatorImg;


@property(nonatomic,strong,getter = getSubTableForegroundColor, setter = setSubTableForegroundColor:) UIColor *fgColor;
@property(nonatomic,strong,getter = getSubTableBackgroundColor, setter = setSubTableBackgroundColor:) UIColor *bgColor;
@property(nonatomic,strong,getter = getSubTableFont, setter = setSubTableFont:) UIFont *font;

- (void)customInit;
- (JKSubTableViewCellCell *)customChildCell:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath;
- (UIImage *) selectionIndicatorImgOrDefault;
- (void) reload;

@end
