/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DatabaseConnectionDelegate.h>
#import <MusicLibrary/ML3DatabaseConnectionPoolDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, ML3AccountCacheDatabase, ML3DatabaseConnection, SBCPlaybackPositionServiceProxy, NSCountedSet, NSMutableArray, NSMutableDictionary, _LibraryNotification, ML3ArtworkUtility, ML3DatabaseConnectionPool, NSArray, ML3Container, ML3DatabaseMetadata;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {

	NSString* _libraryUID;
	NSObject<OS_dispatch_queue>* _atomicityQueue;
	BOOL _reloadForMediaServiceNeeded;
	ML3AccountCacheDatabase* _accountCacheDatabase;
	ML3DatabaseConnection* _geniusDatabase;
	SBCPlaybackPositionServiceProxy* _uppService;
	NSCountedSet* _notifyNamesToIgnore;
	NSMutableArray* _pendingNotifyPostNames;
	NSMutableDictionary* _pendingLocalNotificationsToPost;
	_LibraryNotification* _libraryChangedNotify;
	_LibraryNotification* _nonContentsNotify;
	_LibraryNotification* _invisiblePropertyNotify;
	_LibraryNotification* _displayValuesNotify;
	_LibraryNotification* _syncGenerationNotify;
	_LibraryNotification* _libraryUIDNotify;
	int _systemLanguageChangedToken;
	id _mcSettingsObserver;
	id _loggingObserver;
	int _willDeleteDatabaseNotifyToken;
	ML3ArtworkUtility* _artworkUtility;
	iPhoneSortKeyBuilderRef _sortKeyBuilder;
	BOOL _isHomeSharingLibraryLoaded;
	BOOL _isHomeSharingLibrary;
	BOOL _hasEverConnectedTo;
	BOOL _keepPresignedValidyAfterVerification;
	BOOL _currentThreadHasWriterConnectionCheckedOut;
	ML3DatabaseConnectionPool* _connectionPool;
	NSString* _databasePath;
	NSArray* _libraryEntityFilterPredicates;
	NSArray* _libraryContainerFilterPredicates;

}

