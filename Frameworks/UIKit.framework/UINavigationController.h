/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UINavigationControllerDelegate>, NSMutableArray, UINavigationBar, UIToolbar, UIView, UIViewController;

@interface UINavigationController : UIViewController {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
    float _bottomInsetDelta;
    UIView *_containerView;
    } _currentScrollContentInsetDelta;
    <UINavigationControllerDelegate> *_delegate;
    UIViewController *_disappearingViewController;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    } _navigationControllerFlags;
    UIView *_navigationTransitionView;
    } _previousScrollContentInsetDelta;
    float _previousScrollContentOffsetDelta;
    UIToolbar *_toolbar;
    NSMutableArray *_viewControllers;
}

@property(readonly) UIViewController *bottomViewController;
@property <UINavigationControllerDelegate> *delegate;
@property(retain) UIViewController *disappearingViewController;
@property(readonly) UINavigationBar *navigationBar;
@property(readonly) UINavigationTransitionView *navigationTransitionView;
@property(readonly) UIViewController *previousViewController;
@property(readonly) UIToolbar *toolbar;
@property(retain,readonly) UIViewController *topViewController;
@property(copy) NSArray *viewControllers;
@property(retain,readonly) UIViewController *visibleViewController;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property BOOL needsDeferredTransition;
@property(getter=isToolbarHidden) BOOL toolbarHidden;

- (BOOL)_allowsAutorotation;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(NSInteger)arg2 edge:(NSInteger*)arg3 duration:(double*)arg4;
- (void)_applyScrollContentInsetDelta:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 toScrollView:(id)arg2;
- (void)_applyScrollContentOffsetDelta:(float)arg1 toScrollView:(id)arg2;
- (void)_clearLastOperation;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (void)_configureToolbar;
- (NSInteger)_deferredTransition;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(NSInteger)arg1;
- (id)_existingToolbar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(NSInteger)arg1;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_isNavigationBarVisible;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_layoutTopViewController;
- (void)_layoutViewController:(id)arg1;
- (id)_moreListTitle;
- (id)_navigationItems;
- (NSInteger)_navigationTransitionForUITransition:(NSInteger)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_popViewControllerWithTransition:(NSInteger)arg1 allowPoppingLast:(BOOL)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(NSInteger)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(NSInteger)arg2;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_releaseContainerViews;
- (void)_resetBottomBarHiddenState;
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)arg1;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(NSInteger)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(NSInteger)arg2 duration:(double)arg3;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(NSInteger)arg2 duration:(double)arg3;
- (void)_setViewControllers:(id)arg1 transition:(NSInteger)arg2;
- (BOOL)_shouldBottomBarBeHidden;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldUseOnePartRotation;
- (id)_snapshotView;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startTransition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1;
- (NSInteger)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBottomBarHiddenState;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)bottomViewController;
- (void)dealloc;
- (id)defaultPNGName;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)disappearingViewController;
- (BOOL)editing;
- (void)encodeWithCoder:(id)arg1;
- (id)firstViewController;
- (NSUInteger)indexOfViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (BOOL)isNavigationBarHidden;
- (BOOL)isShown;
- (BOOL)isToolbarHidden;
- (NSInteger)lastOperation;
- (void)loadView;
- (void)makeModalViewControllerTopViewController;
- (NSInteger)modalTransitionStyle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)navigationBar;
- (Class)navigationBarClass;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(NSInteger)arg2 fromView:(id)arg3 toView:(id)arg4;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(NSInteger)arg2;
- (id)navigationTransitionView;
- (BOOL)needsDeferredTransition;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerWithTransition:(NSInteger)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(NSInteger)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(NSInteger)arg1 duration:(double)arg2 curve:(NSInteger)arg3;
- (id)popViewControllerWithTransition:(NSInteger)arg1;
- (id)previousViewController;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(NSInteger)arg2 forceImmediate:(BOOL)arg3;
- (void)pushViewController:(id)arg1 transition:(NSInteger)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setDelegate:(id)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)setNeedsDeferredTransition;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)tabBarItem;
- (id)toolbar;
- (id)topViewController;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibleViewController;
- (BOOL)wasLastOperationAnimated;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
