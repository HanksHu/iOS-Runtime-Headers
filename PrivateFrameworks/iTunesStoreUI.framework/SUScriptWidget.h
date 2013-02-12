/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebView, WebScriptObject;

@interface SUScriptWidget : NSObject {
    WebScriptObject *_scriptObject;
    NSInteger _type;
    SUWebView *_webView;
}

@property(readonly) NSString *DOMIdentifier;
@property(readonly) WebScriptObject *scriptObject;
@property SUWebView *webView;
@property(readonly) NSInteger type;

- (id)DOMIdentifier;
- (void)dealloc;
- (id)initWithScriptObject:(id)arg1;
- (void)performAction;
- (id)scriptObject;
- (void)setWebView:(id)arg1;
- (void)sizeDidChangeToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeWillChangeToSize:(struct CGSize { float x1; float x2; })arg1 withDuration:(float)arg2;
- (NSInteger)type;
- (id)webView;

@end
