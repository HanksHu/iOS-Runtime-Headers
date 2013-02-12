/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDate, NSLock;

@interface ISITunesSyncHelper : NSObject <ISSingleton> {
    unsigned int _syncRequested : 1;
    unsigned int _waitingForLock : 1;
    NSInteger _blockSyncCount;
    BOOL _checkedForPurchases;
    NSLock *_lock;
    NSDate *_preSyncCheckForPurchasesDate;
}

@property(getter=isBlockingSync,readonly) BOOL blockingSync;
@property BOOL iTunesCheckedForPurchasesDuringSync;
@property(readonly) BOOL iTunesIsSynching;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)_copyLastCheckForPurchasesDate;
- (void)_syncDidEndWithReason:(NSInteger)arg1;
- (void)_unblockSyncIfPossible;
- (void)beginBlockingSync;
- (void)dealloc;
- (void)endBlockingSync;
- (BOOL)iTunesCheckedForPurchasesDuringSync;
- (BOOL)iTunesIsSynching;
- (void)iTunesSyncHasBeenBlocked;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (void)iTunesSyncRequestedStart;
- (id)init;
- (BOOL)isBlockingSync;
- (void)setITunesCheckedForPurchasesDuringSync:(BOOL)arg1;

@end
