/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPStoreCompletionOffering, UILabel, UIButton, IUStoreOfferDownloadActionConfiguration, IUStoreOfferVariantSegmentedControl, IUMediaDataSource, <IUiPadSeasonOfferTableFooterViewDelegate>;

@interface IUiPadSeasonOfferTableFooterView : UIView  {
    MPStoreCompletionOffering *_storeCompletionOffering;
    IUStoreOfferDownloadActionConfiguration *_downloadAction;
    UIButton *_showCompletedSeasonButton;
    UILabel *_episodesAvailableLabel;
    UILabel *_completeMySeasonLabel;
    UILabel *_originalPriceLabel;
    UIButton *_downloadButton;
    IUMediaDataSource *_dataSource;
    BOOL _showingMissingItems;
    BOOL _variantSegmentedControlActionInProgress;
    IUStoreOfferVariantSegmentedControl *_variantSegmentedControl;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _downloadButtonOriginalFrame;
    <IUiPadSeasonOfferTableFooterViewDelegate> *_delegate;
}

@property(readonly) BOOL showingMissingItems;
@property <IUiPadSeasonOfferTableFooterViewDelegate> * delegate;
@property(retain) IUMediaDataSource * dataSource;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)dataSource;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showingMissingItems;
- (void)_offerSegmentViewAction:(id)arg1;
- (void)_showMissingItemsButtonAction:(id)arg1;
- (id)_newBuyLabel:(BOOL)arg1;
- (id)_newTitleLabel:(BOOL)arg1;
- (void)_purchaseButtonPressedAction:(id)arg1;
- (void)_reloadDownloadAction;
- (BOOL)_shouldShowOfferButtonOrLabel;
- (id)initWithStoreCompletionOffering:(id)arg1 showingMissingItems:(BOOL)arg2 offerVariant:(int)arg3;

@end