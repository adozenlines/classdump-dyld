#import <locationd/CLMescalSigner.h>
#import <locationd/CLTimeManagerAdapter.h>
#import <locationd/CLTelephonyServiceAdapter.h>
#import <locationd/CLWifiServiceAdapter.h>
#import <locationd/CLMotionStateAdapter.h>
#import <locationd/CLCarrierSettingsAdapter.h>
#import <locationd/CLDaemonStatusInternal.h>
#import <locationd/CLDaemonStatusAdapter.h>
#import <locationd/CLAccessoryLocationProviderAdapter.h>
#import <locationd/CLAccessoryObserver.h>
#import <locationd/CLNmeaLocationProviderAdapter.h>
#import <locationd/CLSkyhookLocationProviderAdapter.h>
#import <locationd/CLLocationControllerAdapter.h>
#import <locationd/CLLocationProviderAdapter.h>
#import <locationd/CLCompassDatabaseAdapter.h>
#import <locationd/CLNetworkLocationProviderAdapter.h>
#import <locationd/CLLocationHarvesterAdapter.h>
#import <locationd/BatchData.h>
#import <locationd/ALSLocationDelegate.h>
#import <locationd/CLWifiLocationProviderAdapter.h>
#import <locationd/CLFilteredLocationControllerAdapter.h>
#import <locationd/CLTimeZoneManagerAdapter.h>
#import <locationd/CRPassLocation.h>
#import <locationd/CLOperatorSettingsAdapter.h>
#import <locationd/CRCellTowerLocation.h>
#import <locationd/CRCellWifiCollectionRequest.h>
#import <locationd/CRCellWifiCollectionResponse.h>
#import <locationd/CRLocation.h>
#import <locationd/CRLocationCollectionRequest.h>
#import <locationd/CRLocationCollectionResponse.h>
#import <locationd/CRMeta.h>
#import <locationd/CRWifiAPLocation.h>
#import <locationd/CRCellWifiCollectionDelegate.h>
#import <locationd/CRLocationCollectionDelegate.h>
#import <locationd/CRAppCollectionDelegate.h>
#import <locationd/CRPassCollectionDelegate.h>
#import <locationd/CLCandy.h>
#import <locationd/CLFenceManagerAdapter.h>
#import <locationd/CLClientManagerAdapter.h>
#import <locationd/CLGpsControllerAdapter.h>
#import <locationd/CLQmiDmsManagerAdapter.h>
#import <locationd/CLQmiPdsManagerAdapter.h>
#import <locationd/CRCdmaCellTowerLocation.h>
#import <locationd/CLPersistentTimerInternal.h>
#import <locationd/CLSimulatedLocationProviderAdapter.h>
#import <locationd/CLGyroCalibrationDatabaseAdapter.h>
#import <locationd/CLGeomagneticModelProviderAdapter.h>
#import <locationd/CLCompassDaemonClientNotifierAdapter.h>
#import <locationd/CLATCSDispatchWrapperAdapter.h>
#import <locationd/CLSimulationControllerAdapter.h>
#import <locationd/CLSignificantChangeManagerAdapter.h>
#import <locationd/CLApplicationLifecycleManagerAdapter.h>
#import <locationd/ALSScdmaCellTower.h>
#import <locationd/CLBluetoothServiceAdapter.h>
#import <locationd/CRPassCollectionResponse.h>
#import <locationd/CLUnifiedCellLocationProviderAdapter.h>
#import <locationd/CLDataProtectionManagerAdapter.h>
#import <locationd/CLStatusBarIconManagerAdapter.h>
#import <locationd/ALSNearbyRequest.h>
#import <locationd/CLALSRequester.h>
#import <locationd/ALSLocationRequest.h>
#import <locationd/ALSCdmaCellTower.h>
#import <locationd/ALSCellTower.h>
#import <locationd/ALSLteCellTower.h>
#import <locationd/ALSWirelessAP.h>
#import <locationd/CRLteCellTowerLocation.h>
#import <locationd/ALSNearbyResponse.h>
#import <locationd/ALSCdmaEvdoTower.h>
#import <locationd/ALSLocationResponse.h>
#import <locationd/ALSLocation.h>
#import <locationd/CLAutopauseProviderAdapter.h>
#import <locationd/CLTilesManagerAdapter.h>
#import <locationd/CLBackgroundTaskAgent.h>
#import <locationd/CLBTAAdapter.h>
#import <locationd/CLOdometerAlarm.h>
#import <locationd/CLOdometerAlarmManager.h>
#import <locationd/CLRoutineMonitor.h>
#import <locationd/CLCustomAuthPBRequester.h>
#import <locationd/CLPCPBRequester.h>
#import <locationd/CLURLConnection.h>
#import <locationd/CLURLConnectionSession.h>
#import <locationd/CLMapDataSource.h>
#import <locationd/CLMapDataCacheHint.h>
#import <locationd/CLAppMonitorAdapter.h>
#import <locationd/CRAppCollectionRequest.h>
#import <locationd/CRAppCollectionResponse.h>
#import <locationd/CRAppLocation.h>
#import <locationd/CLPushServiceState.h>
#import <locationd/CRLteCellNeighbor.h>
#import <locationd/CRCdmaCellNeighbor.h>
#import <locationd/CRCellNeighbor.h>
#import <locationd/CLDeviceMotionProperties.h>
#import <locationd/CLMapDataMultiPointFeature.h>
#import <locationd/CLWPBridge.h>
#import <locationd/CLWPScanBridge.h>
#import <locationd/CLWPZone.h>
#import <locationd/CLWPZoneBridge.h>
#import <locationd/CLPeripheralManagerDelegate.h>
#import <locationd/CLBTLEFenceManagerAdapter.h>
#import <locationd/CLGpsAssistantAdapter.h>
#import <locationd/CLDispatchTimerScheduler.h>
#import <locationd/CLDispatchSilo.h>
#import <locationd/CLIntersiloInterfaceSelectorInfo.h>
#import <locationd/CLIntersiloInterface.h>
#import <locationd/CLIntersiloProxy.h>
#import <locationd/CLIntersiloService.h>
#import <locationd/CLServiceVendorHeartbeatRecord.h>
#import <locationd/CLServiceVendor.h>
#import <locationd/CLSilo.h>
#import <locationd/CLTimer.h>
#import <locationd/CLNotifierClientAdapter.h>
#import <locationd/CLNotifierData.h>
#import <locationd/CRSCdmaCellTowerLocation.h>
#import <locationd/CLNotifierServiceAdapter.h>
#import <locationd/CLBTLEBeaconProviderAdapter.h>
#import <locationd/CMActivityAlarm.h>
#import <locationd/CLDarwinNotifierAdapter.h>
#import <locationd/CRPassCollectionRequest.h>
#import <locationd/CLBeaconFenceAuthorizationManagerAdapter.h>
#import <locationd/CLBTLERangeManagerAdapter.h>
#import <locationd/CLTurnStateAdapter.h>
#import <locationd/CLClientAuthorizationCache.h>
#import <locationd/CLOnBodyNotifierAdapter.h>
#import <locationd/CLStepCountNotifierAdapter.h>