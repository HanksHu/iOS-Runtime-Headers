/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversationList, CKService, CKTranscriptController, MFMailComposeViewController, UINavigationController, UITableView, UIToolbar;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    unsigned int _dirty : 1;
    unsigned int _isVisible : 1;
    unsigned int _isUpdatingDisabled : 1;
    UIToolbar *_buttonBar;
    CKConversationList *_conversationList;
    CKService *_currentService;
    MFMailComposeViewController *_mailComposeController;
    UINavigationController *_navigationController;
    UITableView *_table;
    CKTranscriptController *_transcriptController;
    NSUInteger _willBeMarkedReadCount;
}

@property CKConversationList *conversationList;

- (void)_conversationDidChange:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationWasMarkedAsRead:(id)arg1;
- (void)_displaySMSDatabaseFullWarning;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (void)_groupsChanged:(id)arg1;
- (void)_showMailComposeSheet;
- (void)autosaveMailComposition;
- (void)composeButtonClicked:(id)arg1;
- (id)conversationList;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)dealloc;
- (void)deleteButtonPressedForIndexPath:(id)arg1;
- (void)didCancelComposition:(id)arg1;
- (void)disableConversationListUpdates;
- (void)enableConversationListUpdates;
- (id)initWithNavigationController:(id)arg1 service:(id)arg2;
- (BOOL)isShowingTranscriptWithUnsentText;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (void)noteConversationListChanged;
- (void)noteUnreadCountsChanged;
- (BOOL)resumeToConversation:(id)arg1 unsentComposition:(id)arg2;
- (NSInteger)selectedIndex;
- (void)setConversationList:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)show:(BOOL)arg1;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2;
- (void)showMailComposeSheetForAddress:(id)arg1;
- (void)showMailComposeSheetForAutosavedMessage;
- (void)showMessagesForAddress:(id)arg1 animate:(BOOL)arg2;
- (void)showNewMessageCompositionPanel:(BOOL)arg1;
- (BOOL)showUnreadConversations;
- (void)significantTimeChange;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)transcriptController;
- (void)updateConversationList;
- (void)updateNavigationItems;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
