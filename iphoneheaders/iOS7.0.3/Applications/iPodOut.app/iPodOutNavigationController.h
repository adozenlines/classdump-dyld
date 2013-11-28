/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSMutableArray;

@interface iPodOutNavigationController : UINavigationController {

	NSMutableArray* navigationStack;

}

@property (nonatomic,retain) NSMutableArray * navigationStack; 
-(void)updateTopNavigationPathComponent;
-(id)navigationStack;
-(void)setNavigationStack:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerWithTransition:(int)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)pushViewController:(id)arg1 transition:(int)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
