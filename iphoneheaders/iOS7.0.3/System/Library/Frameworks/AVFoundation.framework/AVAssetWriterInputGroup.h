/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInputGroupInternal, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {

	AVAssetWriterInputGroupInternal* _internal;

}

@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) AVAssetWriterInput * defaultInput; 
+(id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(id)defaultInput;
-(id)initWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)options;
-(id)inputs;
-(void)finalize;
@end

