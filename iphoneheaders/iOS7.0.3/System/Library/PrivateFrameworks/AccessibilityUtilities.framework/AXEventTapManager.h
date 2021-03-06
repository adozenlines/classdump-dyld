/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject {

	NSMutableArray* _eventTaps;
	NSMutableArray* _addedEventTapPairs;
	NSMutableSet* _removedEventTapIdentifiers;
	BOOL _isEnumeratingEventTaps;
	BOOL _shouldReorderEventTaps;
	/*^block*/ id _installationGSCallback;
	/*^block*/ id _installationHIDCallback;
	NSRecursiveLock* _eventTapLock;
	/*^block*/ id _installationEventRepPost;

}

@property (nonatomic,copy) id installationGSCallback;                //@synthesize installationGSCallback=_installationGSCallback - In the implementation block
@property (nonatomic,copy) id installationHIDCallback;               //@synthesize installationHIDCallback=_installationHIDCallback - In the implementation block
@property (nonatomic,copy) id installationEventRepPost;              //@synthesize installationEventRepPost=_installationEventRepPost - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setInstallationGSCallback:(/*^block*/ id)arg1 ;
-(void)setInstallationHIDCallback:(/*^block*/ id)arg1 ;
-(void)setInstallationEventRepPost:(/*^block*/ id)arg1 ;
-(void)_enumerateEventTapPairsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_reorderEventTaps;
-(void)_setGSEventTapCallback:(void*)arg1 ;
-(void)_setHIDEventTapCallback:(void*)arg1 ;
-(id)_copyCurrentEventTapPairs;
-(void)_installEventTap:(id)arg1 ;
-(void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4 ;
-(BOOL)_processHIDEvent:(IOHIDEventRef)arg1 taskPort:(unsigned)arg2 bundleId:(id)arg3 ;
-(BOOL)_processGSEvent:(SCD_Struct_AX2*)arg1 ;
-(void)setEventTapPriority:(id)arg1 priority:(int)arg2 ;
-(id)installEventTap:(/*^block*/ id)arg1 identifier:(id)arg2 ;
-(void)removeEventTap:(id)arg1 ;
-(/*^block*/ id)installationGSCallback;
-(/*^block*/ id)installationHIDCallback;
-(/*^block*/ id)installationEventRepPost;
@end

