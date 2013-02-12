/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSDictionary, NSMutableArray;

@interface SimpleMoveResponseConsumer : DAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    MFError *_error;
    NSMutableArray *failedMessages;
    NSDictionary *messagesByMessageID;
}

@property(retain) MFError *error;

- (void)actionFailed:(NSInteger)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)error;
- (void)resultsForMessageMove:(id)arg1;
- (void)setError:(id)arg1;

@end
