/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPRubyField, NSString, TSWPChangeSession, TSWPStorage;

@interface TSWPModifyRubyTextCommand : TSWPTextBaseCommand {

	TSWPRubyField* _rubyField;
	NSString* _rubyText;
	NSString* _baseText;
	unsigned _uiSessionID;
	TSWPChangeSession* _changeSession;
	NSString* _language;
	TSWPStorageTransaction* _undoRedoTransaction;

}

@property (nonatomic,readonly) TSWPStorage * storage; 
+(NSRange)p_modifyRubyField:(id)arg1 baseText:(id)arg2 changeSession:(id)arg3 language:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ModifyRubyTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ModifyRubyTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(void)p_undoRedo;
-(id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned)arg4 language:(id)arg5 ;
-(id)initWithRubyField:(id)arg1 baseText:(id)arg2 rubyText:(id)arg3 rubyUISession:(unsigned)arg4 changeSession:(id)arg5 language:(id)arg6 ;
-(void)p_swapRubyTexts;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end

