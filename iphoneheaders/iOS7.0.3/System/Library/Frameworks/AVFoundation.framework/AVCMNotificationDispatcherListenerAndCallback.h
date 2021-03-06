/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/ void* _callback;

}

@property (nonatomic,readonly) id listener; 
@property (nonatomic,readonly) /*function pointer*/ void* callback;              //@synthesize callback=_callback - In the implementation block
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/ void*)arg2 ;
-(/*function pointer*/ void*)callback;
-(void)dealloc;
-(id)listener;
@end

