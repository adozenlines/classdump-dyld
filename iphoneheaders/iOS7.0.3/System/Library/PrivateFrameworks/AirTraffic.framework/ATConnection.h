/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ATConnectionDelegate;
@class ATXPCConnection, NSObject, NSMutableArray;

@interface ATConnection : NSObject {

	ATXPCConnection* _connection;
	NSObject<ATConnectionDelegate>* _delegate;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;

}

@property (nonatomic,retain) NSObject<ATConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)registerForStatus;
-(void)unregisterForStatus;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_connection;
-(void)clearSyncData;
-(void)_resetConnection;
-(void)_sendMessage:(id)arg1 info:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)_sendStatusRegistration;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)cancelSync;
-(void)dataMigrationFinished;
-(void)lowBatteryNotification;
-(void)keepATCAlive:(BOOL)arg1 ;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)_handleMessage:(id)arg1 ;
@end

