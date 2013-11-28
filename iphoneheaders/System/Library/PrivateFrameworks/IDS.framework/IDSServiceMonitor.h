/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	int _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(id)service;
-(void)dealloc;
-(id)initWithService:(id)arg1 ;
-(int)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(int)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
@end
