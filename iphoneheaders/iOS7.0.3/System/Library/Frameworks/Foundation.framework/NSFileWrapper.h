/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSDictionary, NSString;

@interface NSFileWrapper : NSObject <NSCoding> {

	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;

}
+(id)_pathForURL:(id)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_canSafelyMapFilesAtPath:(id)arg1 ;
+(BOOL)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3 ;
+(id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned)arg5 error:(id*)arg6 ;
+(void)_writeAttributes:(id)arg1 toURL:(id)arg2 ;
+(void)initialize;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
+(BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)isDirectory;
-(id)initRegularFileWithContents:(id)arg1 ;
-(BOOL)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 ;
-(id)preferredFilename;
-(void)setPreferredFilename:(id)arg1 ;
-(id)_addChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)_initDirectoryContents;
-(id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5 ;
-(void)_removeParent:(id)arg1 ;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(void)_observePreferredFileNameOfChild:(id)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)_matchesItemKind:(id)arg1 modificationDate:(id)arg2 ;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)setFileAttributes:(id)arg1 ;
-(void)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2 ;
-(id)symbolicLinkDestinationURL;
-(void)_updateDescendantFileNames;
-(BOOL)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(BOOL)arg4 didHardLinking:(BOOL*)arg5 error:(id*)arg6 ;
-(id)_attributesToWrite;
-(id)_newImpl;
-(void)_addParent:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(void)_resetFileModificationDate;
-(id)_uniqueFileNameOfChild:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_fullDescription:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)_init;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isRegularFile;
-(id)regularFileContents;
-(BOOL)writeToURL:(id)arg1 options:(unsigned)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)fileAttributes;
-(id)filename;
-(void)setFilename:(id)arg1 ;
@end

