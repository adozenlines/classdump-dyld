/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CPLRUDictionaryNode : NSObject {

	id _key;
	id _object;
	CPLRUDictionaryNode* next;
	CPLRUDictionaryNode* prev;

}

@property (nonatomic,readonly) id key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)key;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
@end
