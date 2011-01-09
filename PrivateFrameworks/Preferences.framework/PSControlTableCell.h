/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIActivityIndicatorView, NSArray, UIControl, NSDictionary, UIView;



@interface PSControlTableCell : PSTableCell 
{
    UIControl *_control;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_values;
    NSDictionary *_titleDict;
    UIView *_disabledView;
}

+ (void)_initializeSafeCategory;

- (void)setCellEnabled:(BOOL)arg1;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canReload;
- (void)controlChanged:(id)arg1;
- (id)titleLabel;
- (void)setControl:(id)arg1;
- (id)control;
- (void)setValue:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (id)valueLabel;
- (id)accessibilityLabel;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;

@end