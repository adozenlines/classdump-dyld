/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class NSString, NSData;

@interface MFPOPMessage : MFMailMessage {

	int _messageNumber;
	NSString* _messageID;
	NSData* _messageData;
	BOOL _messageDataIsComplete;
	unsigned _size;
	NSString* _accountURL;

}
-(void)dealloc;
-(void)setMessageID:(id)arg1 ;
-(void)setMessageNumber:(int)arg1 ;
-(void)setMessageData:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)setAccountURL:(id)arg1 ;
-(int)messageNumber;
-(unsigned)messageSize;
-(id)messageData;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)messageID;
-(id)originalMailboxURL;
-(void)setMessageSize:(unsigned)arg1 ;
-(id)remoteMailboxURL;
-(void)setMessageData:(id)arg1 ;
-(id)headers;
@end

