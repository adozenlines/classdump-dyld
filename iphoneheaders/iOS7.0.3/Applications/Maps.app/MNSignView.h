/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MNSignView : UIView {

	UIColor* _signColor;
	UIColor* _borderColor;
	float _borderWidth;

}

@property (nonatomic,retain) UIColor * signColor;                //@synthesize signColor=_signColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                  //@synthesize borderWidth=_borderWidth - In the implementation block
-(void)setSignColor:(id)arg1 ;
-(id)signColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(float)borderWidth;
-(id)borderColor;
@end

