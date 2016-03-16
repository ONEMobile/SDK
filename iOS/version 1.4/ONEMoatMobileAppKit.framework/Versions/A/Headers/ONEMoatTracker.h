//
// Created by Moat on 2/24/15.
// Copyright (c) 2015 Moat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ONEMoatBootstrap.h"

@interface ONEMoatTracker : ONEMoatObject
// Use this to track ads that can't run JavaScript. This method accepts any UIView. Web-based ads, including "opaque"
// web containers (Google's DFPBannerView, etc.) are best tracked using MoatBootstrap's injectDelegateWrapper instead.
+ (ONEMoatTracker *)trackerWithAdView:(UIView *)adView partnerCode:(NSString *)partnerCode;

// Use this to track hybrid, two-view ads that consist both of a native UIView and a web-based component.
+ (bool) trackAdView:(UIView *)adView withWebComponent:(UIView*)webViewOrWebViewContainer;

-(void)trackAd:(NSDictionary*)adIds;
@end
