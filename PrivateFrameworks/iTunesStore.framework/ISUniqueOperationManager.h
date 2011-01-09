/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISUniqueOperationContext, NSMutableArray, NSLock;



@interface ISUniqueOperationManager : NSObject <ISSingleton>
{
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)checkInOperation:(id)arg1;
- (void)checkOutOperation:(id)arg1;
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;
- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;
- (id)_activeContext;
- (id)_contextForOperation:(id)arg1;

@end