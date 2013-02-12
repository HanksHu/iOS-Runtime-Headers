/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class ADCrashLogStore, ADDataStore, ADKeyStore;

@interface AggregateDictionary : NSObject <ADDataStoreConsumer> {
    BOOL _crashLogCopyingEnabled;
    ADCrashLogStore *_crashLogStore;
    ADDataStore *_dataStore;
    ADKeyStore *_keyStore;
    NSUInteger _messageCount;
}

+ (void)start;
+ (void)startOnBackgroundThread;

- (void)_addOrSubtractMessageReceived:(id)arg1 userInfo:(id)arg2 addOrSubtract:(BOOL)arg3;
- (void)_addScalar:(NSInteger)arg1 toKey:(id)arg2 useCurrentValue:(BOOL)arg3;
- (id)_argumentsFromMessage:(id)arg1;
- (void)_initializeDistribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 forDouble:(double)arg2;
- (id)_keyFromMessage:(id)arg1;
- (void)_messageWasReceived:(id)arg1;
- (void)_pushDouble:(double)arg1 ontoDistribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg2;
- (void)_pushDouble:(double)arg1 ontoKey:(id)arg2 useCurrentValue:(BOOL)arg3;
- (void)_registerForMessagesWithCenter:(id)arg1;
- (void)_significantTimeChanged;
- (void)addMessageReceived:(id)arg1 userInfo:(id)arg2;
- (void)clearDistributionMessageReceived:(id)arg1 userInfo:(id)arg2;
- (void)clearScalarMessageReceived:(id)arg1 userInfo:(id)arg2;
- (id)commitMessageReceived:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)distributionReceived:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 withDaysSince1970:(NSInteger)arg2 forKey:(id)arg3;
- (id)init;
- (void)pushMessageReceived:(id)arg1 userInfo:(id)arg2;
- (void)scalarReceived:(NSInteger)arg1 withDaysSince1970:(NSInteger)arg2 forKey:(id)arg3;
- (void)setValueForDistributionMessageReceived:(id)arg1 userInfo:(id)arg2;
- (void)setValueForScalarMessageReceived:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldCancelQuery;
- (void)subtractMessageReceived:(id)arg1 userInfo:(id)arg2;

@end
