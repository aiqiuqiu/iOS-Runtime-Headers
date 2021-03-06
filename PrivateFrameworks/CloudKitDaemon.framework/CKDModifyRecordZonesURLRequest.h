/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {
    BOOL _markZonesAsUserPurged;
    NSMutableDictionary *_recordZoneIDByRequestID;
    NSArray *_recordZoneIDsToDelete;
    id /* block */ _recordZoneModifiedBlock;
    NSArray *_recordZonesToSave;
}

@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic, retain) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) id /* block */ recordZoneModifiedBlock;
@property (nonatomic, retain) NSArray *recordZonesToSave;

- (void).cxx_destruct;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (BOOL)markZonesAsUserPurged;
- (int)operationType;
- (id)recordZoneIDByRequestID;
- (id)recordZoneIDsToDelete;
- (id /* block */)recordZoneModifiedBlock;
- (id)recordZonesToSave;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setMarkZonesAsUserPurged:(BOOL)arg1;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZoneModifiedBlock:(id /* block */)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (id)zoneIDsToLock;

@end
