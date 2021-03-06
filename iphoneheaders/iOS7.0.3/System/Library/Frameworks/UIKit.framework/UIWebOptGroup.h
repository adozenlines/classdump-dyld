/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebSelectedItemPrivate;
@class NSArray;

@interface UIWebOptGroup : NSObject {

	<UIWebSelectedItemPrivate>* _group;
	NSArray* _options;
	int _offset;

}

@property (nonatomic,readonly) int offset;                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) <UIWebSelectedItemPrivate> * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * options;                               //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(int)offset;
-(void)setGroup:(id)arg1 ;
-(void)setOptions:(id)arg1 ;
-(id)initWithGroup:(id)arg1 itemOffset:(int)arg2 ;
-(id)group;
-(id)options;
@end

