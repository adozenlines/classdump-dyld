/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {

	ISPersonalizeOffersRequest* _request;
	SSPersonalizeOffersResponse* _response;

}

@property (readonly) ISPersonalizeOffersRequest * personalizeOffersReqeust; 
@property (readonly) SSPersonalizeOffersResponse * response; 
-(void)dealloc;
-(void)run;
-(id)response;
-(BOOL)_runWithURLDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3 ;
-(void)_addDictionaryToResponse:(id)arg1 ;
-(id)personalizeOffersReqeust;
-(id)initWithPersonalizeOffersRequest:(id)arg1 ;
@end

