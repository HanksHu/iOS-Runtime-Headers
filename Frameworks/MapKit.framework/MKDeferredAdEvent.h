/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMAdEventReportRequest;

@interface MKDeferredAdEvent : PBCodable {
    GMMAdEventReportRequest *_adRequest;
    BOOL _hadLocation;
    BOOL _hasHadLocation;
}

@property(retain) GMMAdEventReportRequest *adRequest;
@property BOOL hadLocation;
@property(readonly) BOOL hasAdRequest;
@property(readonly) BOOL hasHadLocation;

- (id)adRequest;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hadLocation;
- (BOOL)hasAdRequest;
- (BOOL)hasHadLocation;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setAdRequest:(id)arg1;
- (void)setHadLocation:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
