/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>

@class TVOutManager;

@interface TVOutController : PSListController {

	TVOutManager* _tvOutManager;

}
-(void)handleTVOutChange;
-(void)writeValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(id)isWidescreen:(id)arg1 ;
-(void)setWidescreen:(id)arg1 specifier:(id)arg2 ;
-(id)tvSignal:(id)arg1 ;
-(void)setTVSignal:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)specifiers;
@end

