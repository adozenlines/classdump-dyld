/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface ABTCC : NSObject {

	BOOL _calledExternalChangeCallbacks;
	int _simulateType;
	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	unsigned _simulateAccessPromptDelay;

}
+(id)sharedInstance;
-(void)callExternalChangeCallbacks:(BOOL)arg1 ;
-(id)_simulateQueue;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/ id)arg1 ;
-(void)simulate:(int)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
@end
