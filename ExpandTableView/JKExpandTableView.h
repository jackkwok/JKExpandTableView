//
//  JKExpandTableView.h
//  ExpandTableView
//
//  Created by Jack Kwok on 7/5/13.
//  Copyright (c) 2013 Jack Kwok. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JKMultiSelectSubTableViewCell.h"

// Users of this class must implement the two protocol methods listed here.

@protocol JKExpandTableViewDelegate <NSObject>
@required
// return YES if more than one child under this parent can be selected at the same time.  Otherwise, return NO.
// it is permissible to have a mix of multi-selectables and non-multi-selectables.
- (BOOL) shouldSupportMultipleSelectableChildrenAtParentIndex:(NSInteger) index;
// return YES if multiple children can be shown in expanded state at the same time; Otherwise, return NO.
- (BOOL) shouldAllowMultipleExpansions;

@optional
// method the delegate should implement to get notified when a child is clicked on.
- (void) tableView:(UITableView *)tableView didSelectCellAtChildIndex:(NSInteger) childIndex withInParentCellIndex:(NSInteger) parentIndex;
- (void) tableView:(UITableView *)tableView didDeselectCellAtChildIndex:(NSInteger) childIndex withInParentCellIndex:(NSInteger) parentIndex;
// to get notified when a parent is clicked on.
- (void) tableView:(UITableView *)tableView didSelectParentCellAtIndex:(NSInteger) index;

- (UIColor *) foregroundColor;
- (UIColor *) backgroundColor;
- (UIImage *) selectionIndicatorIcon;
- (UIFont *) fontForParents;   // Font for the labels on the Parent cells.
- (UIFont *) fontForChildren;  // Font for the labels on the Children cells.
@end

@protocol JKExpandTableViewDataSource <NSObject>
@required
- (NSInteger) numberOfParentCells;
- (NSInteger) numberOfChildCellsUnderParentIndex:(NSInteger) parentIndex;

- (NSString *) labelForParentCellAtIndex:(NSInteger) parentIndex;
- (NSString *) labelForCellAtChildIndex:(NSInteger) childIndex withinParentCellIndex:(NSInteger) parentIndex;

- (BOOL) shouldDisplaySelectedStateForCellAtChildIndex:(NSInteger) childIndex withinParentCellIndex:(NSInteger) parentIndex;
// cell icons are optional
@optional
- (UIImage *) iconForParentCellAtIndex:(NSInteger) parentIndex;
- (UIImage *) iconForCellAtChildIndex:(NSInteger) childIndex withinParentCellIndex:(NSInteger) parentIndex;
- (BOOL) shouldRotateIconForParentOnToggle;
@end

@interface JKExpandTableView : UITableView
    <UITableViewDataSource, UITableViewDelegate, JKSubTableViewCellDelegate> {
    __weak id tableViewDelegate;
    __weak id dataSourceDelegate;
    NSMutableArray * expansionStates;
}

@property(nonatomic,weak) id<JKExpandTableViewDelegate> tableViewDelegate;
@property(nonatomic,weak,getter = getDataSourceDelegate, setter = setDataSourceDelegate:) id<JKExpandTableViewDataSource> dataSourceDelegate;
@property(nonatomic,strong) NSMutableArray * expansionStates;

@end
