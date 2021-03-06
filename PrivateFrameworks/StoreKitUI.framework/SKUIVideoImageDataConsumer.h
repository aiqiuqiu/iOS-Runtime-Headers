/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer {
    unsigned int _allowedOrientations;
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    struct CGSize { 
        float width; 
        float height; 
    } _landscapeSize;
    struct CGSize { 
        float width; 
        float height; 
    } _portraitSize;
}

@property (nonatomic) unsigned int allowedOrientations;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) struct CGSize { float x1; float x2; } landscapeSize;
@property (nonatomic) struct CGSize { float x1; float x2; } portraitSize;

- (void).cxx_destruct;
- (unsigned int)allowedOrientations;
- (id)backgroundColor;
- (id)colorScheme;
- (id)imageForColor:(id)arg1 orientation:(unsigned int)arg2;
- (id)imageForImage:(id)arg1;
- (struct CGSize { float x1; float x2; })landscapeSize;
- (struct CGSize { float x1; float x2; })portraitSize;
- (void)setAllowedOrientations:(unsigned int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setLandscapeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPortraitSize:(struct CGSize { float x1; float x2; })arg1;

@end
