/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLChapterTOC;

@interface MLTrackRepSQL : MLTrack {
    MLChapterTOC *_chapterTOC;
}

@property BOOL hasChanges;

- (BOOL)__dbRecordsEqual:(id)arg1;
- (unsigned long long)accountID;
- (id)album;
- (id)albumArtist;
- (id)artist;
- (unsigned long)artworkDBRecordID;
- (unsigned long)audibleDRMGroupID;
- (unsigned long)bpm;
- (id)chapterTOC;
- (id)comments;
- (id)composer;
- (id)contentRatingInfo;
- (NSInteger)customStopTimeInMS;
- (void*)dbRecord;
- (NSInteger)dbRecordID;
- (void)dealloc;
- (double)demoRentalExpirationDate;
- (unsigned long)discNumber;
- (NSInteger)durationInMS;
- (NSUInteger)episodeNumber;
- (id)eqPresetName;
- (id)filePath;
- (void)gaplessHeuristicInfo:(NSUInteger*)arg1 duration:(NSUInteger*)arg2 lastPacketsResync:(NSUInteger*)arg3 encodingDelay:(NSUInteger*)arg4 encodingDrain:(NSUInteger*)arg5;
- (id)genre;
- (unsigned long long)globalID;
- (id)grouping;
- (BOOL)hasChanges;
- (BOOL)hasChapterData;
- (BOOL)hasLastPlayedBookmarkTime;
- (BOOL)hasLyrics;
- (BOOL)hasNominalAmountBeenPlayed;
- (BOOL)hasVideoData;
- (NSUInteger)hash;
- (void)incrementSkipCount;
- (id)infoDescription;
- (id)initWithDBRecord:(void*)arg1;
- (id)initWithTrackContext:(void*)arg1;
- (BOOL)isAudibleAudioBook;
- (BOOL)isCompilationTrack;
- (BOOL)isDemoRental;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTrack:(id)arg1;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isExplicitBasedOnCurrentRestrictions;
- (BOOL)isHidden;
- (BOOL)isITunesU;
- (BOOL)isOTAPurchasedContent;
- (BOOL)isRental;
- (double)lastPlayedBookmarkTimeInSeconds;
- (double)lastPlayedDate;
- (double)lastSkippedDate;
- (id)lyrics;
- (BOOL)markAsDeleted;
- (BOOL)markHidden:(BOOL)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (unsigned long)mediaType;
- (unsigned long)numberOfDiscs;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long long)persistentUID;
- (NSUInteger)playCount;
- (id)podcastDirectStoreURL;
- (id)podcastName;
- (id)podcastURL;
- (BOOL)rating;
- (unsigned long)ratingLevel;
- (void)reallyIncrementPlayCount;
- (double)releaseDate;
- (id)seasonDisplayName;
- (NSUInteger)seasonNumber;
- (id)seriesDisplayName;
- (void)setHasChanges:(BOOL)arg1;
- (void)setLyrics:(id)arg1;
- (void)setRating:(BOOL)arg1;
- (void)setVideoAudioTrackID:(NSUInteger)arg1;
- (void)setVideoSubtitleTrackID:(NSUInteger)arg1;
- (BOOL)shouldBookmarkLastPlayedTime;
- (NSUInteger)skipCount;
- (NSInteger)startTimeInMS;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)title;
- (NSInteger)totalTimeInMS;
- (unsigned long)trackIndexInAlbum;
- (unsigned long)uniqueID;
- (void)updateLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (NSUInteger)videoAudioTrackID;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (NSUInteger)videoSubtitleTrackID;
- (float)volumeAdjustment;
- (float)volumeNormalization;

@end
