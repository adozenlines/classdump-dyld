/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface VGLResourceFactory : NSObject {

	recursive_mutex _mutex;
	NSMutableSet* _activeResources;
	NSMutableArray* _unusedResources;
	NSMutableDictionary* _programFactories;
	NSMutableDictionary* _shaderCache;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(id)vertexShaderWithName:(id)arg1 ;
-(id)fragmentShaderWithName:(id)arg1 ;
-(id)newResourceWithType:(int)arg1 count:(int)arg2 ;
-(void)deleteUnusedResources;
-(id)programFactoryWithCohort:(id)arg1 ;
-(void)moveUnusedResourceImpl:(id)arg1 ;
-(void)deleteActiveResources;
-(void).cxx_destruct;
@end

