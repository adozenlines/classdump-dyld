/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/filecoordinationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgressSubscriber.h>

@protocol NSProgressSubscriber;
@class NSString, NSFileAccessNode;

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber> {

	<NSProgressSubscriber>* _forwarder;
	id _subscriberID;
	NSString* _lowerCaseAppBundleID;
	NSString* _lowerCaseCategoryName;
	NSFileAccessNode* _itemLocation;

}

@property (copy) NSString * category;                            //@synthesize lowerCaseCategoryName=_lowerCaseCategoryName - In the implementation block
@property (assign) NSFileAccessNode * itemLocation; 
-(id)initWithForwarder:(id)arg1 subscriberID:(id)arg2 appBundleID:(id)arg3 ;
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4 ;
-(void)dealloc;
-(id)description;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)appBundleID;
@end

