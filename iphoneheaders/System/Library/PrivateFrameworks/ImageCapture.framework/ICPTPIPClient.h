/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPClient : NSObject {

	id _clientProperties;

}
-(id)init;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)registered;
-(void)setFdref:(CFFileDescriptorRef)arg1 ;
-(void)setRemotePort:(CFMessagePortRef)arg1 ;
-(CFFileDescriptorRef)fdref;
-(CFMessagePortRef)remotePort;
-(int)remoteAddress;
-(void)setRemoteAddress:(int)arg1 ;
-(int)serverFD;
-(void)setServerFD:(int)arg1 ;
@end
