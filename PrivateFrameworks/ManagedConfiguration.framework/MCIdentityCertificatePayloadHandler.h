/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSData, NSString;

@interface MCIdentityCertificatePayloadHandler : MCCertificatePayloadHandler {
    NSData *_p12Data;
    NSString *_password;
    BOOL _passwordIsValid;
    NSArray *_persistentID;
    NSString *_target_device;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (BOOL)shouldValidateCommonAttributes;

- (struct __SecCertificate { }*)certificateCopyFromKeychain;
- (id)certificateData;
- (id)certificateMD5;
- (void)clearPassword;
- (void)dealloc;
- (id)descriptionForPrompt;
- (id)errorForKeychainError:(long)arg1;
- (id)expirationDate;
- (id)incorrectPasswordError;
- (id)initWithPayload:(id)arg1;
- (id)installPayload;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (void)neuteredPayloadDictionaryCopy:(id)arg1;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)persistentID;
- (id)preparePayload;
- (id)removePayloadWithRoot:(id)arg1;
- (void)setNotValidatedPassword:(id)arg1;
- (void)setUserPromptedValues:(id)arg1;
- (id)userPromptValues;

@end
