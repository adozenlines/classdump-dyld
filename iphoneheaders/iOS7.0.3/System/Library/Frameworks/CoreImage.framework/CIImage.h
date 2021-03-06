/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface CIImage : NSObject <NSCoding, NSCopying> {

	void* _priv;

}
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfFile:(id)arg1 options:(id)arg2 ;
+(id)imageWithInternalRepresentation:(void*)arg1 ;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithColor:(id)arg1 ;
+(id)noiseImage;
+(id)noiseImagePadded;
+(id)emptyImage;
+(id)imageWithData:(id)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(void*)_internalRepresentation;
-(id)imageByApplyingTransform:(CGAffineTransform)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)_initNaiveWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithColorR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4 ;
-(CGAffineTransform)imageTransformForOrientation:(int)arg1 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 index:(unsigned long)arg2 options:(id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)imageByCroppingToRect:(CGRect)arg1 ;
-(id)_imageByPremultiplying;
-(id)_imageByUnpremultiplying;
-(id)_imageByApplyingGamma:(double)arg1 ;
-(id)_imageByApplyingBlur:(double)arg1 ;
-(id)filteredImage:(id)arg1 keysAndValues:(id)arg2 ;
-(CGRect)regionOfInterestForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4 ;
-(id)_scaleImageToMaxDimension:(unsigned)arg1 ;
-(id)autoAdjustmentFiltersWithOptions:(id)arg1 ;
-(id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2 ;
-(id)_dictForFeature:(id)arg1 scale:(float)arg2 imageHeight:(float)arg3 ;
-(id)autoAdjustmentFilters;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGRect)extent;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithColor:(id)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)properties;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)imageByApplyingOrientation:(int)arg1 ;
@end

