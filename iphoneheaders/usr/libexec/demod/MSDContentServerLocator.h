/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/NSNetServiceBrowserDelegate.h>
#import <AirTraffic/NSNetServiceDelegate.h>

@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface MSDContentServerLocator : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	id _delegate;
	NSNetServiceBrowser* _browser;
	NSMutableArray* _servers;
	NSString* _savedName;

}

@property (nonatomic,retain) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSNetServiceBrowser * browser;              //@synthesize browser=_browser - In the implementation block
@property (retain) NSMutableArray * servers;                   //@synthesize servers=_servers - In the implementation block
@property (retain) NSString * savedName;                       //@synthesize savedName=_savedName - In the implementation block
-(void)startLocatingContentServer;
-(void)setServers:(id)arg1 ;
-(void)setSavedName:(id)arg1 ;
-(id)savedName;
-(id)servers;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)browser;
-(void)setBrowser:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
@end
