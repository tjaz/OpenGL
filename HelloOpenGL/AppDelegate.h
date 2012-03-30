//
//  AppDelegate.h
//  HelloOpenGL
//
//  Created by Lion User on 28/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    OpenGLView* _glView;
}

@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@property (strong, nonatomic) UIWindow *window;

@end
