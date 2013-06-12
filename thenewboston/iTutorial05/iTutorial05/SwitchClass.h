//
//  SwitchClass.h
//  iTutorial05
//
//  Created by Jens Driller on 14/11/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RedClass;
@class BlueClass;

@interface SwitchClass : UIViewController

@property (retain, nonatomic) IBOutlet RedClass *redClass; 
@property (retain, nonatomic) IBOutlet BlueClass *blueClass; 

- (IBAction) switchViews:(id)sender;

@end