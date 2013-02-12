/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class AKDispatchQueue, Protocol;

@interface AKMailbox : NSProxy {
    AKDispatchQueue *_dispatchQueue;
    Protocol *_privateProtocol;
    Protocol *_publicProtocol;
    union qed_queue_u { } *_queue;
    id _target;
}

@property id target;

+ (id)mailboxWithTarget:(id)arg1 protocol:(id)arg2;

- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)send;
- (void)setDispatchQueue:(id)arg1;
- (void)setPrivateMessages:(id)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)swapCurrentTarget:(id)arg1 forNewTarget:(id)arg2;
- (id)target;

@end
