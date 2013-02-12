/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class NSArray, NSString;

@interface STMusicRemoteController : NSObject {
    NSInteger _currentSeekDirection;
    NSString *_latestSelectedPlaylistName;
    NSInteger _musicSelection;
    NSArray *_playlists;
    NSArray *_workoutMixes;
}

@property(copy) NSString *latestSelectedPlaylistName;
@property NSInteger musicSelection;
@property(readonly) BOOL shouldControlMusic;

+ (void)clearCachedDatabaseData;
+ (id)sharedMusicController;

- (id)_init;
- (void)_nowPlayingItemChanged:(id)arg1;
- (unsigned long long)_persistentUIDForPlaylistIndex:(NSUInteger)arg1 isWorkoutMix:(BOOL)arg2;
- (void)_releaseRemoteCachedData;
- (void)_startPlaylistAtIndex:(NSUInteger)arg1 isWorkoutMix:(BOOL)arg2;
- (void)_startPlaylistWithPersistentUID:(unsigned long long)arg1;
- (BOOL)beginSeek:(NSInteger)arg1;
- (id)currentSongName;
- (void)dealloc;
- (BOOL)endSeek:(NSInteger)arg1;
- (void)goToNowPlaying;
- (id)init;
- (void)interruptPlaybackForTrackUID:(id)arg1;
- (BOOL)isNowPlaying;
- (id)latestSelectedPlaylistName;
- (NSInteger)musicSelection;
- (void)pause;
- (unsigned long long)persistentUIDForPlaylistIndex:(NSUInteger)arg1;
- (unsigned long long)persistentUIDForWorkoutMixIndex:(NSUInteger)arg1;
- (void)play;
- (id)playlists;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)setLatestSelectedPlaylistName:(id)arg1;
- (void)setMusicSelection:(NSInteger)arg1;
- (BOOL)shouldControlMusic;
- (void)startPlaylistAtIndex:(NSUInteger)arg1;
- (void)startPlaylistWithPersistentUID:(unsigned long long)arg1;
- (void)startShuffleSongs;
- (void)startWorkoutMixAtIndex:(NSUInteger)arg1;
- (void)startWorkoutMixWithPersistentUID:(unsigned long long)arg1;
- (id)workoutMixes;

@end
