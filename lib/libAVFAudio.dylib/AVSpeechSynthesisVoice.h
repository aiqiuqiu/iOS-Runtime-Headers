/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSString *language;

+ (id)currentLanguageCode;
+ (void)initialize;
+ (id)speechVoices;
+ (BOOL)supportsSecureCoding;
+ (id)voiceWithLanguage:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
