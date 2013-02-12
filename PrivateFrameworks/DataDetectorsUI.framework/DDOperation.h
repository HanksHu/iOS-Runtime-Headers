/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSArray, WebFrame;

@interface DDOperation : NSOperation {
    WebFrame *_frame;
    NSInteger _generationNumber;
    BOOL _isCurrentlyUsingTheScanner;
    BOOL _isDiscarded;
    NSInteger _needsLayoutTryCount;
    struct __DDScanQuery { } *_query;
    NSArray *_results;
    NSInteger _tryCount;
    NSUInteger _types;
}

@property(retain) WebFrame *frame;
@property(retain) NSArray *results;
@property NSUInteger detectionTypes;
@property NSInteger generationNumber;
@property BOOL isDiscarded;
@property NSInteger tryCount;

+ (struct __DDScanner { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDLRTable {} *x2; struct __DDLexer {} *x3; struct __DDLookupTable {} *x4; struct __DDCache {} *x5; struct __CFCharacterSet {} *x6; struct __CFCharacterSet {} *x7; struct __DDTokenCache {} *x8; struct __DDLexemCache {} *x9; struct __DDScanQuery {} *x10; struct __DDScanQuery {} *x11; struct __CFArray {} *x12; struct __CFArray {} *x13; NSInteger x14; NSInteger x15; char *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)_sharedScannerForTypes:(NSUInteger)arg1;

- (void)_createScanQueryOnWebThread;
- (void)_setScanQuery:(struct __DDScanQuery { }*)arg1;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (NSUInteger)detectionTypes;
- (id)frame;
- (NSInteger)generationNumber;
- (id)init;
- (BOOL)isDiscarded;
- (void)main;
- (id)results;
- (struct __DDScanQuery { }*)scanQuery;
- (void)setDetectionTypes:(NSUInteger)arg1;
- (void)setFrame:(id)arg1;
- (void)setGenerationNumber:(NSInteger)arg1;
- (void)setIsDiscarded:(BOOL)arg1;
- (void)setResults:(id)arg1;
- (void)setTryCount:(NSInteger)arg1;
- (NSInteger)tryCount;

@end
