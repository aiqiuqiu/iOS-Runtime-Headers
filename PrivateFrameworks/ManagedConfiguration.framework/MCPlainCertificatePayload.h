/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload  {
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

@property(readonly) NSString * password;
@property(readonly) NSData * certificateData;
@property(readonly) int dataEncoding;
@property(readonly) NSString * certificateFileName;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)password;
- (void)dealloc;
- (id)description;
- (struct __SecCertificate { }*)copyCertificate;
- (int)dataEncoding;
- (id)certificateFileName;
- (BOOL)isIdentity;
- (BOOL)isSigned;
- (id)persistentResourceID;
- (id)installationWarnings;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)certificateData;

@end