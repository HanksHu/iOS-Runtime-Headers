/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSBundle, NSHashTable, NSString, UIBarButtonItem, UINavigationItem, UIResponder, UISearchDisplayController, UITabBarItem, UIView, UIViewController;

@interface UIViewController : UIResponder <NSCoding> {
    struct { 
        unsigned int appearState : 2; 
        unsigned int isEditing : 1; 
        unsigned int isPerformingModalTransition : 1; 
        unsigned int hidesBottomBarWhenPushed : 1; 
        unsigned int autoresizesArchivedViewToFullSize : 1; 
        unsigned int viewLoadedFromControllerNib : 1; 
        unsigned int isRootViewController : 1; 
        unsigned int isSuspended : 1; 
        unsigned int wasApplicationFrameAtSuspend : 1; 
        unsigned int wantsFullScreenLayout : 1; 
        unsigned int shouldUseFullScreenLayout : 1; 
        unsigned int allowsAutorotation : 1; 
        unsigned int searchControllerRetained : 1; 
    UIViewController *_childModalViewController;
    NSHashTable *_childViewControllers;
    id _currentAction;
    UIView *_dimmingView;
    UIBarButtonItem *_editButtonItem;
    NSInteger _lastKnownInterfaceOrientation;
    UIResponder *_modalPreservedFirstResponder;
    NSInteger _modalTransitionStyle;
    UIView *_modalTransitionView;
    UINavigationItem *_navigationItem;
    NSBundle *_nibBundle;
    NSString *_nibName;
    UIViewController *_parentViewController;
    UIView *_presentationSuperview;
    UIView *_savedFooterSuperview;
    UIView *_savedHeaderSuperview;
    UISearchDisplayController *_searchDisplayController;
    UITabBarItem *_tabBarItem;
    NSString *_title;
    NSArray *_toolbarItems;
    UIView *_view;
    } _viewControllerFlags;
}

@property(retain) UIViewController *childModalViewController;
@property(retain) NSHashTable *childViewControllers;
@property(retain) UITransitionView *modalTransitionView;
@property(readonly) UIViewController *modalViewController;
@property(retain,readonly) UINavigationController *navigationController;
@property(retain,readonly) UINavigationItem *navigationItem;
@property(retain) NSBundle *nibBundle;
@property(copy) NSString *nibName;
@property UIViewController *parentViewController;
@property(readonly) UIView *savedHeaderSuperview;
@property(retain) UISearchDisplayController *searchDisplayController;
@property(retain,readonly) UITabBarController *tabBarController;
@property(retain) UITabBarItem *tabBarItem;
@property(copy) NSString *title;
@property(retain) UIView *view;
@property BOOL hidesBottomBarWhenPushed;
@property NSInteger interfaceOrientation;
@property NSInteger modalTransitionStyle;
@property BOOL wantsFullScreenLayout;

+ (void)_dequeueTransitionSafeInvocations;
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;
+ (void)_enqueueTransitionSafeInvocation:(id)arg1;
+ (void)_forceLegacyModalViewControllers:(BOOL)arg1;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (NSInteger)_keyboardDirectionForTransition:(NSInteger)arg1 isOrderingIn:(BOOL)arg2;
+ (void)_setApplicationSuspendPurgeDelay:(double)arg1;
+ (BOOL)_shouldUseLegacyModalViewControllers;
+ (void)beginTransitionSafety;
+ (double)customTransitionDuration;
+ (BOOL)doesOverrideViewControllerMethod:(SEL)arg1;
+ (double)durationForTransition:(NSInteger)arg1;
+ (void)endTransitionSafety;
+ (id)existingNibNameMatchingClassName:(id)arg1 bundle:(id)arg2;
+ (void)removeViewControllerForView:(id)arg1;
+ (void)setCustomTransitionDuration:(double)arg1;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (id)transitionSafePerformer:(id)arg1;
+ (id)transitionSafetyDelegate;
+ (id)viewControllerForView:(id)arg1;

