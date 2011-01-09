/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABNewPersonViewControllerDelegate>;



@interface ABNewPersonViewController : UIViewController 
{
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
}

@property <ABNewPersonViewControllerDelegate> *newPersonViewDelegate;
@property void *addressBook;
@property void *displayedPerson;
@property void *parentGroup;
@property(retain) ABGroupWrapper *parentGroupWrapper;
@property(readonly) void *recordForNewPerson;
@property(readonly) ABPersonViewControllerHelper *helper;
@property(retain) <ABStyleProvider> *styleProvider;
@property BOOL savesNewContactOnSuspend;
@property BOOL showsCancelButton;


- (void)cancel:(id)arg1;
- (id)helper;
- (void)updateNavigationButtons;
- (void)setAddressBook:(void*)arg1;
- (void)save:(id)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (BOOL)showsCancelButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)dealloc;
- (void*)addressBook;
- (id)newPersonViewDelegate;
- (void*)parentGroup;
- (void)setParentGroup:(void*)arg1;
- (id)parentGroupWrapper;
- (BOOL)savesNewContactOnSuspend;
- (void)savePerson:(void*)arg1;
- (void)saveAndTellDelegate:(BOOL)arg1;
- (void)attemptSaveAndTellDelegate:(BOOL)arg1;
- (void*)recordForNewPerson;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (NSInteger)abViewControllerType;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end