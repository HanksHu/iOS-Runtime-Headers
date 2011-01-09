/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSString;



@interface GKMediaCodec : NSObject 
{
    unsigned char idTag;
    NSInteger preference;
    NSString *name;
    NSInteger clockRate;
    NSInteger bitRate;
    NSInteger channels;
    NSInteger type;
}

@property(readonly) NSInteger type;
@property(readonly) NSInteger channels;
@property(readonly) NSInteger bitRate;
@property(readonly) NSInteger clockRate;
@property(readonly) NSString *name;
@property(readonly) NSInteger preference;
@property(readonly) unsigned char idTag;

+ (id)muLawCodec;

- (NSInteger)type;
- (id)name;
- (id)parameterForKey:(id)arg1;
- (NSInteger)channels;
- (NSInteger)bitRate;
- (NSInteger)clockRate;
- (NSInteger)preference;
- (unsigned char)idTag;

@end