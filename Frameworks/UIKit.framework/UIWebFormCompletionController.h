/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMElement, DOMHTMLInputElement, NSMutableDictionary, NSString;

@interface UIWebFormCompletionController : NSObject {
    DOMHTMLInputElement *_element;
    NSString *_fieldName;
    DOMElement *_form;
    BOOL _isLoginForm;
    NSMutableDictionary *_items;
}

+ (id)_abMultiValuesForPerson:(void*)arg1 property:(id)arg2 property:(NSInteger)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abValuesForPerson:(void*)arg1 property:(id)arg2 propertyID:(NSInteger)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abValuesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
+ (void)_addABMatchesToArray:(id)arg1 forString:(id)arg2 atABPointer:(id)arg3;
+ (void)_addPreviousDataMatchesToArray:(id)arg1 forString:(id)arg2 frame:(id)arg3 fieldName:(id)arg4;
+ (void)_appWillTerminate:(id)arg1;
+ (BOOL)_autoFillPasswordInFrame:(id)arg1 autoFiller:(id)arg2;
+ (id)_credentialMatchesForString:(id)arg1 frame:(id)arg2;
+ (id)_cryptData:(id)arg1 encode:(BOOL)arg2;
+ (BOOL)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitLoginForm:(id)arg3 withValues:(id)arg4 autoFiller:(id)arg5 submissionListener:(id)arg6;
+ (void)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitRegularForm:(id)arg3 withValues:(id)arg4;
+ (NSUInteger)_indexOfMarkerInMatches:(id)arg1 matchingABMatch:(id)arg2;
+ (void)_loadCompletionDB;
+ (id)_matchesForString:(id)arg1 frame:(id)arg2 fieldName:(id)arg3 control:(id)arg4;
+ (void)_pruneCompletionDB;
+ (void)_reapABMarker:(id)arg1 forFrame:(id)arg2 fieldName:(id)arg3;
+ (void)_saveCompletionDB:(id)arg1;
+ (void)_saveCompletionDBSoon;
+ (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
+ (BOOL)addressBookCompletionEnabled;
+ (BOOL)autoFillInWebView:(id)arg1;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (void)clearPreviousDataDatabase;
+ (void)clearPreviousDataForDomain:(id)arg1;
+ (BOOL)credentialIsNeverSaveMarker:(id)arg1;
+ (id)currentFormInFrame:(id)arg1;
+ (id)currentOrFirstFrameAndForm:(id*)arg1 inWebView:(id)arg2;
+ (id)domainsWithPreviousData;
+ (id)firstFormInFrame:(id)arg1;
+ (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
+ (BOOL)passwordCompletionEnabled;
+ (id)preFillForm:(id)arg1 inFrame:(id)arg2;
+ (void)preFillInWebFrame:(id)arg1;
+ (BOOL)previousDataCompletionEnabled;
+ (BOOL)shouldSaveFormData;
+ (BOOL)shouldSaveUsernamesAndPasswords;

- (void)abortCompletion;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)autoFillCommand:(id)arg1;
- (void)autoFillWithElementValue;
- (id)computeListItemsAndInitiallySelectedIndex:(NSUInteger*)arg1 withQueryString:(id)arg2;
- (BOOL)currentTextChangeIsProgrammatic;
- (void)dealloc;
- (BOOL)doSourceFieldCommandBySelector:(SEL)arg1;
- (BOOL)hasCurrentSuggestions;
- (id)initWithDOMElement:(id)arg1 webFrame:(id)arg2;
- (BOOL)leavingFieldReflectsSelectedListItem;
- (id)queryString;
- (void)reflectFinalSelectedListItem:(id)arg1;
- (void)reflectSelectedListItem:(id)arg1;
- (id)reflectedStringForActivatedListItem:(id)arg1;
- (id)reflectedStringForHighlightedListItem:(id)arg1;
- (BOOL)returnPerformsActionWhenShowingList;
- (id)selectedListItem:(id)arg1;
- (BOOL)shouldSuppressAutocomplete;
- (BOOL)showsListForSingleListItem;
- (void)sourceFieldTextDidChange;
- (void)sourceFieldTextDidEndEditing;
- (struct { id x1; NSUInteger x2; })suggestionsForString:(id)arg1 inputIndex:(NSUInteger)arg2;
- (BOOL)textField:(id)arg1 shouldHandleEvent:(struct __GSEvent { }*)arg2;
- (id)unsortedListItemsWithQueryString:(id)arg1;
- (id)webFrame;

@end
