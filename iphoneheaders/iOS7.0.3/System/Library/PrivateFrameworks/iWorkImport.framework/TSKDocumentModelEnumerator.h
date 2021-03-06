/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol TSKModel;
@class NSMutableArray;

@interface TSKDocumentModelEnumerator : NSEnumerator {

	BOOL _stop;
	BOOL _filterBeforeAddingChildren;
	<TSKModel>* _root;
	NSMutableArray* _enumeratorStack;
	/*^block*/ id _filter;

}

@property (assign,nonatomic) BOOL filterBeforeAddingChildren;               //@synthesize filterBeforeAddingChildren=_filterBeforeAddingChildren - In the implementation block
@property (nonatomic,retain) <TSKModel> * root;                             //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) NSMutableArray * enumeratorStack;              //@synthesize enumeratorStack=_enumeratorStack - In the implementation block
@property (nonatomic,copy) id filter;                                       //@synthesize filter=_filter - In the implementation block
-(void)enumerateUsingBlock:(/*^block*/ id)arg1 ;
-(id)initWithRootModelObject:(id)arg1 filter:(/*^block*/ id)arg2 ;
-(void)setFilterBeforeAddingChildren:(BOOL)arg1 ;
-(void)setEnumeratorStack:(id)arg1 ;
-(id)enumeratorStack;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/ id)arg2 ;
-(BOOL)filterBeforeAddingChildren;
-(void)enumerateReferencedStylesUsingBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(void)setFilter:(/*^block*/ id)arg1 ;
-(void)setRoot:(id)arg1 ;
-(id)root;
-(/*^block*/ id)filter;
@end

