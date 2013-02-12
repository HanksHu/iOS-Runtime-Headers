/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSURL;

@interface ISReview : NSObject <NSCopying> {
    NSString *_body;
    NSUInteger _bodyMaxLength;
    BOOL _metadataIsValid;
    NSString *_nickname;
    NSUInteger _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    NSUInteger _titleMaxLength;
}

@property(retain) NSString *body;
@property(retain) NSString *nickname;
@property(retain) NSURL *submitURL;
@property(retain) NSString *title;
@property NSUInteger bodyMaxLength;
@property(readonly) BOOL metadataIsValid;
@property NSUInteger nicknameMaxLength;
@property float rating;
@property NSUInteger titleMaxLength;

- (id)body;
- (NSUInteger)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)loadFromDictionary:(id)arg1;
- (BOOL)metadataIsValid;
- (id)nickname;
- (NSUInteger)nicknameMaxLength;
- (float)rating;
- (void)setBody:(id)arg1;
- (void)setBodyMaxLength:(NSUInteger)arg1;
- (void)setNickname:(id)arg1;
- (void)setNicknameMaxLength:(NSUInteger)arg1;
- (void)setRating:(float)arg1;
- (void)setSubmitURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLength:(NSUInteger)arg1;
- (id)submitURL;
- (id)title;
- (NSUInteger)titleMaxLength;

@end
