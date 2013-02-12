/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDateTime, GMMDirectionsIconRequest, GMMMapInfo, NSMutableArray;

@interface GMMDirectionsRequest : PBRequest {
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _hasIncludeStructuredInstructions;
    BOOL _hasRequestedResultType;
    BOOL _hasRequestedTimeType;
    BOOL _hasResultPageOffset;
    BOOL _hasReturnMultipleRoutes;
    BOOL _hasTripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    BOOL _includeStreetViewPanoId;
    BOOL _includeStructuredInstructions;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_modes;
    NSMutableArray *_optionss;
    GMMDateTime *_requestedDateTime;
    NSInteger _requestedResultType;
    NSInteger _requestedTimeType;
    NSInteger _resultPageOffset;
    BOOL _returnMultipleRoutes;
    NSInteger _tripMaxCount;
    NSMutableArray *_waypoints;
}

@property(retain) GMMDirectionsIconRequest *iconRequest;
@property(retain) GMMMapInfo *mapViewport;
@property(retain) NSMutableArray *modes;
@property(retain) NSMutableArray *optionss;
@property(retain) GMMDateTime *requestedDateTime;
@property(retain) NSMutableArray *waypoints;
@property BOOL addStepNoticesToInstructionText;
@property(readonly) BOOL hasAddStepNoticesToInstructionText;
@property(readonly) BOOL hasIconRequest;
@property(readonly) BOOL hasIncludeStreetViewPanoId;
@property(readonly) BOOL hasIncludeStructuredInstructions;
@property(readonly) BOOL hasMapViewport;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) BOOL hasRequestedResultType;
@property(readonly) BOOL hasRequestedTimeType;
@property(readonly) BOOL hasResultPageOffset;
@property(readonly) BOOL hasReturnMultipleRoutes;
@property(readonly) BOOL hasTripMaxCount;
@property BOOL includeStreetViewPanoId;
@property BOOL includeStructuredInstructions;
@property(readonly) NSInteger modesCount;
@property(readonly) NSInteger optionssCount;
@property NSInteger requestedResultType;
@property NSInteger requestedTimeType;
@property NSInteger resultPageOffset;
@property BOOL returnMultipleRoutes;
@property NSInteger tripMaxCount;
@property(readonly) NSInteger waypointsCount;

- (void)addMode:(NSInteger)arg1;
- (void)addOptions:(id)arg1;
- (BOOL)addStepNoticesToInstructionText;
- (void)addWaypoint:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasAddStepNoticesToInstructionText;
- (BOOL)hasIconRequest;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)hasIncludeStructuredInstructions;
- (BOOL)hasMapViewport;
- (BOOL)hasRequestedDateTime;
- (BOOL)hasRequestedResultType;
- (BOOL)hasRequestedTimeType;
- (BOOL)hasResultPageOffset;
- (BOOL)hasReturnMultipleRoutes;
- (BOOL)hasTripMaxCount;
- (id)iconRequest;
- (BOOL)includeStreetViewPanoId;
- (BOOL)includeStructuredInstructions;
- (id)init;
- (id)mapViewport;
- (NSInteger)modeAtIndex:(NSUInteger)arg1;
- (id)modes;
- (NSInteger)modesCount;
- (id)optionsAtIndex:(NSUInteger)arg1;
- (id)optionss;
- (NSInteger)optionssCount;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (id)requestedDateTime;
- (NSInteger)requestedResultType;
- (NSInteger)requestedTimeType;
- (Class)responseClass;
- (NSInteger)resultPageOffset;
- (BOOL)returnMultipleRoutes;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setIconRequest:(id)arg1;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (void)setIncludeStructuredInstructions:(BOOL)arg1;
- (void)setMapViewport:(id)arg1;
- (void)setMode:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setModes:(id)arg1;
- (void)setOptions:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setOptionss:(id)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setRequestedResultType:(NSInteger)arg1;
- (void)setRequestedTimeType:(NSInteger)arg1;
- (void)setResultPageOffset:(NSInteger)arg1;
- (void)setReturnMultipleRoutes:(BOOL)arg1;
- (void)setTripMaxCount:(NSInteger)arg1;
- (void)setWaypoint:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setWaypoints:(id)arg1;
- (NSInteger)tripMaxCount;
- (id)waypointAtIndex:(NSUInteger)arg1;
- (id)waypoints;
- (NSInteger)waypointsCount;
- (void)writeTo:(id)arg1;

@end
