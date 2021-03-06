/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIFeedbackManager : NSObject <SearchUIFeedbackDelegate, SearchUIFeedbackDelegatePrivate, _MKPlaceViewControllerFeedbackDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)cardViewDidDisappearForReason:(unsigned int)arg1;
+ (void)didAppearFromSource:(unsigned int)arg1;
+ (void)didAppendLateSections:(id)arg1;
+ (void)didClearInputForReason:(unsigned int)arg1;
+ (void)didDisappearWithReason:(unsigned int)arg1;
+ (void)didEndSearch:(id)arg1;
+ (void)didEngageResult:(id)arg1 forReason:(unsigned int)arg2 withDestination:(unsigned int)arg3;
+ (void)didEngageResultWithFeedback:(id)arg1;
+ (void)didPerformSearchOnSuggestion:(id)arg1;
+ (void)didRankSections:(id)arg1;
+ (void)didSearchInAppForSection:(id)arg1;
+ (void)didShowMoreForSection:(id)arg1 showMore:(BOOL)arg2;
+ (id)didStartSearch:(id)arg1 whyQuery:(unsigned int)arg2 queryIdent:(unsigned long long)arg3;
+ (void)resultsDidBecomeVisible:(id)arg1 why:(unsigned int)arg2;
+ (void)sectionHeaderDidBecomeVisible:(id)arg1 headerType:(unsigned int)arg2;
+ (id)sharedManager;
+ (void)suggestionsDidBecomeVisible:(id)arg1;

- (void)didEngageActionItem:(id)arg1 actionPerformed:(BOOL)arg2;
- (void)didGradeResultRelevancy:(id)arg1;
- (BOOL)didHandleCardSectionEngagement:(id)arg1;
- (void)didPopResult:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;

@end
