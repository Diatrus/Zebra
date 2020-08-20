//
//  ZBSourceListTableViewController.h
//  Zebra
//
//  Created by Wilson Styres on 12/3/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

@import UIKit;
#import <Extensions/ZBRefreshableTableViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBSourceListViewController : ZBRefreshableTableViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    NSMutableArray <ZBSource *> *sources;
    NSMutableArray <ZBSource *> *filteredSources;
}
@end

NS_ASSUME_NONNULL_END
