//
//  testLogAppDelegate.h
//  testLog
//
//  Created by MAC21 on 26/08/11.
//  Copyright 2011 diaspark India. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testLogViewController;

@interface testLogAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet testLogViewController *viewController;

@end
