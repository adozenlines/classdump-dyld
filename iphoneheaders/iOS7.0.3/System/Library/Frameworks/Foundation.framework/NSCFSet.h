/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCFSet : NSMutableSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned)_trueCount;
-(oneway void)release;
-(id)retain;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(void)minusSet:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)unionSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

