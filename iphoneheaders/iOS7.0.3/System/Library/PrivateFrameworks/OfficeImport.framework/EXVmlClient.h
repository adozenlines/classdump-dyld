/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAVClient.h>

@interface EXVmlClient : NSObject <OAVClient>
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readAnchor:(xmlNode*)arg1 to:(id)arg2 ;
+(id)readComment:(xmlNode*)arg1 to:(id)arg2 ;
+(id)edTextBoxForVmlTextInShape:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
@end

