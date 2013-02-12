/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

@class NSError;

@interface JSON : NSObject {
    NSUInteger depth;
    NSError **error;
    NSUInteger options;
}

+ (id)dataWithObject:(id)arg1 options:(NSUInteger)arg2 encoding:(NSUInteger)arg3 error:(id*)arg4;
+ (id)dataWithObject:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
+ (id)objectWithData:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
+ (id)stringWithObject:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;

- (id)initWithOptions:(NSUInteger)arg1 error:(id*)arg2;
- (void)setErrorWithCode:(NSUInteger)arg1 description:(id)arg2;
- (void)setErrorWithCode:(NSUInteger)arg1 string:(id)arg2;

@end
