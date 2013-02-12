/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, VMUMachOHeader;

@interface VMUDyld : NSObject {
    VMUMachOHeader *_dyldMachOHeader;
    NSArray *_machOHeaders;
}

+ (id)dyldWithMachOHeader:(id)arg1 memory:(id)arg2;
+ (id)nativeSharedCachePath;
+ (id)nativeSharedCacheTimestamp;

- (void)dealloc;
- (id)findMachOHeadersInMemory:(id)arg1;
- (id)initWithMachOHeader:(id)arg1 memory:(id)arg2;
- (id)machOHeaders;
- (id)name;

@end
