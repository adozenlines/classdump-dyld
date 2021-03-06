/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObjectRelation.h>

@class NSMutableSet, NSSet;

@interface EKObjectToManyRelation : EKObjectRelation {

	NSMutableSet* _loadedItems;
	NSMutableSet* _effectiveItems;
	NSMutableSet* _addedItems;
	NSMutableSet* _removedItems;

}

@property (nonatomic,copy) NSSet * items; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) BOOL itemsWereAdded; 
@property (nonatomic,readonly) BOOL itemsWereRemoved; 
@property (nonatomic,retain) NSMutableSet * loadedItems;                 //@synthesize loadedItems=_loadedItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * effectiveItems;              //@synthesize effectiveItems=_effectiveItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedItems;                  //@synthesize addedItems=_addedItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedItems;                //@synthesize removedItems=_removedItems - In the implementation block
-(void)didCommit;
-(BOOL)validate:(id*)arg1 ;
-(void)updatePersistentObject;
-(BOOL)itemsWereAdded;
-(BOOL)itemsWereRemoved;
-(id)committedValue;
-(BOOL)isWeak;
-(id)_effectiveItems;
-(void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(id)_loadedItems;
-(void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)_forgetRelatedObject:(id)arg1 ;
-(id)loadedItems;
-(void)setLoadedItems:(id)arg1 ;
-(id)effectiveItems;
-(void)setEffectiveItems:(id)arg1 ;
-(id)addedItems;
-(void)setAddedItems:(id)arg1 ;
-(id)removedItems;
-(void)setRemovedItems:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)reset;
-(void)refresh;
-(void)rollback;
@end

