/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNPageCoordinateDictionary : NSObject {

	map<TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<NSObject> > > >* _pageCoordinateDictionary;

}
-(void)setObject:(id)arg1 forPageCoordinate:(SCD_Struct_TS266)arg2 ;
-(id)objectForPageCoordinate:(SCD_Struct_TS266)arg1 ;
-(void)removeAllObjects;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

