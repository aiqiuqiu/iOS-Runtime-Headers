/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateExtendedInputTextField, UIKeyboardCandidateArrowButton;

@interface UIKeyboardCandidateExtendedInputView : UIView  {
    UIKeyboardCandidateExtendedInputTextField *_textField;
    UIKeyboardCandidateArrowButton *_arrowButton;
}

@property(retain) UIKeyboardCandidateExtendedInputTextField * textField;
@property(retain) UIKeyboardCandidateArrowButton * arrowButton;


- (void)dealloc;
- (void)setArrowButton:(id)arg1;
- (void)layoutArrowButton;
- (void)setTextField:(id)arg1;
- (id)arrowButton;
- (id)textField;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end