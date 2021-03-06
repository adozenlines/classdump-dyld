/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLRevGeoPlace : NSObject {

	NSMutableDictionary* _placeTypeInfoMap;
	BOOL _isHome;

}

@property (assign,nonatomic) BOOL isHome;                                           //@synthesize isHome=_isHome - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * placeTypeInfoMap; 
+(/*^block*/ id)sortedAdditionalPlaceComparator;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)bestPlaceInfoForOrderType:(unsigned)arg1 ;
-(void)setIsHome:(BOOL)arg1 ;
-(BOOL)isHome;
-(id)initWithGEOPlaceResult:(id)arg1 ;
-(id)initWithGEOPlace:(id)arg1 ;
-(id)placeInfoSetForOrderType:(unsigned)arg1 ;
-(void)mergeGEOPlaceResult:(id)arg1 updateExisting:(BOOL)arg2 ;
-(void)mergeGEOPlace:(id)arg1 updateExisting:(BOOL)arg2 ;
-(void)mergeCommonDataForGEOPlace:(id)arg1 updateExisting:(BOOL)arg2 ;
-(void)mergePlace:(id)arg1 updateExisting:(BOOL)arg2 ;
-(void)addPlaceName:(id)arg1 area:(double)arg2 forOrderType:(unsigned)arg3 updateExisting:(BOOL)arg4 ;
-(unsigned)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned)arg2 ;
-(void)removePlacesInPlaceInfoSet:(id)arg1 fromOrderType:(unsigned)arg2 ;
-(id)placeTypeInfoMap;
-(id)initWithPlace:(id)arg1 ;
@end

