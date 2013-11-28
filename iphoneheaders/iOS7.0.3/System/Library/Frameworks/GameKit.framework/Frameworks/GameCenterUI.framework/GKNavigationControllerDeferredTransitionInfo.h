/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject {

	BOOL _animated;
	UIViewController* _viewController;
	int _type;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setViewController:(id)arg1 ;
-(BOOL)animated;
-(id)viewController;
-(void)setAnimated:(BOOL)arg1 ;
@end
