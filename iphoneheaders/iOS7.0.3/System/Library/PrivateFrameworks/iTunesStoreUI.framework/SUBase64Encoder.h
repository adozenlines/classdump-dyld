/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUFilteringDataConsumer.h>

@interface SUBase64Encoder : SUFilteringDataConsumer {

	unsigned long _left;
	unsigned char _leftovers[3];
	unsigned long _line;
	unsigned long _lineBreakLength;
	BOOL _padChar;
	const char* _table;

}

@property (assign,nonatomic) BOOL allowSlash; 
@property (assign,nonatomic) unsigned long lineBreakLength;              //@synthesize lineBreakLength=_lineBreakLength - In the implementation block
@property (assign,nonatomic) BOOL padChar;                               //@synthesize padChar=_padChar - In the implementation block
+(int)maxConsumeLengthForReadLength:(int)arg1 ;
+(long long)outputLengthForInputLength:(long long)arg1 ;
-(void)finish;
-(void)setAllowSlash:(BOOL)arg1 ;
-(void)setPadChar:(BOOL)arg1 ;
-(int)consumeData:(id)arg1 ;
-(id)initWithDataConsumer:(id)arg1 ;
-(unsigned)minimumConsumeLength;
-(void)setLineBreakLength:(unsigned long)arg1 ;
-(BOOL)allowSlash;
-(void)setStandardLineBreakLength;
-(unsigned long)lineBreakLength;
-(BOOL)padChar;
@end
