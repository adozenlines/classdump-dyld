/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerLog/PLXPCConnectionClient.h>

@interface PLClientLogger : PLXPCConnectionClient
+(id)sharedInstance;
-(void)PLXPCinvalidationHandler;
-(BOOL)logEvent:(id)arg1 withContent:(id)arg2 withContentOrder:(id)arg3 forClientID:(short)arg4 ;
@end

