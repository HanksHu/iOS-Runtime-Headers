/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock, NSString;

@interface ISDevice : NSObject <ISSingleton> {
    NSUInteger _daemonLaunchCount;
    NSString *_guid;
    NSString *_hardwareModel;
    NSLock *_lock;
    NSString *_productVersion;
    NSInteger _type;
}

@property(retain,readonly) NSString *guid;
@property(retain,readonly) NSString *hardwareModel;
@property(retain) NSString *productVersion;
@property NSInteger type;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_cancelScheduledPowerAssertionRelease:(id)arg1;
- (id)_copyCapabilityValueForKey:(struct __CFString { }*)arg1;
- (void*)_copyDeviceTreeProperty:(id)arg1;
- (id)_copyStringForDeviceTreeProperty:(id)arg1;
- (NSInteger)_deviceTypeForModelString:(id)arg1;
- (BOOL)_isPodcastCapable;
- (BOOL)_releasePowerAssertion:(id)arg1;
- (void)_schedulePowerAssertionRelease:(id)arg1;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2;
- (void)daemonDidLaunch;
- (NSUInteger)daemonLaunchCount;
- (void)daemonWillExitCleanly;
- (void)dealloc;
- (id)guid;
- (id)hardwareModel;
- (BOOL)hasCapability:(NSInteger)arg1;
- (id)init;
- (BOOL)isAnyIPhone;
- (BOOL)isAnyIPod;
- (id)productVersion;
- (BOOL)releasePowerAssertion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (BOOL)takePowerAssertion:(id)arg1;
- (NSInteger)type;

@end
