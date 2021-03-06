/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEntryViewDelegate <NSObject>

@required

- (BOOL)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;

@optional

- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;

@end
