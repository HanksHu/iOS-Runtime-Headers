/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOperationProgress, NSError;

@interface ISDownloadStatus : NSObject <NSCoding, NSCopying> {
    unsigned int _failed : 1;
    unsigned int _paused : 1;
    NSError *_error;
    ISOperationProgress *_progress;
}

@property(retain) NSError *error;
@property(retain) ISOperationProgress *progress;
@property(getter=isFailed) BOOL failed;
@property(getter=isPaused) BOOL paused;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFailed;
- (BOOL)isPaused;
- (id)progress;
- (void)setError:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setProgress:(id)arg1;

@end
