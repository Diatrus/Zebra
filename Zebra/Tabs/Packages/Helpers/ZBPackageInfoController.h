//
//  ZBPackageInfoController.h
//  Zebra
//
//  Created by Wilson Styres on 5/15/20.
//  Copyright © 2020 Wilson Styres. All rights reserved.
//

#ifndef ZBPackageInfoController_h
#define ZBPackageInfoController_h

@class ZBPackage;

@protocol ZBPackageInfoController
- (id)initWithPackage:(ZBPackage *)package;
@end

#endif /* ZBPackageInfoController_h */
