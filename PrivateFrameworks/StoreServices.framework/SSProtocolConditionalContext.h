/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemLookupBlock;

    NSString *_platformName;
    NSString *_systemVersion;
}

@property(copy) NSString * systemVersion;
@property(copy) NSString * platformName;
@property(copy) id itemLookupBlock;


- (id)systemVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setPlatformName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)platformName;
- (id)itemLookupBlock;
- (void)setItemLookupBlock:(id)arg1;

@end