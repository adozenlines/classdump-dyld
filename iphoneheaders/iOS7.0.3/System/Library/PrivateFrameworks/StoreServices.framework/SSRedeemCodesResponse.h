/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSDictionary, NSArray;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {

	NSDictionary* _errors;
	NSDictionary* _redeemedCodes;

}

@property (nonatomic,readonly) NSArray * failedCodes; 
@property (nonatomic,readonly) NSArray * redeemedCodes; 
-(void)dealloc;
-(id)dictionaryForCode:(id)arg1 ;
-(id)errorForCode:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)failedCodes;
-(id)redeemedCodes;
-(void)setFailedCodes:(id)arg1 ;
-(void)setRedeemedCodes:(id)arg1 ;
@end

