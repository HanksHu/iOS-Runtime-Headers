/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DATaskManager, NSData, NSMutableDictionary;

@interface SubCalAccount : DAAccount {
    NSMutableDictionary *_consumers;
    DATaskManager *_taskManager;
    NSData *_tmpICSData;
}

@property(retain) NSMutableDictionary *consumers;
@property(retain) NSDictionary *externalRepresentation;
@property(retain,readonly) NSString *scheduleIdentifier;
@property(retain,readonly) NSURL *subscriptionURL;
@property(retain) NSString *syncId;
@property BOOL shouldRemoveAlarms;
@property NSInteger subCalAccountVersion;

+ (Class)accountClass;
+ (Class)clientClass;
+ (id)defaultProperties;
+ (id)supportedDataclasses;

- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2;
- (id)_tmpICSCalendarPath;
- (BOOL)_upgradeSelfFromVersion:(NSInteger)arg1 superClassUpgraded:(BOOL)arg2 accountManager:(id)arg3;
- (void)checkValidityWithConsumer:(id)arg1;
- (void)clearTmpICSData;
- (id)consumerForTask:(id)arg1;
- (id)consumers;
- (void)dealloc;
- (id)externalRepresentation;
- (id)host;
- (NSInteger)port;
- (void)quickValidate:(id)arg1;
- (void)refreshAllCalendars;
- (void)removeConsumerForTask:(id)arg1;
- (void)saveTmpICSData;
- (id)scheduleIdentifier;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)setConsumers:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(NSInteger)arg1;
- (void)setShouldRemoveAlarms:(BOOL)arg1;
- (void)setSubCalAccountVersion:(NSInteger)arg1;
- (void)setSyncId:(id)arg1;
- (void)setTmpICSData:(id)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)shouldRemoveAlarms;
- (NSInteger)subCalAccountVersion;
- (BOOL)subCalDATask:(id)arg1 shouldAllowTrust:(struct __SecTrust { }*)arg2 forHost:(id)arg3;
- (void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4;
- (id)subscriptionURL;
- (BOOL)supportsAccountType:(NSInteger)arg1;
- (id)syncId;
- (id)taskManager;
- (id)tmpICSData;
- (BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)arg1;
- (id)urlForKeychain;
- (BOOL)useSSL;
- (id)username;

@end
