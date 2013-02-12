/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVCacheManager, MobileCalDAVAccount, MobileCalDAVCalendar;

@interface CalDAVCollectionRefreshOperation : AYOperation {
    MobileCalDAVAccount *_account;
    CalDAVCacheManager *_cache;
    MobileCalDAVCalendar *_calendar;
    id _delegate;
}

+ (id)propertiesForCollection;
+ (id)propertiesForResources;

- (void)_delegateDeleteResourcesWithFilenames:(id)arg1;
- (void)_delegateDidAbortRefresh;
- (void)_delegateDidCompleteRefresh;
- (void)_delegateProcessError:(id)arg1;
- (void)_delegateProcessResources:(id)arg1;
- (BOOL)_delegateShouldAcceptEntryModification:(id)arg1 isDeleted:(BOOL)arg2;
- (BOOL)_delegateShouldContinueProcessingResources;
- (BOOL)_gets:(id)arg1 error:(id*)arg2;
- (BOOL)_multiget:(id)arg1 error:(id*)arg2;
- (id)account;
- (id)cache;
- (void)dealloc;
- (BOOL)download:(id)arg1 error:(id*)arg2;
- (id)initWithAccount:(id)arg1 calendar:(id)arg2 delegate:(id)arg3;
- (id)listing:(id*)arg1;
- (id)path;
- (id)reconcile:(id)arg1;
- (void)refresh;
- (BOOL)useMultiGet;
- (BOOL)validate:(id)arg1 error:(id*)arg2;

@end
