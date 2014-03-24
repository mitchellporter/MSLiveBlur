//
//  MSLiveBlurView.h
//  SupportKit
//
//  Created by Michael Spensieri on 3/4/14.
//  Copyright (c) 2014 Radialpoint. All rights reserved.
//

#import <UIKit/UIKit.h>

extern const int kLiveBlurIntervalStatic;

@interface MSLiveBlurView : NSObject

+(instancetype)sharedInstance;

-(CGRect)blurRect:(CGRect)rect;
-(void)stopBlurringRect:(CGRect)rect;

-(void)forceUpdateBlur;

@property double blurRadius;
@property double blurInterval;
@property UIColor* tintColor;

@end
