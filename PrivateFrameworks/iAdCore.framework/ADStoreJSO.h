/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <ADJSODelegate>, UIAlertView, NSMutableArray, NSTimer, SSItemOffer, NSString, NSMutableDictionary, NSNumber;

@interface ADStoreJSO : ADJavaScriptObject  {
    NSNumber *_currentPurchaseAdamId;
    SSItemOffer *_currentPurchaseOffer;
    NSMutableDictionary *_registeredItems;
    NSMutableDictionary *_expirationTimers;
    NSMutableArray *_storeRequests;
    NSTimer *_renewalTimer;
    UIAlertView *_purchaseConfirmationAlertView;
    <ADJSODelegate> *_delegate;
    BOOL _privilegedClient;
    BOOL _adManagesPurchaseFlow;
    NSString *_iBooksBuyParameters;
    BOOL _hasRegisteredItems;
}

@property BOOL hasRegisteredItems;
@property(copy) NSString * iBooksBuyParameters;
@property BOOL adManagesPurchaseFlow;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property <ADJSODelegate> * delegate;
@property(retain) UIAlertView * purchaseConfirmationAlertView;
@property(retain) NSTimer * renewalTimer;
@property(retain) NSMutableArray * storeRequests;
@property(retain) NSMutableDictionary * expirationTimers;
@property(retain) NSMutableDictionary * registeredItems;
@property(retain) SSItemOffer * currentPurchaseOffer;
@property(copy) NSNumber * currentPurchaseAdamId;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptSelectors;

- (id)renewalTimer;
- (id)purchaseConfirmationAlertView;
- (BOOL)hasRegisteredItems;
- (void)setRenewalTimer:(id)arg1;
- (void)_lookupRegisteredItems;
- (void)registerItemsForPurchase:(id)arg1;
- (void)lookupItemWithID:(id)arg1 listener:(id)arg2;
- (void)_updateTimersForItem:(id)arg1 validUntil:(double)arg2;
- (void)_validateItemMetadata;
- (void)itemMetadataExpired:(id)arg1;
- (void)handleFailedAdamId:(id)arg1;
- (void)_purchaseCurrentItemIncludingiBooksApp:(BOOL)arg1;
- (void)_checkForiBooksApp;
- (void)purchaseItemWithID:(id)arg1 offerIdentifier:(id)arg2 listener:(id)arg3;
- (void)setHasRegisteredItems:(BOOL)arg1;
- (id)iBooksBuyParameters;
- (void)setIBooksBuyParameters:(id)arg1;
- (BOOL)isPrivilegedClient;
- (void)setPurchaseConfirmationAlertView:(id)arg1;
- (id)storeRequests;
- (void)setStoreRequests:(id)arg1;
- (id)expirationTimers;
- (void)setExpirationTimers:(id)arg1;
- (id)registeredItems;
- (void)setRegisteredItems:(id)arg1;
- (id)currentPurchaseOffer;
- (void)setCurrentPurchaseOffer:(id)arg1;
- (id)currentPurchaseAdamId;
- (void)setCurrentPurchaseAdamId:(id)arg1;
- (void)invalidateMetadataTimers;
- (BOOL)adManagesPurchaseFlow;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (void)setPrivilegedClient:(BOOL)arg1;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end