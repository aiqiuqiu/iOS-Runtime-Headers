/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    CADisplay *_caDisplay;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceBounds;
    float _scale;
    unsigned int _seed;
    int _tags;
    unsigned int _type;
}

@property (nonatomic, readonly, retain) CADisplay *caDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float orientation;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } referenceBounds;
@property (nonatomic) float scale;
@property (nonatomic) unsigned int seed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tags;
@property (nonatomic, readonly) unsigned int type;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_nameForDisplayType;
- (unsigned int)_typeFromTags:(unsigned int)arg1;
- (id)caDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 seed:(unsigned int)arg3 tags:(int)arg4 scale:(float)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isAirPlayDisplay;
- (BOOL)isCarDisplay;
- (BOOL)isConnected;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExternal;
- (BOOL)isHiddenDisplay;
- (BOOL)isMainDisplay;
- (BOOL)isMusicOnlyDisplay;
- (BOOL)isWatchOnlyDisplay;
- (BOOL)isiPodOnlyDisplay;
- (float)orientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })referenceBounds;
- (float)scale;
- (unsigned int)seed;
- (void)setConnected:(BOOL)arg1;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScale:(float)arg1;
- (void)setSeed:(unsigned int)arg1;
- (int)tags;
- (unsigned int)type;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)_screen;

@end
