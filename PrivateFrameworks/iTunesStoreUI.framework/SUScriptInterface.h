/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScriptInterfaceDelegate>, NSLock, NSURL, SUScriptNavigationBar, SUScriptPostOperationDelegate, WebScriptObject;

@interface SUScriptInterface : NSObject {
    <SUScriptInterfaceDelegate> *_delegate;
    NSLock *_lock;
    NSURL *_mainFrameURL;
    SUScriptPostOperationDelegate *_postOperationDelegate;
    SUScriptNavigationBar *_scriptNavigationBar;
    BOOL _sourceIsTrusted;
    id _threadSafeDelegate;
    WebScriptObject *_windowScriptObject;
}

@property <SUScriptInterfaceDelegate> *delegate;
@property(retain) NSURL *mainFrameURL;
@property BOOL sourceIsTrusted;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (id)_propertyListFromString:(id)arg1;
- (id)_scriptNavigationBar;
- (id)_threadSafeDelegate;
- (id)accountDSID;
- (id)accountName;
- (id)activeNetworkType;
- (void)addPurchaseWithInfo:(id)arg1;
- (BOOL)arePodcastsDisabled;
- (BOOL)canSendEmail;
- (BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)diskSpaceAvailable;
- (void)dismissSheet;
- (void)finalizeForWebScript;
- (void)goBack;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4;
- (void)gotoStoreURL:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (id)hardwareType;
- (BOOL)haveAccount;
- (id)init;
- (id)initWithWindowScriptObject:(id)arg1;
- (BOOL)isExplicitContentDisabled;
- (void)log:(id)arg1;
- (id)mainFrameURL;
- (void)openURL:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1;
- (void)redeemCode:(id)arg1;
- (void)registerNativeWidget:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)removeNativeWidgetWithIdentifier:(id)arg1;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)setMainFrameURL:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (void)set_scriptNavigationBar:(id)arg1;
- (BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)signOutPrimaryAccount;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (BOOL)sourceIsTrusted;
- (id)systemVersion;

@end
