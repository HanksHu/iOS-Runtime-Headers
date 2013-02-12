/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoView, NSArray, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {
    unsigned int _haveThumbnails : 1;
    unsigned int _videoOutActive : 1;
    UIMovieChapterListView *_chapterListView;
    NSArray *_chapterTimeMarkers;
    NSUInteger _currentMarker;
    float _timeColumnWidth;
    MPVideoView *_videoView;
}

@property(retain) NSArray *chapterTimeMarkers;
@property(retain) MPVideoView *videoView;
@property NSUInteger currentMarkerIndex;
@property float topPadding;
@property BOOL videoOutActive;

- (void)_reloadThumbnails;
- (void)_sizeColumnsToFit;
- (id)chapterTimeMarkers;
- (NSUInteger)currentMarkerIndex;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setCurrentMarker:(NSUInteger)arg1;
- (void)setCurrentMarkerIndex:(NSUInteger)arg1;
- (void)setTopPadding:(float)arg1;
- (void)setVideoOutActive:(BOOL)arg1;
- (void)setVideoView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (float)topPadding;
- (BOOL)videoOutActive;
- (void)videoView:(id)arg1 madeThumbnail:(id)arg2 forTime:(float)arg3;
- (id)videoView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
