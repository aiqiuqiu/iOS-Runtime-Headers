/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, NSObject<UIDocumentPasswordViewDelegate>, UITextField;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UILabel *_errorLabel;
    UIImageView *_iconView;
    UILabel *_label;
    UITextField *_passwordTextField;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
@property(readonly) UITextField * passwordField;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_iconRectForWidth:(float)arg1;
- (void)_passwordEntered:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithDocumentName:(id)arg1;
- (void)layoutSubviews;
- (id)passwordDelegate;
- (id)passwordField;
- (void)setPasswordDelegate:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end