/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSeriesSceneObject.h>

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject
+(float)chartSeriesDepth;
+(float)chartSeriesDepthOffsetFactor;
+(id)chartSeriesType;
+(MeshData)createMeshForSeries:(id)arg1 ;
-(BOOL)alwaysRenderForElementBlendAnimationClip;
-(BOOL)shouldRenderSeries:(id)arg1 ;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(const tvec3<float>*)arg4 ;
-(EdgeDetectionParameters)edgeDetectionParameters;
@end

