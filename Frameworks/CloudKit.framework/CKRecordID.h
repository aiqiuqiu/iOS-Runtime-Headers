/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordID : NSObject <NSCopying, NSSecureCoding> {
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithSqliteRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)recordName;
- (void)setRecordName:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)sqliteRepresentation;
- (id)zoneID;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_itemID;
- (BOOL)brc_itemType;

@end
