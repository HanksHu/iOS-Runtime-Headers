/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSNumber, NSString;

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying> {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
    NSData *_relayConnectionID;
    NSData *_relayTokenAllocRes;
    NSData *_relayTransactionIDAlloc;
    NSNumber *_relayType;
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSData *_selfRelayIP;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSNumber *_selfRelayPort;
}

@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;
@property(copy) NSData * relayConnectionID;
@property(copy) NSData * relayTokenAllocRes;
@property(copy) NSData * relayTransactionIDAlloc;
@property(copy) NSNumber * relayType;
@property(copy) NSData * selfPushToken;
@property(copy) NSData * selfRelayBlob;
@property(copy) NSData * selfRelayIP;
@property(copy) NSData * selfRelayNATIP;
@property(copy) NSNumber * selfRelayNATPort;
@property(copy) NSNumber * selfRelayPort;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)peerID;
- (id)peerPushToken;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (id)relayConnectionID;
- (id)relayTokenAllocRes;
- (id)relayTransactionIDAlloc;
- (id)relayType;
- (id)requiredKeys;
- (id)selfPushToken;
- (id)selfRelayBlob;
- (id)selfRelayIP;
- (id)selfRelayNATIP;
- (id)selfRelayNATPort;
- (id)selfRelayPort;
- (void)setPeerID:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setRelayConnectionID:(id)arg1;
- (void)setRelayTokenAllocRes:(id)arg1;
- (void)setRelayTransactionIDAlloc:(id)arg1;
- (void)setRelayType:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (void)setSelfRelayBlob:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setSelfRelayNATIP:(id)arg1;
- (void)setSelfRelayNATPort:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;

@end