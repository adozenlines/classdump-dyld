/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVDeleteTaskDelegate.h>
#import <CoreDAV/CoreDAVPutTaskDelegate.h>
#import <CoreDAV/CoreDAVGetTaskDelegate.h>

@class NSURL, NSString, NSMutableArray, NSDictionary, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {

	int _phase;
	NSURL* _folderURL;
	NSString* _previousCTag;
	NSString* _nextCTag;
	BOOL _ensureUpdatedCTag;
	BOOL _useSyncCollection;
	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	NSMutableArray* _actions;
	void* _context;
	unsigned _multiGetBatchSize;
	NSMutableArray* _unsubmittedTasks;
	unsigned _maxIndependentTasks;
	NSURL* _addMemberURL;
	BOOL _useMultiGet;
	NSDictionary* _bulkRequests;
	NSString* _bulkChangeCheckCTag;
	NSMutableSet* _syncReportDeletedURLs;
	NSMutableDictionary* _urlToETag;
	Class _appSpecificDataItemClass;
	BOOL _syncItemOrder;
	NSMutableArray* _localItemURLOrder;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	BOOL _actionsOnly;

}

@property (readonly) NSURL * folderURL;                                                     //@synthesize folderURL=_folderURL - In the implementation block
@property (retain) NSString * previousCTag;                                                 //@synthesize previousCTag=_previousCTag - In the implementation block
@property (retain) NSString * previousSyncToken;                                            //@synthesize previousSyncToken=_previousSyncToken - In the implementation block
@property (assign) BOOL useSyncCollection;                                                  //@synthesize useSyncCollection=_useSyncCollection - In the implementation block
@property (readonly) void* context;                                                         //@synthesize context=_context - In the implementation block
@property (assign) unsigned multiGetBatchSize;                                              //@synthesize multiGetBatchSize=_multiGetBatchSize - In the implementation block
@property (assign) BOOL useMultiGet;                                                        //@synthesize useMultiGet=_useMultiGet - In the implementation block
@property (assign,nonatomic,@dynamic) <CoreDAVLocalDBInfoProvider> * delegate; 
@property (assign) unsigned maxIndependentTasks;                                            //@synthesize maxIndependentTasks=_maxIndependentTasks - In the implementation block
@property (retain) NSURL * addMemberURL;                                                    //@synthesize addMemberURL=_addMemberURL - In the implementation block
@property (retain) NSDictionary * bulkRequests;                                             //@synthesize bulkRequests=_bulkRequests - In the implementation block
@property (retain) NSString * bulkChangeCheckCTag;                                          //@synthesize bulkChangeCheckCTag=_bulkChangeCheckCTag - In the implementation block
@property (assign) BOOL actionsOnly;                                                        //@synthesize actionsOnly=_actionsOnly - In the implementation block
@property (readonly) NSArray * localItemURLOrder;                                           //@synthesize localItemURLOrder=_localItemURLOrder - In the implementation block
@property (assign) BOOL ensureUpdatedCTag;                                                  //@synthesize ensureUpdatedCTag=_ensureUpdatedCTag - In the implementation block
@property (retain) NSString * nextCTag;                                                     //@synthesize nextCTag=_nextCTag - In the implementation block
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void*)context;
-(void)setAddMemberURL:(id)arg1 ;
-(id)addMemberURL;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)bailWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_tearDownAllUnsubmittedTasks;
-(void)cancelTaskGroup;
-(unsigned)_submitTasks;
-(void)_getETags;
-(id)dataContentType;
-(id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2 ;
-(void)_getCTag;
-(Class)bulkChangeTaskClass;
-(void)_pushActions;
-(void)_sendNextBatch;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)arg1 ;
-(void)_getDataPayloads;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(void)_configureMultiGet:(id)arg1 ;
-(void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4 ;
-(BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(void)deleteResourceURLs:(id)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(void)_bulkChange;
-(BOOL)isWhitelistedError:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPutTask:(id)arg1 ;
-(void)applyAdditionalPropertiesFromPostTask:(id)arg1 ;
-(void)setPreviousSyncToken:(id)arg1 ;
-(void)setUseSyncCollection:(BOOL)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
-(void)_getOrder;
-(id)nextCTag;
-(void)setBulkChangeCheckCTag:(id)arg1 ;
-(void)_postTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setNextCTag:(id)arg1 ;
-(BOOL)shouldFetchMoreETags;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(void*)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 ;
-(void)syncAway;
-(unsigned)multiGetBatchSize;
-(void)setMultiGetBatchSize:(unsigned)arg1 ;
-(unsigned)maxIndependentTasks;
-(void)setMaxIndependentTasks:(unsigned)arg1 ;
-(BOOL)useMultiGet;
-(void)setUseMultiGet:(BOOL)arg1 ;
-(id)folderURL;
-(id)previousCTag;
-(void)setPreviousCTag:(id)arg1 ;
-(BOOL)ensureUpdatedCTag;
-(void)setEnsureUpdatedCTag:(BOOL)arg1 ;
-(id)previousSyncToken;
-(BOOL)useSyncCollection;
-(id)localItemURLOrder;
-(id)bulkChangeCheckCTag;
-(BOOL)actionsOnly;
-(void)setActionsOnly:(BOOL)arg1 ;
@end

