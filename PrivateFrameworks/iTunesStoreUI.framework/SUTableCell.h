/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPriceButton, SUTableCellContentView, UIColor;

@interface SUTableCell : UITableViewCell {
    struct { 
        NSUInteger index; 
        NSUInteger count; 
    unsigned int _hideHighlight : 1;
    unsigned int _highlightsOnlyContentView : 1;
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    } _position;
    SUPriceButton *_priceButton;
    UIColor *_topBorderColor;
}

@property(retain) UIColor *bottomBorderColor;
@property(retain) SUCellConfiguration *configuration;
@property(retain,readonly) SUPriceButton *priceButton;
@property(retain) UIColor *topBorderColor;
@property NSInteger clipCorners;
@property BOOL drawAsDisabled;
@property BOOL highlightsOnlyContentView;
@property ? position;
@property BOOL showHighlight;
@property BOOL usesSubviews;

- (id)bottomBorderColor;
- (NSInteger)clipCorners;
- (id)configuration;
- (id)copyPurchaseAnimationView;
- (void)dealloc;
- (BOOL)drawAsDisabled;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)highlightsOnlyContentView;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (struct { NSUInteger x1; NSUInteger x2; })position;
- (id)priceButton;
- (void)setBottomBorderColor:(id)arg1;
- (void)setClipCorners:(NSInteger)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightsOnlyContentView:(BOOL)arg1;
- (void)setPosition:(struct { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowHighlight:(BOOL)arg1;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setTopBorderColor:(id)arg1;
- (void)setUsesSubviews:(BOOL)arg1;
- (BOOL)showHighlight;
- (id)topBorderColor;
- (BOOL)usesSubviews;

@end
