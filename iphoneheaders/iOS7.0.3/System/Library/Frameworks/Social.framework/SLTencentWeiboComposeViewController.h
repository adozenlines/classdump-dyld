/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLMicroBlogComposeViewController.h>

@class SLTencentWeiboSession;

@interface SLTencentWeiboComposeViewController : SLMicroBlogComposeViewController {

	SLTencentWeiboSession* _remoteSession;

}
+(id)serviceBundle;
-(id)session;
-(void)tearDownSession;
-(void)presentNoAccountsAlert;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
