//
//  ZBRefreshableTableViewController.h
//  Zebra
//
//  Created by Thatchapon Unprasert on 17/6/2019
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import "ZBTableViewController.h"

#import <Database/ZBDatabaseManager.h>
#import <Tabs/Sources/Helpers/ZBSourceManager.h>
#import <Theme/ZBThemeManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBRefreshableTableViewController : ZBTableViewController <ZBSourceDelegate> {
    ZBSourceManager *sourceManager;
    ZBDatabaseManager *databaseManager;
}
- (void)didEndRefreshing;
- (void)layoutNavigationButtons;
- (void)layoutNavigationButtonsNormal;
- (void)layoutNavigationButtonsRefreshing;
@end

NS_ASSUME_NONNULL_END
