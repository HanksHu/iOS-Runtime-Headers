/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLHeading : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) NSString *compactDescription;
@property(readonly) NSDate *timestamp;
@property(readonly) BOOL hasGeomagneticVector;
@property(readonly) double heading;
@property(readonly) double headingAccuracy;
@property(readonly) double magneticHeading;
@property(readonly) double trueHeading;
@property(readonly) double x;
@property(readonly) double y;
@property(readonly) double z;

- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasGeomagneticVector;
- (double)heading;
- (double)headingAccuracy;
- (id)initWithClientHeading:(struct { double x1; double x2; double x3; NSInteger x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;
- (double)magneticHeading;
- (id)shortDescription;
- (id)timestamp;
- (double)trueHeading;
- (double)x;
- (double)y;
- (double)z;

@end
