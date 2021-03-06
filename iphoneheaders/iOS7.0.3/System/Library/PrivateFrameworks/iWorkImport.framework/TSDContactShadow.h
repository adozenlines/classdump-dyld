/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShadow.h>

@interface TSDContactShadow : TSDShadow {

	float mHeight;

}

@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) float perspective; 
+(id)instanceWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
+(id)contactShadowWithOffset:(float)arg1 height:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(void)saveToArchive:(ShadowArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)initWithOffset:(float)arg1 height:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(float)clampOffset:(float)arg1 ;
-(float)clampRadius:(float)arg1 ;
-(id)newShadowClampedForSwatches;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(CGImageRef)newShadowImageFromContext:(CGContextRef)arg1 withSize:(CGSize)arg2 bounds:(CGRect)arg3 unflipped:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)height;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(float)perspective;
-(unsigned)shadowType;
@end

