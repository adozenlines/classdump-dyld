/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {

	unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> >* _roadsConsidered;
	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE12 _centerPoint;
	double _mapRadius;
	/*^block*/ id _edgeHandler;
	NSMutableSet* _edgeBuilders;

}

@property (nonatomic,readonly) GEOMapAccess * map; 
@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id).cxx_construct;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE12)arg2 radius:(double)arg3 ;
-(void)findEdges:(/*^block*/ id)arg1 ;
-(void)setEdgeHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)edgeHandler;
-(id)map;
-(void).cxx_destruct;
@end

