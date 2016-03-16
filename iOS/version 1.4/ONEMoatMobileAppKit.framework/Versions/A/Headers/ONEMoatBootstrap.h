//
// Created by Moat on 12/28/14.
// Copyright (c) 2014 Moat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ONEMoatObject.h"

@interface ONEMoatBootstrap : ONEMoatObject
// Use this to track web-based ads that implement the Moat JS tag. This method accepts a UIWebView or a component
// housing one. "Opaque" containers, such as Google's DFPBannerView, can be used. The return value indicates whether
// Moat was able to initialize tracking.
+(bool)injectDelegateWrapper:(UIView*)webViewOrWebViewContainer;
@end
