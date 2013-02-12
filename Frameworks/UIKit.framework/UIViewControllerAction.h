/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {
    BOOL _animated;
    NSString *_name;
    UIViewController *_viewController;
}

@property(retain) NSString *name;
@property UIViewController *viewController;
@property BOOL animated;

- (BOOL)animated;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;
- (id)name;
- (void)setAnimated:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
