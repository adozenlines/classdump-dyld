/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject, MFFont, TSUColor, MFTransform, MFPen, MFBrush, MFPalette, MFPath;

@interface MFDeviceContext : NSObject <NSCopying> {

	NSObject<MFDeviceDriver>* m_driver;
	bool m_textUpdateCP;
	double m_miterLimit;
	int m_textHorizontalAlign;
	int m_textVerticalAlign;
	int m_textDirection;
	MFFont* m_font;
	TSUColor* m_textColour;
	int m_textBreakExtra;
	int m_textBreakCount;
	int m_textCharExtra;
	TSUColor* m_bkColour;
	int m_bkMode;
	CGPoint m_brushOrg;
	CGPoint m_penPos;
	int m_arcDirection;
	int m_polyFillMode;
	MFTransform* m_transform;
	MFPen* m_pen;
	MFBrush* m_brush;
	MFPalette* m_selectedPalette;
	int m_rop2;
	int m_stretchMode;
	MFPath* m_path;

}
+(id)deviceContextWithDriver:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(id).cxx_construct;
-(id)getSelectedPalette;
-(id)getTextColour;
-(id)getBkColour;
-(void)setBrush:(id)arg1 ;
-(id)initWithDriver:(id)arg1 ;
-(CGPoint)getPenPosition;
-(void)setPenPosition:(CGPoint)arg1 ;
-(bool)getTextUpdateCP;
-(void)setTextUpdateCP:(bool)arg1 ;
-(double)getMiterLimit;
-(int)getTextHorizontalAlign;
-(void)setTextHorizontalAlign:(int)arg1 ;
-(int)getTextVerticalAlign;
-(void)setTextVerticalAlign:(int)arg1 ;
-(int)getTextDirection;
-(void)setTextDirection:(int)arg1 ;
-(void)setTextColour:(id)arg1 ;
-(int)getTextBreakExtra;
-(int)getTextBreakCount;
-(void)setTextJustification:(int)arg1 :(int)arg2 ;
-(int)getTextCharExtra;
-(void)setTextCharExtra:(int)arg1 ;
-(void)setBkColour:(id)arg1 ;
-(int)getBkMode;
-(void)setBkMode:(int)arg1 ;
-(CGPoint)getBrushOrg;
-(void)setBrushOrg:(CGPoint)arg1 ;
-(id)getFont;
-(int)getArcDirection;
-(void)setArcDirection:(int)arg1 ;
-(int)getPolyFillMode;
-(void)setPolyFillMode:(int)arg1 ;
-(int)getStretchBltMode;
-(void)setStretchBltMode:(int)arg1 ;
-(id)getCurrentTransform;
-(void)setCurrentTransform:(id)arg1 ;
-(void)setSelectedPalette:(id)arg1 ;
-(id)getPen;
-(void)setPen:(id)arg1 ;
-(id)getBrush;
-(int)getRop2;
-(void)setRop2:(int)arg1 ;
-(id)getPath;
@end

