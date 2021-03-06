/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AirPlayReceiverSimulator, AirPlayControllerServer;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverUIPrivateRef _ui;
	AirPlayReceiverSimulator* _sim;
	int _cloudConnectivityNotifyToken;
	int _conferenceRoomModeNotifyToken;
	int _dacpErrorNotifyToken;
	int _dacpNotifyTokens[23];
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceIO;
	AirPlayControllerServer* _controllerServer;

}
@end

