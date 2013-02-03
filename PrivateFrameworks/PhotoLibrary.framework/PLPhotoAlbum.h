/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLPhotoAlbum : MLAlbum <PLConnectionObjectInteraction> {
    NSUInteger _changeFlags;
    BOOL _deleteWhenEmpty;
    BOOL _isEditable;
    NSInteger _keyPhotoKey;
    NSInteger _kind;
    NSInteger _manualSortOrder;
    NSInteger _primaryKey;
    NSString *_title;
    NSString *_uid;
}

+ (Class)classFromStepData:(struct sqlite3_stmt { }*)arg1;
+ (NSInteger)createTablesForConnection:(id)arg1;
+ (id)photoAlbumWithDefaultValues;

- (id)albumContents;
- (NSUInteger)albumID;
- (NSInteger)albumKind;
- (void)dealloc;
- (void)deleteItemAtIndex:(NSInteger)arg1;
- (void)deleteItemsAtIndexes:(id)arg1;
- (BOOL)deletedWhenEmpty;
- (NSInteger)indexOfPosterImage;
- (id)initWithStepData:(struct sqlite3_stmt { }*)arg1;
- (BOOL)isEditable;
- (BOOL)isSavedToDatabase;
- (NSInteger)keyPhotoKey;
- (NSInteger)kind;
- (NSInteger)manualSortOrder;
- (id)name;
- (NSInteger)primaryKey;
- (NSInteger)saveToConnection:(id)arg1;
- (void)setDeletedWhenEmpty:(BOOL)arg1;
- (void)setIsEditable:(BOOL)arg1;
- (void)setKeyPhotoKey:(NSInteger)arg1;
- (void)setKind:(NSInteger)arg1;
- (void)setManualSortOrder:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setSpecialPrimaryKey:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)shouldSortImagesByDate;
- (id)slideshowSettings;
- (id)title;
- (id)uid;
- (id)uuid;

@end