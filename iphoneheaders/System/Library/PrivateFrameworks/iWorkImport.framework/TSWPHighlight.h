/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDAnnotationHosting.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSKDocumentObject.h>

@protocol TSKModel;
@class TSKAnnotationAuthor, NSDate, TSDCommentStorage, NSString;

@interface TSWPHighlight : TSPObject <TSDAnnotationHosting, TSPCopying, TSKDocumentObject> {

	TSKAnnotationAuthor* author;
	NSDate* date;
	int annotationType;
	<TSKModel>* model;
	TSDCommentStorage* _commentStorage;

}

@property (nonatomic,retain) TSDCommentStorage * commentStorage;              //@synthesize commentStorage=_commentStorage - In the implementation block
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) <TSKModel> * model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
+(id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2 ;
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setStorage:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)loadFromArchive:(const HighlightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)commitText:(id)arg1 ;
-(id)commandForDeletingComment;
-(int)annotationDisplayStringType;
-(id)commentStorage;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 ;
-(BOOL)isCommentEmpty;
-(id)initWithContext:(id)arg1 commentStorage:(id)arg2 ;
-(void)setCommentStorage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)model;
-(void)setModel:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(int)annotationType;
@end
