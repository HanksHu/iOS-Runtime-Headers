/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUUserRatingView;

@interface SUReviewsButton : SUGradientButton {
    struct CGSize { 
        float width; 
        float height; 
    SUUserRatingView *_ratingsView;
    float _titleRightPadding;
    } _titleSize;
    float _userRating;
    NSInteger _userRatingCount;
    NSString *_userRatingCountString;
}

@property(retain) NSString *userRatingCountString;
@property float userRating;
@property NSInteger userRatingCount;

- (void)dealloc;
- (void)drawButtonPart:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (void)setUserRatingCount:(NSInteger)arg1;
- (void)setUserRatingCountString:(id)arg1;
- (float)userRating;
- (NSInteger)userRatingCount;
- (id)userRatingCountString;

@end
