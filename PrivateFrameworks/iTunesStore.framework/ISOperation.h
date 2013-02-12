/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <ISOperationDelegate>, ISOperation, ISOperationProgress, NSError, NSLock, NSRunLoop, NSString;

@interface ISOperation : NSOperation {
    <ISOperationDelegate> *_delegate;
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    NSString *_powerAssertionIdentifier;
    ISOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    ISOperation *_subOperation;
    BOOL _success;
    NSInteger _threadPriority;
    id _threadSafeDelegate;
}

@property <ISOperationDelegate> *delegate;
@property(retain) NSError *error;
@property(retain) NSRunLoop *operationRunLoop;
@property(retain) ISOperation *parentOperation;
@property(retain) NSString *powerAssertionIdentifier;
@property(readonly) ISOperationProgress *progress;
@property(retain) ISOperation *subOperation;
@property(readonly) NSString *uniqueKey;
@property(readonly) NSInteger progressWeight;
@property BOOL shouldMessageMainThread;
@property BOOL success;
@property NSInteger threadPriority;
@property(readonly) id threadSafeDelegate;

- (void)_failAfterException;
- (void)_main:(BOOL)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_sendSuccessToDelegate;
- (BOOL)_setThreadPriority:(NSInteger)arg1 returningPreviousValue:(NSInteger*)arg2;
- (id)authenticatedAccountDSID;
- (void)cancel;
- (BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)init;
- (BOOL)loadSoftwareMapReturningError:(id*)arg1;
- (BOOL)loadURLBagWithContext:(id)arg1 waitForNetwork:(BOOL)arg2 returningError:(id*)arg3;
- (void)lock;
- (void)main;
- (id)operationRunLoop;
- (id)parentOperation;
- (id)powerAssertionIdentifier;
- (id)progress;
- (NSInteger)progressWeight;
- (void)run:(BOOL)arg1;
- (void)run;
- (long)runRunLoopUntilStopped;
- (BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2;
- (void)sendProgressToDelegate;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOperationRunLoop:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setPowerAssertionIdentifier:(id)arg1;
- (void)setScriptPostOptions:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (void)setSubOperation:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (void)setThreadPriority:(NSInteger)arg1;
- (BOOL)shouldMessageMainThread;
- (void)stopRunLoop;
- (id)subOperation;
- (BOOL)success;
- (NSInteger)threadPriority;
- (id)threadSafeDelegate;
- (id)uniqueKey;
- (void)unlock;

@end
