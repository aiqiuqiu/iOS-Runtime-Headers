/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {
    BOOL _createSandbox;
    NSData *_scope;
    NSURL *_url;
}

@property (nonatomic) BOOL createSandbox;
@property (nonatomic, copy) NSData *scope;
@property (nonatomic, copy) NSURL *url;

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2;

- (BOOL)createSandbox;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scope;
- (void)setCreateSandbox:(BOOL)arg1;
- (void)setScope:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
