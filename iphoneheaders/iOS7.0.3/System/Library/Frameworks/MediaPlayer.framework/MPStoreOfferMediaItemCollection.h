/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>

@class NSDictionary, NSArray, MPMediaQuery, MPMediaItemCollection, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {

	NSDictionary* _storeLookupPropertyValues;
	NSArray* _unmergedStoreMediaItems;
	MPMediaQuery* _localItemsQuery;
	MPMediaItemCollection* _localCollection;
	BOOL _hasHiddenRestrictedContent;
	int _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _collectionContentRating;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * itemsByRemovingStoreOffers; 
@property (nonatomic,readonly) NSArray * itemsByRemovingLocalItems; 
@property (nonatomic,readonly) BOOL isCollectionOfferPresentable; 
+(id)defaultPropertyValues;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 ;
+(int)offerPassTypeForLookupCollectionPropertyValues:(id)arg1 ;
+(id)childItemIDsForLookupCollectionPropertyValues:(id)arg1 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
-(id)mediaLibrary;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2 ;
-(id)itemsByRemovingLocalItems;
-(int)preferredStoreOfferVariant;
-(id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(int)arg2 ;
-(id)buyOfferForVariant:(int)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(BOOL)isDownloadable;
-(id)itemsByRemovingStoreOffers;
-(BOOL)hasDownloadableStoreOfferItemsForVariant:(int)arg1 ;
-(BOOL)hasPurchasableStoreOfferItemsForVariant:(int)arg1 ;
-(void)_loadLocalCollection;
-(BOOL)_checkIsUsableOffer;
-(id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4 ;
-(BOOL)_hasRestrictedContent;
-(BOOL)isCheaperToPurchaseIndividualItems;
-(int)countOfItemsByRemovingLocalItems;
-(BOOL)isCollectionOfferPresentable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(void).cxx_destruct;
@end

