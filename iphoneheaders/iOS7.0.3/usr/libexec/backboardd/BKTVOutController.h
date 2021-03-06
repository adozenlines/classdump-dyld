/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <backboardd/backboardd-Structs.h>
@interface BKTVOutController : NSObject {

	int _tvOutMode;
	BOOL _forceTVOutMode;
	BOOL _disableCloneRotation;

}

@property (assign,nonatomic) int tvOutMode;              //@synthesize tvOutMode=_tvOutMode - In the implementation block
+(id)sharedInstance;
-(void)setCloneRotationDisabled:(BOOL)arg1 ;
-(void)_writeCurrentScreenSizeToAggregated:(CGSize)arg1 ;
-(void)setTvOutMode:(int)arg1 ;
-(void)startListeningForSettingsChanges;
-(void)stopListeningForSettingsChanges;
-(void)setInitialTVModeIfNeeded;
-(int)tvOutMode;
-(void)updateLayerKitSettings;
-(void)_tetherSettingChanged:(id)arg1 ;
-(void)_handleIapServerConnectionDied;
-(void)updateSettings;
-(void)addClone:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

