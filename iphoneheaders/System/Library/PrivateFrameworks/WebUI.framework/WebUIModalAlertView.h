/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@interface WebUIModalAlertView : UIAlertView <UIAlertViewDelegate> {

	int _clickedButton;

}
+(id)modalAlertSheetWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)clickedButton;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
@end
