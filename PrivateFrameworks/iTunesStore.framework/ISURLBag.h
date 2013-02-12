/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISURLBag : NSObject {
    NSDictionary *_dictionary;
    double _invalidationTime;
}

@property double invalidationTime;
@property(getter=isValid,readonly) BOOL valid;

+ (id)_copyFallbackContextForContext:(id)arg1;
+ (void)invalidateAllBags;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_writeURLResolutionCacheFile;
- (void)dealloc;
- (id)init;
- (id)initWithRawDictionary:(id)arg1;
- (double)invalidationTime;
- (BOOL)isValid;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (id)sanitizedURLForURL:(id)arg1;
- (void)setInvalidationTime:(double)arg1;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
