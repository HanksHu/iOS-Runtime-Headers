/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface LBSPoint : PBCodable {
    NSUInteger _lat_e7;
    NSUInteger _lng_e7;
}

@property NSUInteger lat_e7;
@property NSUInteger lng_e7;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (NSUInteger)lat_e7;
- (NSUInteger)lng_e7;
- (BOOL)readFrom:(id)arg1;
- (void)setLat_e7:(NSUInteger)arg1;
- (void)setLng_e7:(NSUInteger)arg1;
- (void)writeTo:(id)arg1;

@end
