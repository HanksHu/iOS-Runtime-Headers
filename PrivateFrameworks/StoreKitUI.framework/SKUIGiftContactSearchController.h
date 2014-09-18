/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIGiftContactSearchDelegate>, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSNumber, NSString, UITableView, UIView;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {
    void *_addressBook;
    <SKUIGiftContactSearchDelegate> *_delegate;
    NSArray *_results;
    MFContactsSearchResultsModel *_resultsModel;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property(copy,readonly) NSString * debugDescription;
@property <SKUIGiftContactSearchDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) long long numberOfResults;
@property(readonly) UIView * searchResultsView;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSearchWithResults:(id)arg1;
- (void)_setResults:(id)arg1;
- (id)_tableView;
- (void)beganNetworkActivity;
- (bool)cancelSearch;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (long long)numberOfResults;
- (void)resetSearch;
- (void)searchForText:(id)arg1;
- (id)searchResultsView;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end