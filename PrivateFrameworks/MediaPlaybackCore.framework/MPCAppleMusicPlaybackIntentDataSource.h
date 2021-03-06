/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAppleMusicPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource> {
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)populateContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)populateRepresentationsForItem:(id)arg1 completionHandler:(id /* block */)arg2;

@end