- (BOOL)_allowsAutorotation;
- (id)_ancestorViewControllerOfClass:(Class)arg1 allowModalParent:(BOOL)arg2;
- (NSInteger)_appearState;
- (void)_beginDisablingInterfaceAutorotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForOrientation:(NSInteger)arg1;
- (BOOL)_canReloadView;
- (struct CGPoint { float x1; float x2; })_centerForOrientation:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultInitialViewFrame;
- (void)_didFinishDismissModalTransition;
- (void)_didFinishPresentModalTransition;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_dismissModalOverlayAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_displaysFullScreen;
- (void)_doCommonSetup;
- (void)_endDisablingInterfaceAutorotation;
- (id)_existingNavigationItem;
- (id)_existingTabBarItem;
- (id)_existingView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (BOOL)_hasAppeared;
- (NSInteger)_imagePickerStatusBarMode;
- (BOOL)_isAppearingOrAppeared;
- (BOOL)_isInterfaceAutorotationDisabled;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (BOOL)_isViewInWindowWithoutParentViewController;
- (NSInteger)_lastKnownInterfaceOrientation;
- (void)_legacyDismissModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)_legacyModalDismissTransitionDidComplete;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_legacyPresentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)_loadViewFromNibNamed:(id)arg1 bundle:(id)arg2;
- (id)_moreListTitle;
- (id)_nonModalParentViewController;
- (void)_overlayPresentAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg1;
- (void)_purgeForApplicationSuspend;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_resignRootViewController;
- (id)_sectionForViewController:(id)arg1;
- (void)_setAllowsAutorotation:(BOOL)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)_setExistingTabBarItem:(id)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setInterfaceOrientationOnModalRecursively:(NSInteger)arg1;
- (void)_setSearchDisplayController:(id)arg1 retain:(BOOL)arg2;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
- (void)_setUseTelephonyUI:(BOOL)arg1;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldUseFullScreenLayout;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (float)_statusBarHeightForCurrentInterfaceOrientation;
- (void)_toggleEditing:(id)arg1;
- (NSInteger)_transitionForModalTransitionStyle:(NSInteger)arg1 appearing:(BOOL)arg2;
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)arg1;
- (BOOL)_tryRecursivelyPresentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)_updateInterfaceOrientationAnimated:(BOOL)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_visibleView;
- (NSInteger)abViewControllerType;
- (void)addChildViewController:(id)arg1;
- (BOOL)allowEditing;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)attentionClassDumpUser:(id)arg1 yesItsUsAgain:(id)arg2 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg3 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg4 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg5;
- (void)autoresizeArchivedView;
- (BOOL)autoresizesArchivedViewToFullSize;
- (void)awakeFromNib;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)childModalViewController;
- (id)childViewControllers;
- (id)contentScrollView;
- (id)copyArchivableContext;
- (id)currentAction;
- (void)dealloc;
- (id)defaultPNGName;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissModalOverlayViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissModalViewControllerWithTransition:(NSInteger)arg1;
- (void)dismissMovieViewController;
- (id)displayedURL;
- (double)durationForTransition:(NSInteger)arg1;
- (id)editButtonItem;
- (void)encodeWithCoder:(id)arg1;
- (id)existingView;
- (NSInteger)filterForMediaTypes:(id)arg1;
- (void)forceUnloadView;
- (void)getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1 forWindow:(id)arg2;
- (BOOL)hasDisplayableContent;
- (BOOL)hidesBottomBarWhenPushed;
- (id)imagePickerController;
- (id)imagePickerOptions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (NSInteger)interfaceOrientation;
- (BOOL)isEditing;
- (BOOL)isInMoreList;
- (BOOL)isPerformingModalTransition;
- (BOOL)isRootViewController;
- (BOOL)isViewLoaded;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (NSInteger)modalTransitionStyle;
- (id)modalTransitionView;
- (id)modalViewController;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (id)navigationController;
- (id)navigationItem;
- (id)nextResponder;
- (id)nibBundle;
- (id)nibName;
- (id)parentViewController;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentModalViewController:(id)arg1 fromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
- (void)presentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)presentMovieViewController:(id)arg1;
- (id)presentedViewController;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)pushStorePageWithURL:(id)arg1 needsAuthentication:(BOOL)arg2 withContext:(id)arg3 animated:(BOOL)arg4;
- (void)reloadForNetworkTypeChange;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)reloadWithURL:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)revertStatusBar:(NSInteger)arg1 currentStatusBar:(NSInteger)arg2 animated:(BOOL)arg3;
- (id)rootSectionIdentifier;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingFooterView;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (id)savedHeaderSuperview;
- (id)searchDisplayController;
- (id)section;
- (void)setAutoresizesArchivedViewToFullSize:(BOOL)arg1;
- (void)setChildModalViewController:(id)arg1;
- (void)setChildViewControllers:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setHidesBottomBarWhenPushed:(BOOL)arg1;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (void)setModalTransitionStyle:(NSInteger)arg1;
- (void)setModalTransitionView:(id)arg1;
- (void)setNibBundle:(id)arg1;
- (void)setNibName:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSearchDisplayController:(id)arg1;
- (NSInteger)setStatusBarForFullScreenViewAnimated:(BOOL)arg1 useTelephonyUI:(BOOL)arg2 canHideStatusBar:(BOOL)arg3 newStatusBarMode:(NSInteger*)arg4;
- (void)setTabBarItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWantsFullScreenLayout:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (id)tabBarController;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)tabBarItem;
- (id)title;
- (id)toolbarItems;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)unloadView;
- (void)unloadViewForced:(BOOL)arg1;
- (void)unloadViewIfReloadable;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (BOOL)useTelephonyUI;
- (id)view;
- (id)viewControllerForRotation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (BOOL)viewIsReady;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg2;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(NSInteger)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;

@end
