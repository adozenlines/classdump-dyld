/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>
#import <iWorkImport/TSUStreamReadChannel.h>
#import <iWorkImport/TSUStreamWriteChannel.h>
#import <iWorkImport/TSURandomWriteChannel.h>

@protocol OS_dispatch_io;
@class NSObject;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {

	NSObject<OS_dispatch_io>* _channel;
	BOOL _isClosed;

}
-(void)setLowWater:(unsigned long)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 queue:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(id)initForReadingURL:(id)arg1 ;
-(id)initForStreamWritingURL:(id)arg1 ;
-(void)writeData:(id)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(id)initForRandomWritingURL:(id)arg1 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)addBarrier:(/*^block*/ id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(id)initWithType:(unsigned long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 ;
-(id)initWithType:(unsigned long)arg1 channel:(id)arg2 ;
-(id)createRandomAccessChannel;
-(void)close;
-(void).cxx_destruct;
@end

