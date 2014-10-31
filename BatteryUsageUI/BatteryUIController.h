/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSListController.h"

#import "UIAlertViewDelegate.h"

@class BatteryUsageRadarComposeViewController, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, PSSpecifier, UIActivityIndicatorView;

@interface BatteryUIController : PSListController <UIAlertViewDelegate>
{
    NSMutableArray *_suggestionEntries;
    PSSpecifier *_suggestionGroup;
    NSArray *_usageTimeEntries;
    NSTimer *_timer;
    NSString *_notTrustedString;
    NSString *_chargingString;
    PSSpecifier *_textSpecifier;
    PSSpecifier *_usageSpecifier;
    PSSpecifier *_standbySpecifier;
    int _fullyChargedToken;
    int _pluggedInToken;
    unsigned long long _isCharged;
    unsigned long long _isPlugged;
    float _standbySeconds;
    float _usageSeconds;
    _Bool _trusted;
    PSSpecifier *_batteryGroup;
    PSSpecifier *_spinnerGroup;
    int _batteryUIQueryRange;
    NSMutableArray *_batteryEntries;
    PSSpecifier *_batteryGraphSpecifier;
    int _batteryUIQueryType;
    int _batteryUIType;
    NSMutableDictionary *_currentDictionary;
    UIActivityIndicatorView *_activityIndicator;
    BatteryUsageRadarComposeViewController *_radarController;
}

- (void).cxx_destruct;
@property(nonatomic) int BUI_MODE;
- (id)_batteryGroupSpecifier;
- (id)_spinnerSpecifierGroup;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (id)appEnergyValue:(id)arg1;
- (id)appQualifiers:(id)arg1;
- (id)batteryGraphSpecifier;
- (id)batteryUIQueryRange:(id)arg1;
- (id)batteryUIQueryRangeKey;
@property(nonatomic) int batteryUIQueryType; // @synthesize batteryUIQueryType=_batteryUIQueryType;
@property(nonatomic) int batteryUIType; // @synthesize batteryUIType=_batteryUIType;
@property(retain, nonatomic) NSMutableDictionary *currentDictionary; // @synthesize currentDictionary=_currentDictionary;
- (id)generateBatteryEntrySpecifiers:(id)arg1;
- (id)getActiveTime:(id)arg1;
- (id)getBackgroundActiveTime:(id)arg1;
- (id)getChargeCycles:(id)arg1;
- (id)init;
- (void)queryForBatteryBreakdown;
@property(retain, nonatomic) BatteryUsageRadarComposeViewController *radarController; // @synthesize radarController=_radarController;
- (id)rangeSelectorSpecifierWithDays:(id)arg1;
- (void)rebuildList;
- (void)reloadOtherTypeUI:(id)arg1;
- (void)reloadUI;
- (void)reportIssue;
- (void)setBatteryUIQueryRange:(id)arg1 specifier:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (id)setUpBatterySpecifiers;
- (id)setUpInternalAppSpecifiers;
- (id)setUpInternalSpecifiers;
- (_Bool)showDaemonsInInternal;
- (void)showInternalViewController;
- (id)specifierForBatteryEntry:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

