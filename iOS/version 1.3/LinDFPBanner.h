//
//  LinDFPBanner.h
//  AdmobDemo
//
//  Created by Vivek Sehrawat on 11/25/14.
//  Copyright (c) 2014 MA. All rights reserved.
//
#import <GoogleMobileAds/DFPBannerView.h>
#import "LinDFPBanner.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@class DFPInterstitial;
@class GADBannerView;
@class GADInterstitial;

typedef enum{
    TypeGames,
    TypeNewsStand,
    TypeEducation,
    TypeBusiness,
    TypeEntertainment,
    TypeFinance,
    TypeFoodnDrink,
    TypeHealthnFitness,
    TypeKids,
    TypeLifeStyle,
    TypeMedical,
    TypeMusic,
    TypeNavigation,
    TypephotonVideo,
    TypeProductivity,
    TypeReference,
    TypeSocialNetworking,
    TypeSports,
    TypeTravel,
    TypeUtilities,
    TypeWeather
    
} ApplicationType;

@interface LinDFPBanner : DFPBannerView

+(DFPRequest *)LinRequest;
-(NSMutableDictionary *)LinTarget;
-(void)InterstitialAdWithAdUnit:(NSString *)AdUnit;
-(void)setApplicationType:(ApplicationType )applicationType;
- (void)loadRequestLin:(DFPRequest *)request interstitial:(DFPInterstitial *)interstitialAd preferences:(NSDictionary *)pref andVC:(UIViewController *)controller;
- (void)loadRequestLin:(DFPRequest *)request banner:(LinDFPBanner *)banner preferences:(NSDictionary *)pref andVC:(UIViewController *)controller;
@property(nonatomic, copy) NSString *PubID;
@property(nonatomic, copy) NSMutableDictionary *addCustomTarget;
@property(nonatomic, copy) DFPRequest *linRequest;
@property(nonatomic, strong) DFPInterstitial *interstitial;

@end
