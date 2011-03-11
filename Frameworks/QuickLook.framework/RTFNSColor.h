/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface RTFNSColor : NSObject  {
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property float alpha;
@property float blue;
@property float green;
@property float red;

+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCalibratedWhite:(float)arg1 alpha:(float)arg2;

- (id)initWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (float)blue;
- (float)red;
- (float)green;
- (id)init;
- (float)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setAlpha:(float)arg1;
- (id)colorUsingColorSpaceName:(id)arg1;
- (void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (id)initWithCalibratedWhite:(float)arg1 alpha:(float)arg2;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setRed:(float)arg1;

@end