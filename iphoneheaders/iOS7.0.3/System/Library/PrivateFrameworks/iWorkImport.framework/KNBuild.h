/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <CoreFoundation/NSCopying.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/KNInspectableAnimation.h>

@class TSDDrawableInfo, NSString, KNBuildAttributes, KNSlide, KNAnimationInfo, KNAnimationPluginMenu, NSArray, TSUColor, TSDEditableBezierPathSource, NSSet;

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation> {

	TSDDrawableInfo* mDrawable;
	NSString* mDelivery;
	KNBuildAttributes* mAttributes;
	KNSlide* mSlide;

}

@property (assign,nonatomic) KNSlide * slide; 
@property (nonatomic,retain) TSDDrawableInfo * drawable; 
@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,copy) KNBuildAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned directionType; 
@property (nonatomic,readonly) NSString * localizedEffect; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) unsigned firstChunkIndexOnSlide; 
@property (nonatomic,readonly) unsigned lastChunkIndexOnSlide; 
@property (nonatomic,readonly) unsigned chunkCount; 
@property (nonatomic,readonly) NSArray * chunks; 
@property (nonatomic,readonly) NSRange activeChunkRange; 
@property (nonatomic,readonly) unsigned startOffset; 
@property (nonatomic,readonly) unsigned endOffset; 
@property (nonatomic,copy) NSString * delivery; 
@property (nonatomic,readonly) BOOL downgradesDelivery; 
@property (nonatomic,readonly) NSString * deliveryWithoutDowngrading; 
@property (nonatomic,readonly) unsigned deliveryStyle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * buildImageTitle; 
@property (nonatomic,readonly) unsigned index; 
@property (nonatomic,readonly) unsigned indexOrderedByFirstChunk; 
@property (nonatomic,readonly) BOOL isFirst; 
@property (nonatomic,readonly) BOOL hasComplement; 
@property (nonatomic,readonly) BOOL isActionBuild; 
@property (nonatomic,readonly) BOOL isEmphasisBuild; 
@property (nonatomic,readonly) BOOL supportsDirection; 
@property (nonatomic,readonly) BOOL supportsDuration; 
@property (nonatomic,readonly) BOOL supportsBounce; 
@property (nonatomic,readonly) BOOL supportsDelivery; 
@property (nonatomic,readonly) BOOL supportsCustomTextDelivery; 
@property (nonatomic,readonly) int animationType; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) unsigned direction; 
@property (nonatomic,readonly) unsigned eventTrigger; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) unsigned actionAcceleration; 
@property (nonatomic,readonly) TSDEditableBezierPathSource * actionMotionPathSource; 
@property (nonatomic,readonly) float actionScale; 
@property (nonatomic,readonly) float actionRotationAngle; 
@property (nonatomic,readonly) unsigned actionRotationDirection; 
@property (nonatomic,readonly) float actionOpacity; 
@property (nonatomic,readonly) int customTextDelivery; 
@property (nonatomic,readonly) unsigned customDeliveryOption; 
@property (nonatomic,readonly) float custom3DChartRotation; 
@property (nonatomic,readonly) BOOL customBounce; 
@property (nonatomic,readonly) unsigned customRepeatCount; 
@property (nonatomic,readonly) BOOL customDecay; 
@property (nonatomic,readonly) unsigned customScale; 
@property (nonatomic,readonly) unsigned customJiggleIntensity; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
+(id)p_drawableFromInfo:(id)arg1 ;
+(BOOL)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2 ;
+(id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2 ;
+(id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2 ;
+(id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(BuildArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const BuildArchive*)arg1 unarchiver:(id)arg2 ;
-(id)animationFilter;
-(unsigned)deliveryStyle;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(unsigned)directionType;
-(unsigned)eventTrigger;
-(BOOL)isActionBuild;
-(NSRange)activeChunkRange;
-(BOOL)hasComplement;
-(BOOL)canEditAnimations;
-(id)inspectableAttributes;
-(void)setSlide:(id)arg1 ;
-(id)chunks;
-(unsigned)firstChunkIndexOnSlide;
-(unsigned)lastChunkIndexOnSlide;
-(id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4 ;
-(id)deliveriesLocalized:(BOOL)arg1 ;
-(void)setDelivery:(id)arg1 ;
-(unsigned)endChunkIndexFromEndOffset:(unsigned)arg1 ;
-(BOOL)downgradesDelivery;
-(id)p_chunkAtIndex:(unsigned)arg1 ;
-(id)buildImageTitle;
-(BOOL)hasComplementInBuilds:(id)arg1 ;
-(BOOL)supportsDirection;
-(BOOL)supportsDelivery;
-(BOOL)supportsDuration;
-(BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1 ;
-(int)customTextDelivery;
-(id)directionMenu;
-(id)localizedEffect;
-(id)deliveryWithoutDowngrading;
-(unsigned)indexOrderedByFirstChunk;
-(BOOL)isFirst;
-(BOOL)isEmphasisBuild;
-(BOOL)supportsBounce;
-(BOOL)supportsCustomTextDelivery;
-(unsigned)actionAcceleration;
-(id)actionMotionPathSource;
-(float)actionScale;
-(float)actionRotationAngle;
-(unsigned)actionRotationDirection;
-(float)actionOpacity;
-(float)custom3DChartRotation;
-(unsigned)customDeliveryOption;
-(BOOL)customBounce;
-(unsigned)customRepeatCount;
-(BOOL)customDecay;
-(unsigned)customScale;
-(unsigned)customJiggleIntensity;
-(id)createNewChunks;
-(int)animationType;
-(id)delivery;
-(void)dealloc;
-(id)description;
-(double)duration;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)direction;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(id)title;
-(double)delay;
-(id)color;
-(unsigned)index;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(id)drawable;
-(void)setDrawable:(id)arg1 ;
-(id)slide;
-(id)animationInfo;
-(id)effect;
-(unsigned)chunkCount;
@end

