/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKAchievementDescriptionInternal : GKInternalRepresentation {
    NSString *_achievedDescription;
    BOOL _hidden;
    NSDictionary *_icons;
    NSString *_identifier;
    unsigned int _maximumPoints;
    NSString *_title;
    NSString *_unachievedDescription;
}

@property(retain) NSString * achievedDescription;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSDictionary * icons;
@property(retain) NSString * identifier;
@property unsigned int maximumPoints;
@property(retain) NSString * title;
@property(retain) NSString * unachievedDescription;

+ (id)codedPropertyKeys;

- (id)achievedDescription;
- (void)dealloc;
- (id)description;
- (id)icons;
- (id)identifier;
- (BOOL)isHidden;
- (unsigned int)maximumPoints;
- (void)setAchievedDescription:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumPoints:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnachievedDescription:(id)arg1;
- (id)title;
- (id)unachievedDescription;

@end