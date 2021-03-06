/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMutableOrderedSet, NSMutableDictionary;

@interface SBAppStatusBarManager : NSObject {

	NSHashTable* _disableAlphaChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	float _defaultWindowLevel;

}
+(id)sharedInstance;
-(void)hideStatusBar;
-(void)setStatusBarAlpha:(float)arg1 ;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1 ;
-(void)_updateWindowLevel;
-(void)setWindowLevel:(float)arg1 forOverrideReason:(id)arg2 ;
-(void)removeWindowLevelOverrideReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isStatusBarHidden;
-(void)setDefaultWindowLevel:(float)arg1 ;
-(void)showStatusBar;
@end

