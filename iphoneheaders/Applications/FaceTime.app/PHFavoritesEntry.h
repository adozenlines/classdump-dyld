/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABFavoritesEntry.h>

@class UIImage;

@interface PHFavoritesEntry : ABFavoritesEntry {

	UIImage* _thumbnail;
	BOOL _isPersonImage;

}

@property (assign,nonatomic) BOOL isPersonImage;              //@synthesize isPersonImage=_isPersonImage - In the implementation block
+(BOOL)_usesFlatImages;
+(id)sharedMonogrammer;
-(BOOL)isPersonImage;
-(void)loadThumbnailIfNecessary;
-(void)setIsPersonImage:(BOOL)arg1 ;
-(void)dealloc;
-(id)thumbnail;
@end
