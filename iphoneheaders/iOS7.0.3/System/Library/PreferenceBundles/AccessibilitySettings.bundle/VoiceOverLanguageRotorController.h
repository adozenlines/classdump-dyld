/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface VoiceOverLanguageRotorController : PSListController
-(id)_languageSpecs;
-(void)_editPressed:(id)arg1 ;
-(void)_donePressed;
-(void)_manageEditButton;
-(id)_valueForLanguage:(id)arg1 ;
-(BOOL)_shouldShowDialect;
-(id)_defaultDialectValue:(id)arg1 ;
-(id)makeNewLanguageSpecifier;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

