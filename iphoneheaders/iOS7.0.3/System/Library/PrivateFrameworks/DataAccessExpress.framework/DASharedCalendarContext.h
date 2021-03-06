/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DASharedCalendarContext : NSObject {

	NSString* _calendarID;
	NSString* _accountID;
	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _completionBlock;
	BOOL _shouldSyncCalendar;

}

@property (assign,nonatomic) BOOL shouldSyncCalendar;              //@synthesize shouldSyncCalendar=_shouldSyncCalendar - In the implementation block
-(void)dealloc;
-(void)finishedWithError:(id)arg1 ;
-(BOOL)shouldSyncCalendar;
-(id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setShouldSyncCalendar:(BOOL)arg1 ;
@end

