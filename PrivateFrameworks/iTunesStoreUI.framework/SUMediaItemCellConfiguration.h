/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } artworkSize;
@property (nonatomic, readonly) int mediaIconType;
@property (nonatomic, readonly) BOOL showContentRating;

+ (id)copyDefaultContext;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_ratingBorderInsets;
- (float)alphaForImageAtIndex:(unsigned int)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned int)arg3;
- (float)alphaForLabelAtIndex:(unsigned int)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned int)arg3;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)copyImageDataProvider;
- (void)drawWithModifiers:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (int)mediaIconType;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (BOOL)showContentRating;

@end
