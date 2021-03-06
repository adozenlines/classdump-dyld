/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GKPlayer, GKGameMatch, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject {

	BOOL _hasAchievement;
	BOOL _hasRank;
	BOOL _nearby;
	BOOL _canSelectPlayer;
	GKPlayer* _player;
	GKGameMatch* _gameMatch;
	NSAttributedString* _achievementString;
	NSAttributedString* _rankString;
	unsigned _selectionStatus;
	NSDate* _sortDate;

}

@property (nonatomic,retain) GKPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameMatch * gameMatch;                             //@synthesize gameMatch=_gameMatch - In the implementation block
@property (nonatomic,retain) NSAttributedString * achievementString;              //@synthesize achievementString=_achievementString - In the implementation block
@property (nonatomic,retain) NSAttributedString * rankString;                     //@synthesize rankString=_rankString - In the implementation block
@property (nonatomic,readonly) BOOL playedGame; 
@property (assign,nonatomic) BOOL hasAchievement;                                 //@synthesize hasAchievement=_hasAchievement - In the implementation block
@property (assign,nonatomic) BOOL hasRank;                                        //@synthesize hasRank=_hasRank - In the implementation block
@property (assign,nonatomic) BOOL nearby;                                         //@synthesize nearby=_nearby - In the implementation block
@property (assign,nonatomic) unsigned selectionStatus;                            //@synthesize selectionStatus=_selectionStatus - In the implementation block
@property (nonatomic,readonly) BOOL canSelectPlayer;                              //@synthesize canSelectPlayer=_canSelectPlayer - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                   //@synthesize sortDate=_sortDate - In the implementation block
-(BOOL)hasAchievement;
-(BOOL)hasRank;
-(id)gameMatch;
-(id)achievementString;
-(id)rankString;
-(void)setSelectionStatus:(unsigned)arg1 ;
-(unsigned)selectionStatus;
-(BOOL)playedGame;
-(void)setAchievementString:(id)arg1 ;
-(void)setRankString:(id)arg1 ;
-(void)setGameMatch:(id)arg1 ;
-(void)setHasAchievement:(BOOL)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(void)setNearby:(BOOL)arg1 ;
-(void)setSortDate:(id)arg1 ;
-(void)prepareForLoad;
-(BOOL)nearby;
-(BOOL)canSelectPlayer;
-(id)sortDate;
-(void)dealloc;
-(id)description;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

