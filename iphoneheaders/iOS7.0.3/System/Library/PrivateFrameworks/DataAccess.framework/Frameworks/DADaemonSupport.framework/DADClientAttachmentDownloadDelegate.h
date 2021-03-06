/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsAttachmentDownloadConsumer.h>

@class NSString;

@interface DADClientAttachmentDownloadDelegate : DADClientDelegate <DAEventsAttachmentDownloadConsumer> {

	NSString* _attachmentUUID;
	id _downloadID;

}
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)downloadFinishedError:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3 ;
-(void)beginDownload;
-(void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2 ;
@end

