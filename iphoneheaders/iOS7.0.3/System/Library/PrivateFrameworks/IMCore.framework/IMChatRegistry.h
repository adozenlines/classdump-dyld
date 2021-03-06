/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary, NSString, IMTimer, NSArray;

@interface IMChatRegistry : NSObject <NSFastEnumeration> {

	NSMutableArray* _allChats;
	NSMutableDictionary* _chatGUIDToCurrentThreadMap;
	NSMutableDictionary* _chatGUIDToInfoMap;
	NSMutableDictionary* _chatGUIDToChatMap;
	NSMutableDictionary* _threadNameToChatMap;
	NSMutableArray* _allChatsInThreadNameMap;
	NSMutableArray* _pendingQueries;
	NSMutableArray* _waitingForQueries;
	NSString* _historyModificationStamp;
	IMTimer* _markAsReadTimer;
	double _timerStartTimeInterval;
	BOOL _firstLoad;
	BOOL _loading;
	BOOL _daemonHadTerminated;
	BOOL _wantsHistoryReload;
	BOOL _postMessageSentNotifications;
	unsigned _defaultNumberOfMessagesToLoad;
	unsigned _daemonUnreadCount;
	long long _daemonLastFailedMessageID;

}

@property (nonatomic,readonly) NSArray * allExistingChats; 
@property (nonatomic,readonly) unsigned numberOfExistingChats; 
@property (assign,setter=_setPostMessageSentNotifications:,nonatomic) BOOL _postMessageSentNotifications;                    //@synthesize postMessageSentNotifications=_postMessageSentNotifications - In the implementation block
@property (assign,setter=_setDefaultNumberOfMessagesToLoad:,nonatomic) unsigned _defaultNumberOfMessagesToLoad;              //@synthesize defaultNumberOfMessagesToLoad=_defaultNumberOfMessagesToLoad - In the implementation block
@property (nonatomic,readonly) BOOL _isLoading;                                                                              //@synthesize loading=_loading - In the implementation block
+(id)sharedInstance;
+(void)setMessageClass:(Class)arg1 ;
+(Class)messageClass;
+(Class)chatClass;
+(Class)chatRegistryClass;
+(void)setChatRegistryClass:(Class)arg1 ;
+(void)setChatClass:(Class)arg1 ;
-(id)_ck_chatForHandles:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_ck_chatForEntities:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IM3*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)existingChatWithChatIdentifier:(id)arg1 ;
-(id)existingChatWithGUID:(id)arg1 ;
-(id)allExistingChats;
-(unsigned)numberOfExistingChats;
-(id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 ;
-(id)chatForIMHandles:(id)arg1 ;
-(id)chatForIMHandle:(id)arg1 ;
-(void)systemApplicationDidResume;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(void)setupComplete;
-(void)chat:(id)arg1 updated:(id)arg2 ;
-(void)chat:(id)arg1 propertiesUpdated:(id)arg2 ;
-(void)leftChat:(id)arg1 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6 ;
-(void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned)arg5 ;
-(void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3 ;
-(void)unreadCountChanged:(int)arg1 ;
-(void)lastFailedMessageIDChanged:(long long)arg1 ;
-(void)_handleChatReconstructions:(id)arg1 ;
-(void)_noteChatInit:(id)arg1 ;
-(void)_noteChatDealloc:(id)arg1 ;
-(BOOL)_firstLoad;
-(void)_chat:(id)arg1 updateDisplayName:(id)arg2 ;
-(void)_chat:(id)arg1 joinWithProperties:(id)arg2 ;
-(void)_chat_declineInvitation:(id)arg1 ;
-(void)_chat:(id)arg1 sendMessage:(id)arg2 ;
-(void)_updateUnreadCountForChat:(id)arg1 ;
-(void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2 ;
-(void)_chat_sendReadReceiptForAllMessages:(id)arg1 ;
-(void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3 ;
-(void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3 ;
-(BOOL)_hasChat:(id)arg1 forService:(id)arg2 ;
-(void)_chat_leave:(id)arg1 ;
-(void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3 ;
-(void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3 ;
-(id)_allGUIDsForChat:(id)arg1 ;
-(void)_blockUntilQueriesComplete:(id)arg1 ;
-(void)handleIMChatParticipantsDidChange:(id)arg1 ;
-(void)_daemonReallyDied:(id)arg1 ;
-(void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4 ;
-(void)_unregisterChatWithGUID:(id)arg1 ;
-(id)existingChatForIMHandle:(id)arg1 ;
-(id)_createdChatForIMHandle:(id)arg1 ;
-(void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2 guid:(id)arg3 ;
-(id)chatForIMHandles:(id)arg1 chatName:(id)arg2 ;
-(id)existingChatForIMHandles:(id)arg1 ;
-(id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)_allCreatedChats;
-(id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(BOOL)arg3 ;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)__blockUntilQueriesComplete;
-(void)_clearMarkAsReadTimerIfNecessary;
-(void)_startMarkAsReadTimerIfNecessary;
-(id)_chatInstanceForGUID:(id)arg1 ;
-(void)unregisterChat:(id)arg1 ;
-(void)unregisterChatWithGUID:(id)arg1 ;
-(void)_unregisterChat:(id)arg1 ;
-(id)chatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(long long)lastFailedMessageID;
-(id)_lookupExistingChatWithIMHandle:(id)arg1 ;
-(id)_chatForChatDictionary:(id)arg1 chatItems:(id)arg2 allowCreate:(BOOL)arg3 createdChat:(BOOL*)arg4 outGUID:(id*)arg5 ;
-(id)_chatsWithMessage:(id)arg1 ;
-(unsigned)_defaultNumberOfMessagesToLoad;
-(void)_setDefaultNumberOfMessagesToLoad:(unsigned)arg1 ;
-(BOOL)_isLoading;
-(BOOL)_postMessageSentNotifications;
-(void)_setPostMessageSentNotifications:(BOOL)arg1 ;
-(void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5 ;
-(void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3 ;
-(unsigned)unreadCount;
@end

