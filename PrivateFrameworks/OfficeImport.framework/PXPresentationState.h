/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OCCancelDelegate>, OAXDrawingState, OAVState, OAXTableStyleCache, PDPresentation, NSMutableDictionary;



@interface PXPresentationState : NSObject 
{
    NSMutableDictionary *mModelObjects;
    OAXDrawingState *mOfficeArtState;
    OAVState *mOAVState;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mSlideURLToIndexMap;
    PDPresentation *mTgtPresentation;
    <OCCancelDelegate> *mCancel;
}

@property(retain) <OCCancelDelegate> *cancelDelegate;


- (id)tgtPresentation;
- (void)setCancelDelegate:(id)arg1;
- (void)setTgtPresentation:(id)arg1;
- (void)resetOfficeArtState;
- (void)setSlideIndex:(NSInteger)arg1 forSlideURL:(id)arg2;
- (NSInteger)slideIndexForSlideURL:(id)arg1;
- (id)modelObjectForLocation:(id)arg1;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (id)cancelDelegate;
- (id)officeArtState;
- (id)tableStyleCache;
- (id)oavState;
- (id)init;
- (void)dealloc;
- (BOOL)isCancelled;

@end