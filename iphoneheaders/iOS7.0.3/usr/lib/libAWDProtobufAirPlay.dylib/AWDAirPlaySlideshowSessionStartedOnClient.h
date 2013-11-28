/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufAirPlay.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufAirPlay.dylib/libAWDProtobufAirPlay.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDAirPlaySlideshowSessionStartedOnClient : PBCodable {

	unsigned long long _timestamp;
	unsigned _repeat;
	NSString* _sessionUUID;
	unsigned _slideMs;
	int _status;
	NSString* _theme;
	NSString* _transition;
	SCD_Struct_AW0 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasTheme; 
@property (nonatomic,retain) NSString * theme;                          //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL hasTransition; 
@property (nonatomic,retain) NSString * transition;                     //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeat; 
@property (assign,nonatomic) unsigned repeat;                           //@synthesize repeat=_repeat - In the implementation block
@property (assign,nonatomic) BOOL hasSlideMs; 
@property (assign,nonatomic) unsigned slideMs;                          //@synthesize slideMs=_slideMs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setSessionUUID:(id)arg1 ;
-(void)setRepeat:(unsigned)arg1 ;
-(void)setSlideMs:(unsigned)arg1 ;
-(id)theme;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTheme:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionUUID;
-(id)sessionUUID;
-(BOOL)hasTheme;
-(BOOL)hasTransition;
-(BOOL)hasRepeat;
-(unsigned)repeat;
-(BOOL)hasSlideMs;
-(unsigned)slideMs;
-(void)setHasRepeat:(BOOL)arg1 ;
-(void)setHasSlideMs:(BOOL)arg1 ;
@end
