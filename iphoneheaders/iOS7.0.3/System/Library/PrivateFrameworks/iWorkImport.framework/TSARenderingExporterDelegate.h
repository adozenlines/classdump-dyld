/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSARenderingExporterDelegate
@optional
-(int)renderingQuality;

@required
-(float)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1;
-(void)releaseCGContext:(CGContextRef)arg1;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(void)teardown;
-(void)setup;
@end

