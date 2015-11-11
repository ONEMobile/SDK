//
//  LinDFPBanner.h
//  AdmobDemo
//
//  Created by Vivek Sehrawat on 11/25/14.
//  Copyright (c) 2014 MA. All rights reserved.
//
#import <GoogleMobileAds/DFPBannerView.h>
//#import "DFPBannerView.h"
#import "LinDFPBanner.h"

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

//+(void)intializeLinOneWithKey:(NSString *)ApiKey ApplicationName:(NSString *)appName;


-(void)setApplicationType:(ApplicationType )applicationType;

- (void)loadRequestLin:(GADRequest *)request banner:(LinDFPBanner *)banner preferences:(NSDictionary *)pref andVC:(UIViewController *)controller;
@property(nonatomic, copy) NSString *PubID;

@end
