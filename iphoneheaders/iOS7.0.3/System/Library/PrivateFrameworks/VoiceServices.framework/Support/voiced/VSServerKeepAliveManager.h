/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface VSServerKeepAliveManager : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableSet* _activeKeepAlives;

}
-(BOOL)hasActiveKeepAlives;
-(void)maintainKeepAlive:(id)arg1 ;
-(void)cancelKeepAlive:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end

