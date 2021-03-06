/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate>
+(id)sharedAnimator;
-(void)viewController:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_prepareTransitionWithInfo:(id)arg1 ;
-(void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1 ;
-(void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1 ;
-(void)_finishTransitionWithInfo:(id)arg1 ;
-(void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1 ;
-(id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1 ;
-(id)_savvyViewControllerForViewController:(id)arg1 ;
-(id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1 ;
-(id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2 ;
-(void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1 ;
-(void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1 ;
-(void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1 ;
-(void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1 ;
-(void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)invalidateBubblePositionsForViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_transitionInfoForBubbleFlowRotationOfViewController:(id)arg1 ;
-(void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2 ;
-(void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3 ;
@end

