/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DGLMixinFramebuffer : TSCH3DGLFramebuffer {

	TSCH3DGLFramebuffer* mOriginal;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * original; 
-(void)setOriginal:(id)arg1 ;
-(id)original;
-(BOOL)isTexturable;
-(void)bindColorbufferInSession:(id)arg1 ;
-(const FramebufferAttributes*)framebufferAttributes;
-(void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2 ;
-(void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(void)wipe:(const tvec4<float>*)arg1 ;
-(void)discardDepthBuffer;
-(void)disableSamplingInSession:(id)arg1 ;
-(void)clean;
-(BOOL)validForSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(void)destroyResourcesInSession:(id)arg1 ;
-(void)discardColorBuffer;
-(unsigned)estimatedMemroyInBytes;
-(id)initWithContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 ;
-(void)setDepthFunction:(int)arg1 ;
-(BOOL)isProtectedInSession:(id)arg1 ;
-(id)GLHandleForSession:(id)arg1 ;
-(void)discardBuffers;
-(id)output;
-(void)dealloc;
-(tvec2<int>)size;
-(id)description;
-(unsigned)type;
-(id)context;
-(void)clear:(unsigned)arg1 ;
-(void)setClearDepth:(float)arg1 ;
-(void)setClearColor:(const tvec4<float>*)arg1 ;
-(void)setDepthMask:(unsigned char)arg1 ;
-(void)setColorMask:(const tvec4<bool>*)arg1 ;
@end

