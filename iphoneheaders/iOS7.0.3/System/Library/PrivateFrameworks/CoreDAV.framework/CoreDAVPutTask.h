/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (assign,nonatomic,@dynamic) <CoreDAVTaskDelegate> * delegate; 
@property (retain) NSString * nextETag;                                              //@synthesize nextETag=_nextETag - In the implementation block
-(void)dealloc;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)nextETag;
-(void)setNextETag:(id)arg1 ;
-(id)httpMethod;
@end
