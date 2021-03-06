//
//  ToggleNaturalScrollingAction.h
//  ControlPlane
//
//  Created by Dustin Rue on 3/25/12.
//  Copyright (c) 2012. All rights reserved.
//

#import "ToggleableAction.h"

@interface ToggleNaturalScrollingAction : ToggleableAction 

- (NSString *) description;
- (BOOL) execute: (NSString **) errorString;
+ (NSString *) helpText;
+ (NSString *) creationHelpText;

@end
