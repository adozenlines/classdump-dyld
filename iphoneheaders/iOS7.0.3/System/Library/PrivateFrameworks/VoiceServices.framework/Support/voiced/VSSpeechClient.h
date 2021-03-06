/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <voiced/voiced-Structs.h>
#import <VoiceServices/VSSpeechService.h>
#import <VoiceServices/VSSpeechServiceDelegate.h>

@class NSXPCConnection;

@interface VSSpeechClient : NSObject <VSSpeechService, VSSpeechServiceDelegate> {

	NSXPCConnection* _connection;

}
-(id)_delegate;
-(id)initWithConnection:(id)arg1 ;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestMark:(int)arg1 didStartForRange:(NSRange)arg2 ;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(oneway void)getAutoDownloadedVoiceAssets:(/*^block*/ id)arg1 ;
-(oneway void)startSpeechRequest:(id)arg1 ;
-(oneway void)continueSpeechRequest;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(oneway void)getSpeechIsActiveReply:(/*^block*/ id)arg1 ;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/ id)arg1 ;
-(oneway void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(int)arg2 gender:(int)arg3 custom:(BOOL)arg4 reply:(/*^block*/ id)arg5 ;
-(oneway void)pauseSpeechRequestAtMark:(int)arg1 ;
-(oneway void)stopSpeechRequestAtMark:(int)arg1 ;
-(oneway void)getCustomVoicesReply:(/*^block*/ id)arg1 ;
-(oneway void)getLocalCustomVoicesReply:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end

