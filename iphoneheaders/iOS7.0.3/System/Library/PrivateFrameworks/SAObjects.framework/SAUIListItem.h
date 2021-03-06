/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIListItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) <SAAceSerializable> * object; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * selectionText; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * title; 
+(id)listItem;
+(id)listItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(id)encodedClassName;
-(id)selectionResponse;
-(void)setSelectionResponse:(id)arg1 ;
-(id)selectionText;
-(void)setSelectionText:(id)arg1 ;
-(id)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(id)arg1 ;
@end

