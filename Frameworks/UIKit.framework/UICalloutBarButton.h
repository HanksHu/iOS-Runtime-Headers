/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer;

@interface UICalloutBarButton : UIButton {
    SEL m_action;
    BOOL m_configured;
    float m_contentScale;
    float m_contentWidth;
    NSInteger m_flashCount;
    NSTimer *m_flashTimer;
    BOOL m_isText;
    NSInteger m_position;
    BOOL m_single;
}

@property(readonly) SEL action;
@property(readonly) float contentScale;
@property(readonly) float contentWidth;

+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 inView:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 inView:(id)arg3;

- (SEL)action;
- (void)cancelFlash;
- (void)configureForLeftPosition;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition;
- (void)configureForSingle;
- (void)configureLabel;
- (float)contentScale;
- (float)contentWidth;
- (void)dealloc;
- (void)flash;
- (void)flashCallback:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)sendCallback;
- (void)setContentScale:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
