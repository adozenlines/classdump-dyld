/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKCalendarEditItemDelegate.h>

@protocol EKCalendarEditorDelegate, EKStyleProvider;
@class UITableView, NSArray, EKCalendarShareesEditItem, EKSource, EKEventStore, EKCalendar;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {

	UITableView* _tableView;
	NSArray* _editItems;
	EKCalendarShareesEditItem* _shareesEditItem;
	EKSource* _source;
	unsigned _entityType;
	BOOL _isNewCalendar;
	EKEventStore* _eventStore;
	EKCalendar* _calendar;
	<EKCalendarEditorDelegate>* _delegate;
	<EKStyleProvider>* _styleProvider;

}

@property (nonatomic,retain) EKEventStore * eventStore;                                 //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic,__weak) <EKCalendarEditorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isNewCalendar;                                        //@synthesize isNewCalendar=_isNewCalendar - In the implementation block
@property (nonatomic,retain) <EKStyleProvider> * styleProvider;                         //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)eventStore;
-(void)_localeChanged;
-(void)_deleteClicked:(id)arg1 ;
-(void)setEventStore:(id)arg1 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(id)_editItems;
-(void)_eventStoreChanged:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned)arg3 ;
-(id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned)arg3 ;
-(id)owningNavigationController;
-(void)calendarItemStartedEditing:(id)arg1 ;
-(void)setIsNewCalendar:(BOOL)arg1 ;
-(BOOL)isNewCalendar;
-(void)setupForCalendar;
-(BOOL)_shouldShowDeleteButton;
-(void)_deleteCalendar;
-(int)sectionForCalendarEditItem:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(id)tableView;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void).cxx_destruct;
@end

