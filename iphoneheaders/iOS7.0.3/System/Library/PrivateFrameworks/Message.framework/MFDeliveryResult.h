/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MFDeliveryResult : NSObject {

	int _status;
	double _duration;
	unsigned _bytesSent;
	BOOL _isWifi;

}

@property (assign,nonatomic) int status;                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL isWifi;                     //@synthesize isWifi=_isWifi - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithStatus:(int)arg1 ;
-(void)setBytesSent:(unsigned)arg1 ;
-(unsigned)bytesSent;
-(BOOL)isWifi;
-(void)setIsWifi:(BOOL)arg1 ;
@end

