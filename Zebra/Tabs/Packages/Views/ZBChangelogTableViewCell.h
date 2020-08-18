//
//  ZBChangelogTableViewCell.h
//  Zebra
//
//  Created by Wilson Styres on 5/17/20.
//  Copyright © 2020 Wilson Styres. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface ZBChangelogTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *changelogTitleLabel;
@property (strong, nonatomic) IBOutlet UILabel *changelogNotesLabel;

@end

NS_ASSUME_NONNULL_END
