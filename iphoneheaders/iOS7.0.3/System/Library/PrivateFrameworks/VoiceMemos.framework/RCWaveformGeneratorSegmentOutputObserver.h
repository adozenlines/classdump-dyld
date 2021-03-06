/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol RCWaveformGeneratorSegmentOutputObserver <NSObject>
@optional
-(void)waveformGeneratorWillBeginLoading:(id)arg1;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;

@required
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
@end

