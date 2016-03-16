//
//  MoatVideoAPI.h
//  WebView
//
//  Created by Moat on 2/20/15.
//  Copyright (c) 2015 Moat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

#import "ONEMoatObject.h"
#import "ONEMoatBootstrap.h"
#import "ONEMoatAdEvent.h"

@interface ONEMoatVideoTracker : ONEMoatBootstrap

@property bool debug;

+ (ONEMoatVideoTracker*)trackerWithPartnerCode:(NSString*)partnerCode;

- (bool) trackVideoAd:(NSDictionary*)adIds
   usingMPMoviePlayer:(MPMoviePlayerController*)player;

- (bool) trackVideoAd:(NSDictionary*)adIds
   usingAVMoviePlayer:(AVPlayer*)player
            withLayer:(CALayer*)layer
   withContainingView:(UIView*)view;

- (void) dispatchEvent:(ONEMoatAdEvent*)event;

- (void) changeTargetLayer:(CALayer*)newLayer
        withContainingView:(UIView*)view;

@end
