/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKAnnotationContainerView.h>

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {

	BOOL _suppress;

}
-(void)setAnnotationViewsRotationRadians:(float)arg1 animation:(id)arg2 ;
-(void)_updateAnnotationViewPerspective;
-(void)suppressUpdates;
-(void)stopSuppressingUpdates;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)_updateAnnotationViewPositions;
-(void)_updateAddedAnnotationRotation:(id)arg1 ;
@end
