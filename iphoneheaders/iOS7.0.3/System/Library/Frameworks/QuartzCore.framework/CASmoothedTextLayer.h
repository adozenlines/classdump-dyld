/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CATextLayer.h>

@interface CASmoothedTextLayer : CATextLayer

@property (assign) unsigned fontSmoothingStyle; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(unsigned)fontSmoothingStyle;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(void)setFontSmoothingStyle:(unsigned)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
@end