@property (retain) ML3DatabaseConnectionPool * connectionPool;                        //@synthesize connectionPool=_connectionPool - In the implementation block
@property (retain) ML3ArtworkUtility * artworkUtility;                                //@synthesize artworkUtility=_artworkUtility - In the implementation block
@property (retain) NSString * databasePath;                                           //@synthesize databasePath=_databasePath - In the implementation block
@property (copy) NSString * libraryUID; 
@property (readonly) long long persistentID; 
@property (readonly) long long currentRevision; 
@property (readonly) long long currentContentRevision; 
@property (assign) long long syncGenerationID; 
@property (readonly) long long autoFilledTracksTotalSize; 
@property (readonly) ML3Container * currentDevicePurchasesPlaylist; 
@property (readonly) ML3DatabaseMetadata * databaseInfo; 
@property (readonly) NSArray * localizedSectionIndexTitles; 
@property (readonly) NSArray * preferredAudioTracks; 
@property (readonly) NSArray * preferredSubtitleTracks; 
@property (assign,nonatomic) BOOL isHomeSharingLibrary; 
@property (readonly) BOOL mediaRestrictionEnabled; 
@property (nonatomic,readonly) BOOL hasEverConnectedToDatabase;                       //@synthesize hasEverConnectedTo=_hasEverConnectedTo - In the implementation block
@property (assign,nonatomic) BOOL keepPresignedValidyAfterVerification;               //@synthesize keepPresignedValidyAfterVerification=_keepPresignedValidyAfterVerification - In the implementation block
@property (nonatomic,retain) NSArray * libraryEntityFilterPredicates;                 //@synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryContainerFilterPredicates;              //@synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates - In the implementation block
@property (readonly) BOOL currentThreadHasWriterConnectionCheckedOut;                 //@synthesize currentThreadHasWriterConnectionCheckedOut=_currentThreadHasWriterConnectionCheckedOut - In the implementation block
@property (readonly) BOOL supportsUbiquitousPlaybackPositions; 
+(void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/ id)arg3 progressHandler:(/*^block*/ id)arg4 ;
+(void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
+(void)initialize;
+(id)sectionIndexTitles;
+(id)localizedSortingDetailsDictionary;
+(BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1 ;
+(void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2 ;
+(void)disableAutomaticDatabaseArtworkConversion;
+(id)mediaFolderRelativePath:(id)arg1 ;
+(id)sharedLibrary;
+(id)pathForResourceFileOrFolder:(int)arg1 ;
+(id)sharedLibraryDatabasePath;
+(id)geniusDatabaseFilePath;
+(id)fallbackGeniusDatabaseFilePath;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
+(BOOL)userVersionMatchesSystemUsingConnection:(id)arg1 ;
+(id)allTables;
+(BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1 ;
+(BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
+(id)_purgeableTrackPredicateWithUrgency:(unsigned)arg1 ;
+(void)disableSharedLibrary;
+(void)disableAutomaticDatabaseValidation;
+(BOOL)processHasDatabaseWritePermissions;
+(BOOL)importationEnabled;
+(void)setImportationEnabled:(BOOL)arg1 ;
+(id)localizedSectionHeaderForSectionHeader:(id)arg1 ;
+(id)localizedSectionIndexTitleForSectionHeader:(id)arg1 ;
+(id)sectionIndexTitleForSectionHeader:(id)arg1 ;
+(void)enumerateSortMapTablesUsingBlock:(/*^block*/ id)arg1 ;
+(BOOL)updateTrackIntegrityOnConnection:(id)arg1 ;
+(id)localizedSectionDictionary;
+(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
+(BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1 ;
+(id)sortMapNewSchemaSQL;
+(id)systemCurrentLanguage;
+(BOOL)updateSortMapOnConnection:(id)arg1 ;
+(BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char*)arg2 ;
+(int)userVersionUsingConnection:(id)arg1 ;
+(BOOL)defaultExcludeFromShuffleForMediaType:(unsigned long)arg1 ;
+(BOOL)defaultRememberBookmarkTimeForMediaType:(unsigned long)arg1 ;
+(id)itemIndexSchemaSQL;
+(id)allPragmaSQL;
+(id)allSchemaSQL;
+(BOOL)createIndexesUsingConnection:(id)arg1 ;
+(BOOL)createTriggersUsingConnection:(id)arg1 ;
+(int)currentUserVersion;
+(BOOL)buildDatabaseTablesUsingConnection:(id)arg1 popuplateDatabaseTablesOnConnectionBlock:(/*^block*/ id)arg2 ;
+(id)indexSchemaSQL;
+(id)allTriggersSQL;
+(BOOL)migrateToCurrentUserVersionUsingConnection:(id)arg1 musicLibrary:(id)arg2 ;
+(id)storeLinkSchemaSQL;
+(id)sortMapSchemaSQL;
+(id)itemSchemaSQL;
+(BOOL)dropIndexesUsingConnection:(id)arg1 ;
+(id)mediaFolderPath;
+(id)controlDirectoryPathWithBasePath:(id)arg1 ;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4 ;
+(id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2 ;
+(id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3 ;
-(void)checkForChangesOnConnection:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)fillContainerForHomeSharingConnection:(id)arg1 containerID:(long long)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(BOOL)executeUpdateSQL:(id)arg1 ;
-(void)removeSagaTrackData;
-(void)removeJaliscoTrackData;
-(BOOL)removeSource:(int)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)_artworkMigrator;
-(void)beginAutoConvertingArtworkFormats;
-(void)beginConvertingArtworkFormatsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)performDatabaseTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)artworkUtility;
-(BOOL)writeToDatabaseArtworkForCacheID:(id)arg1 length:(unsigned long)arg2 formatID:(unsigned)arg3 imageSubRect:(CGRect)arg4 ;
-(void)performReadOnlyDatabaseTransactionWithBlock:(/*^block*/ id)arg1 ;
-(BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 deleteAllFromConversionTable:(BOOL)arg3 ;
-(id)artworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(BOOL)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)checkoutWriterConnection;
-(void)deleteFromArtworkConversionForCacheID:(id)arg1 fromFormatID:(unsigned)arg2 toFormatID:(unsigned)arg3 ;
-(void)notifyDisplayValuesPropertyDidChange;
-(void)checkInDatabaseConnection:(id)arg1 ;
-(BOOL)keepPresignedValidyAfterVerification;
-(void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(/*^block*/ id)arg2 ;
-(BOOL)insertArtworkWithImageData:(id)arg1 artworkCreationDirective:(SCD_Struct_ML4)arg2 forCacheID:(id)arg3 ;
-(long long)persistentID;
-(id)geniusDatabase;
-(BOOL)handleDatabaseValidation;
-(void)notifyContentsDidChange;
-(BOOL)isCurrentThreadInTransaction;
-(void)notifyNonContentsPropertyDidChange;
-(void)notifyInvisiblePropertyDidChange;
-(BOOL)dropItemIndexes;
-(BOOL)createIndexes;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)connectionPool;
-(id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(/*^block*/ id)arg3 ;
-(void)_enqueueLocalNotificationName:(id)arg1 isSourceExternal:(BOOL)arg2 ;
-(void)_updateDatabaseConnectionsProfilingLevel;
-(void)reconnectToDatabase;
-(void)_delayableNotifyPost:(id)arg1 localNotificationName:(id)arg2 ;
-(id)databaseInfo;
-(BOOL)validateDatabaseWithTimeout:(double)arg1 ;
-(BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_configureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_teardownMediaLibraryDatabaseConnection:(id)arg1 ;
-(id)checkoutReaderConnection;
-(id)_newGeniusDBConnectionAtPath:(id)arg1 ;
-(id)uppService;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(void)accessSortKeyBuilder:(/*^block*/ id)arg1 ;
-(void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1 ;
-(void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1 ;
-(void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1 ;
-(void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)arg1 ;
-(void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(SCD_Struct_ML8)nameOrderForString:(id)arg1 ;
-(long long)insertStringIntoSortMapNoTransaction:(id)arg1 ;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned)arg1 ;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned)arg1 respectSongMattress:(BOOL)arg2 ;
-(void)_enumeratePurgeableTracksForUrgency:(unsigned)arg1 respectSongMattress:(BOOL)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned)arg2 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned)arg2 respectSongMattress:(BOOL)arg3 ;
-(BOOL)compactArtwork;
-(id)_existingArtworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(BOOL)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2 forFormatID:(unsigned)arg3 ;
-(id)_artworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 canCreateIfMissing:(BOOL)arg3 ;
-(BOOL)hasArtworkForCacheID:(id)arg1 ensureArtworkFileExists:(BOOL)arg2 ;
-(BOOL)deleteArtworkForCacheID:(id)arg1 ;
-(BOOL)verifyPresignedValidity;
-(void)updateTrackIntegrity;
-(void)deletePresignedValidity;
-(void)_enqueueNotifyPostName:(id)arg1 ;
-(void)connectionWillOpenDatabase:(id)arg1 ;
-(void)connectionDidOpenDatabase:(id)arg1 ;
-(void)connectionWillCloseDatabase:(id)arg1 ;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(BOOL)isHomeSharingLibrary;
-(void)setIsHomeSharingLibrary:(BOOL)arg1 ;
-(long long)currentRevision;
-(long long)currentContentRevision;
-(void)setSyncGenerationID:(long long)arg1 ;
-(long long)syncGenerationID;
-(id)libraryUID;
-(void)setLibraryUID:(id)arg1 ;
-(id)currentDevicePurchasesPlaylist;
-(id)localizedSectionIndexTitles;
-(id)preferredAudioTracks;
-(id)preferredSubtitleTracks;
-(BOOL)mediaRestrictionEnabled;
-(BOOL)automaticDatabaseValidationDisabled;
-(BOOL)emptyAllTables;
-(id)accountCacheDatabase;
-(BOOL)supportsUbiquitousPlaybackPositions;
-(BOOL)populateStaticItemsOfDynamicContainers;
-(id)groupingKeyForString:(id)arg1 ;
-(id)groupingKeysForStrings:(id)arg1 ;
-(id)localizedSectionHeaderForSectionIndex:(unsigned)arg1 ;
-(unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)arg1 ;
-(void)saveTrackMetadata;
-(void)savePlaylists;
-(BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1 ;
-(BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1 ;
-(long long)addStringToSortMap:(id)arg1 ;
-(BOOL)updateSortMap;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(int)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(int)arg3 ;
-(long long)autoFilledTracksTotalSize;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 ;
-(void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(BOOL)hasArtworkForCacheID:(id)arg1 ;
-(void)updateArtworkFormatsWithArtworkCreationDirective:(SCD_Struct_ML4)arg1 forCacheID:(id)arg2 ;
-(BOOL)deleteAllArtwork;
-(void)removeTombstonesForDeletedItems;
-(void)removeOrphanedTracks;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(void)migratePresignedValidity;
-(BOOL)hasPresignedValidity;
-(BOOL)hasEverConnectedToDatabase;
-(void)setKeepPresignedValidyAfterVerification:(BOOL)arg1 ;
-(void)setConnectionPool:(id)arg1 ;
-(void)setArtworkUtility:(id)arg1 ;
-(void)setDatabasePath:(id)arg1 ;
-(id)libraryEntityFilterPredicates;
-(void)setLibraryEntityFilterPredicates:(id)arg1 ;
-(id)libraryContainerFilterPredicates;
-(void)setLibraryContainerFilterPredicates:(id)arg1 ;
-(BOOL)currentThreadHasWriterConnectionCheckedOut;
-(id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)artistForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5 ;
-(id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2 ;
-(id)insertStringsIntoSortMap:(id)arg1 ;
-(id)genreForGenre:(id)arg1 ;
-(id)composerForComposerName:(id)arg1 ;
-(id)albumArtistForEffectiveAlbumArtistName:(id)arg1 ;
-(BOOL)handlePreprocessDatabase;
-(BOOL)handleSchemaUpgrade;
-(BOOL)coerceValidDatabase;
-(BOOL)updateSystemPlaylistNamesForCurrentLanguage;
-(void)updateOrderingLanguagesForCurrentLanguage;
-(BOOL)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2 ;
-(BOOL)deleteAndRecreateDatabaseUsingConnection:(id)arg1 ;
-(BOOL)buildDatabaseTables;
-(BOOL)removeLocationsForItemsMissingAssets;
-(BOOL)resetAllContents;
-(id)locationKindForKind:(id)arg1 ;
-(BOOL)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2 ;
-(BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)databasePath;
-(void).cxx_destruct;
@end
