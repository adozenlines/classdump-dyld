/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufMMCS.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	unsigned tcpiCellRxbytes : 1;
	unsigned tcpiCellRxpackets : 1;
	unsigned tcpiCellTxbytes : 1;
	unsigned tcpiCellTxpackets : 1;
	unsigned tcpiRxbytes : 1;
	unsigned tcpiRxduplicatebytes : 1;
	unsigned tcpiRxoutoforderbytes : 1;
	unsigned tcpiRxpackets : 1;
	unsigned tcpiSndBw : 1;
	unsigned tcpiTxbytes : 1;
	unsigned tcpiTxpackets : 1;
	unsigned tcpiTxretransmitbytes : 1;
	unsigned tcpiTxunacked : 1;
	unsigned tcpiWifiRxbytes : 1;
	unsigned tcpiWifiRxpackets : 1;
	unsigned tcpiWifiTxbytes : 1;
	unsigned tcpiWifiTxpackets : 1;
	unsigned tcpiFlags : 1;
	unsigned tcpiLastOutif : 1;
	unsigned tcpiOptions : 1;
	unsigned tcpiRcvMss : 1;
	unsigned tcpiRcvNxt : 1;
	unsigned tcpiRcvSpace : 1;
	unsigned tcpiRcvWscale : 1;
	unsigned tcpiRto : 1;
	unsigned tcpiRttbest : 1;
	unsigned tcpiRttcur : 1;
	unsigned tcpiRttvar : 1;
	unsigned tcpiSndCwnd : 1;
	unsigned tcpiSndMss : 1;
	unsigned tcpiSndNxt : 1;
	unsigned tcpiSndSbbytes : 1;
	unsigned tcpiSndSsthresh : 1;
	unsigned tcpiSndWnd : 1;
	unsigned tcpiSndWscale : 1;
	unsigned tcpiSrtt : 1;
	unsigned tcpiState : 1;
	unsigned tcpiSynrexmits : 1;
	unsigned tcpiUnused1 : 1;
	unsigned tcpiUnused2 : 1;
} SCD_Struct_AW0;

typedef struct {
	unsigned duration : 1;
	unsigned responseReceivedDuration : 1;
	unsigned startTime : 1;
	unsigned errorCode : 1;
	unsigned httpStatus : 1;
	unsigned locatorPort : 1;
	unsigned requestSize : 1;
	unsigned responseSize : 1;
	unsigned cancelled : 1;
	unsigned connectionReused : 1;
	unsigned timedOut : 1;
	unsigned transactionComplete : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned duration : 1;
	unsigned startTime : 1;
	unsigned timestamp : 1;
	unsigned cancelledErrorCode : 1;
	unsigned chunksUploaded : 1;
	unsigned itemCount : 1;
	unsigned itemsAlreadyPresentCount : 1;
	unsigned itemsNotPresentCount : 1;
	unsigned itemsPartiallyPresentCount : 1;
	unsigned requestErrorCode : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned duration : 1;
	unsigned localBytes : 1;
	unsigned resumedBytes : 1;
	unsigned startTime : 1;
	unsigned timestamp : 1;
	unsigned cancelledErrorCode : 1;
	unsigned itemCount : 1;
	unsigned itemsNeedingChunks : 1;
	unsigned requestErrorCode : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned byteCount : 1;
	unsigned chunkCount : 1;
	unsigned duration : 1;
	unsigned startTime : 1;
	unsigned errorCode : 1;
	unsigned cancelled : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned code : 1;
} SCD_Struct_AW5;

