/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MNTracePlayerDelegate <NSObject>
@required
-(void)tracePlayerDidStart:(id)arg1;
-(void)tracePlayerDidStop:(id)arg1;
-(void)tracePlayerDidPause:(id)arg1;
-(void)tracePlayerDidResume:(id)arg1;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 stale:(BOOL)arg3;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3;
-(void)tracePlayerDidStayOnRoute:(id)arg1;
@end

