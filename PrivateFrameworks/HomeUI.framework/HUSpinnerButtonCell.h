/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol> {
    BOOL  _showSpinner;
    UIActivityIndicatorView * _spinner;
    BOOL  _useFullWidthSeparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFullWidthSeparator;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (void)createSpinner;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShowSpinner:(BOOL)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUseFullWidthSeparator:(BOOL)arg1;
- (BOOL)showSpinner;
- (id)spinner;
- (BOOL)useFullWidthSeparator;

@end
