/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleIDAuthAgent/AppleIDAuthAgent-Structs.h>
#import <AppleIDAuthAgent/XMLRPCEncoder.h>

@class NSString, NSArray;

@interface XMLRPCDefaultEncoder : NSObject <XMLRPCEncoder> {

	NSString* myMethod;
	NSArray* myParameters;

}
-(id)encodeString:(id)arg1 omitTag:(BOOL)arg2 ;
-(id)encode;
-(void)setMethod:(id)arg1 withParameters:(id)arg2 ;
-(id)encodeArray:(id)arg1 ;
-(id)encodeDictionary:(id)arg1 ;
-(id)encodeBoolean:(CFBooleanRef)arg1 ;
-(id)encodeNumber:(id)arg1 ;
-(id)encodeDate:(id)arg1 ;
-(id)encodeData:(id)arg1 ;
-(id)valueTag:(id)arg1 value:(id)arg2 ;
-(id)replaceTarget:(id)arg1 withValue:(id)arg2 inString:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)method;
-(id)parameters;
-(id)encodeObject:(id)arg1 ;
@end

