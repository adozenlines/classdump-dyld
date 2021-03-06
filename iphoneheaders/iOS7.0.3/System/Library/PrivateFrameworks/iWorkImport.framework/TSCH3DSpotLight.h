/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLight.h>
#import <iWorkImport/TSCH3DLightPositionable.h>
#import <iWorkImport/TSCH3DLightDirectional.h>

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional> {

	tvec3<float> mPosition;
	tvec3<float> mDirection;
	float mCutOff;
	float mDropOff;

}

@property (assign,nonatomic) tvec3<float> position; 
@property (assign,nonatomic) tvec3<float> direction; 
@property (assign,nonatomic) float cutOff; 
@property (assign,nonatomic) float dropOff; 
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(float)cutOff;
-(float)dropOff;
-(void)setCutOff:(float)arg1 ;
-(void)setDropOff:(float)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(tvec3<float>)arg1 ;
-(tvec3<float>)position;
-(void)setDirection:(tvec3<float>)arg1 ;
-(tvec3<float>)direction;
-(id).cxx_construct;
@end

