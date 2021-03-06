/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface _NACIDSMessageRecord : NSObject {
    PBCodable * _message;
    NSString * _queueOne;
    double  _timeout;
    int  _type;
}

@property (nonatomic, retain) PBCodable *message;
@property (nonatomic, copy) NSString *queueOne;
@property (nonatomic) double timeout;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)message;
- (id)queueOne;
- (void)setMessage:(id)arg1;
- (void)setQueueOne:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setType:(int)arg1;
- (double)timeout;
- (int)type;

@end
