/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class DeviceLocalAccount, NSArray, NSMutableDictionary, NSString, UIActionSheet, UINavigationItem, UIProgressHUD, UIProgressIndicator;

@interface AccountSettingsUISyncController : PSListController <UIActionSheetDelegate> {
    id _account;
    UIActionSheet *_confirmDeleteAccountSheet;
    UIActionSheet *_confirmDisableSyncSheet;
    UIActionSheet *_confirmEnableSyncSheet;
    BOOL _creatingTheAccounts;
    NSArray *_dataclassesToEnable;
    NSInteger _deleteButtonSpecifierIndex;
    DeviceLocalAccount *_deviceLocalAccount;
    BOOL _didDeleteAccount;
    BOOL _didFinishFirstSetup;
    BOOL _displayingHUD;
    BOOL _forceMailSetup;
    UIProgressHUD *_hud;
    NSString *_hudText;
    BOOL _isFirstSetup;
    BOOL _isSavingSyncSettingsInBackground;
    BOOL _isUpdateSetup;
    BOOL _mergedDataOnAccountDelete;
    UINavigationItem *_navigationItem;
    UIProgressIndicator *_progressIndicator;
    UIActionSheet *_reallyConfirmEnableSyncSheet;
    UIActionSheet *_reallyConfirmKeepLocalDataSheet;
    BOOL _showsDeleteAccountButton;
    id _syncActionsAccount;
    NSMutableDictionary *_syncSaveOperationsByDataclass;
}

@property(retain) id account;
@property BOOL didDeleteAccount;
@property BOOL didFinishFirstSetup;
@property(getter=isFirstSetup) BOOL firstSetup;
@property BOOL showsDeleteAccountButton;
@property(getter=isUpdateSetup) BOOL updateSetup;

+ (BOOL)_doesSyncedDataExistForDataclass:(id)arg1;
+ (id)deviceSpecificLocalizedStringKey:(id)arg1;

- (id)_accountInfoSpecifier;
- (void)_backgroundDeleteAccountData:(id)arg1;
- (void)_backgroundSaveSyncSettings:(id)arg1;
- (void)_clearAnchorsForDataclass:(id)arg1;
- (void)_clearAnchorsForLocalDataclass:(id)arg1;
- (void)_createLocalDataSourceForDataclass:(id)arg1;
- (id)_dataclassesTextForDeleteConfirmationIncludingMail:(BOOL)arg1;
- (id)_deleteButtonSpecifier;
- (id)_deviceLocalAccount;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (void)_disableDataclass:(id)arg1;
- (void)_enableDataclass:(id)arg1;
- (void)_enableTetheredSyncingForDataclass:(id)arg1;
- (void)_hideHUD;
- (void)_hideLocalStoreForDataclass:(id)arg1;
- (void)_hideModalProgressAfterDelay:(double)arg1;
- (id)_localizationKeyForDataclass:(id)arg1 withSuffix:(id)arg2;
- (void)_mainThreadFinishedDeleteAccountDataWithSuccess:(id)arg1;
- (void)_mainThreadFinishedSaveSyncSettings;
- (void)_mergeLocalDataForDataclass:(id)arg1;
- (void)_mergeSyncDataForDataclass:(id)arg1;
- (id)_modalProgressTextForDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)_reallyFinishedFirstSetup;
- (void)_removeDataStoreForDataclass:(id)arg1;
- (void)_removeLocalDataStoreForDataclass:(id)arg1;
- (void)_setSyncActionsAccount:(id)arg1;
- (void)_showLocalStoreIfAppropriateForDataclass:(id)arg1;
- (void)_showModalProgress;
- (void)_showModalProgressWithText:(id)arg1 afterDelay:(double)arg2;
- (id)_syncActionsAccount;
- (id)_viewForSheet;
- (id)account;
- (Class)accountInfoControllerClass;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (BOOL)backgroundDeleteAccountData;
- (void)beginSaveSyncSettings;
- (void)cancelAccountsCreation;
- (void)configureDeleteAccountConfirmationSheet:(id)arg1;
- (void)configureDisableConfirmationSheet:(id)arg1 toEnableDataclass:(id)arg2;
- (void)configureFirstEnableConfirmationSheet:(id)arg1 toEnableDataclass:(id)arg2;
- (void)confirmDeleteAccount:(id)arg1;
- (void)confirmStartSyncingDataclass:(id)arg1;
- (void)confirmStopSyncingData:(id)arg1;
- (id)confirmationTextForDataclassToDisable:(id)arg1 userCanKeepCurrentData:(BOOL)arg2;
- (id)confirmationTextForDataclassToEnable:(id)arg1 userCanKeepCurrentData:(BOOL)arg2 localDataExists:(BOOL)arg3;
- (id)confirmationTextForDataclassToReallyEnable:(id)arg1;
- (id)confirmationTextForDataclassToReallyKeepLocalData:(id)arg1;
- (void)createAccounts;
- (id)createDeleteCellWithSpecifier:(id)arg1 width:(float)arg2;
- (void)dealloc;
- (void)deleteAccount;
- (void)deleteAccountAndData:(id)arg1;
- (id)deleteActionsWithSyncDataclassesEnabled:(BOOL)arg1;
- (void)didConfirmDeleteAccount:(id)arg1;
- (void)didConfirmDisableSyncSettings:(id)arg1;
- (void)didConfirmEnableSyncSettings:(id)arg1;
- (void)didConfirmSaveSyncSettings:(BOOL)arg1;
- (BOOL)didDeleteAccount;
- (BOOL)didFinishFirstSetup;
- (void)didReallyConfirmEnableSyncSettings:(id)arg1;
- (void)didReallyConfirmKeepLocalData:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)ensurePreconditionIsMetToDisableDataclass:(id)arg1;
- (void)ensurePreconditionIsMetToEnableDataclass:(id)arg1;
- (id)firstSetupInitialSettings;
- (void)forceMailSetup;
- (BOOL)hasSyncDataclassesEnabled;
- (void)hideModalProgress;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)isDataclassEnabled:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isFirstSetup;
- (BOOL)isUpdateSetup;
- (id)localizedTextForDataclasses:(id)arg1 willBeUsedAtBeginningOfSentence:(BOOL)arg2 includeMailDataclass:(BOOL)arg3;
- (id)localizedTextForDataclasses:(id)arg1 willBeUsedAtBeginningOfSentence:(BOOL)arg2;
- (BOOL)mergedDataOnAccountDelete;
- (id)navigationItem;
- (id)navigationTitle;
- (id)newAccount;
- (id)otherSetupSpecifiers;
- (id)otherSpecifiers;
- (void)preconditionMetToDisableDataclass:(id)arg1;
- (void)preconditionMetToEnableDataclass:(id)arg1;
- (BOOL)preconditionNeedsToBeMetToDisableDataclass:(id)arg1;
- (BOOL)preconditionNeedsToBeMetToEnableDataclass:(id)arg1;
- (void)preconditionNotMetToEnableDataclass:(id)arg1;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (void)reallyConfirmKeepLocalDataWithText:(id)arg1 dataclass:(id)arg2;
- (void)reallyConfirmStartSyncingWithText:(id)arg1 dataclass:(id)arg2;
- (void)removeActionForSyncDataclass:(id)arg1;
- (void)saveSyncSettings:(id)arg1 forAccount:(id)arg2;
- (void)saveSyncSettings;
- (void)setAccount:(id)arg1;
- (void)setDataclassEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDidDeleteAccount:(BOOL)arg1;
- (void)setDidFinishFirstSetup:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setFirstSetup:(BOOL)arg1;
- (void)setShowsDeleteAccountButton:(BOOL)arg1;
- (void)setSwitchForDataclass:(id)arg1 to:(id)arg2;
- (void)setUpdateSetup:(BOOL)arg1;
- (BOOL)shouldAskForUserConfirmationToDisableDataclass:(id)arg1;
- (BOOL)shouldAskForUserConfirmationToEnableDataclass:(id)arg1;
- (BOOL)shouldInitiallyEnableDataclass:(id)arg1;
- (void)showModalProgressWithText:(id)arg1;
- (BOOL)showingModalProgress;
- (BOOL)showsDeleteAccountButton;
- (id)specifiers;
- (id)specifiersForDataclasses:(id)arg1;
- (void)syncDataclass:(id)arg1 withAction:(id)arg2;
- (BOOL)syncSaveOperationsHasDataclass:(id)arg1;
- (id)titleForAccountDeleteAction:(id)arg1 hasSyncDataclassesEnabled:(BOOL)arg2 supportsMerge:(BOOL)arg3;
- (id)titleForAccountSettingsAction:(id)arg1;
- (void)updateLocalStoresAfterRemovingAccountInformation;
- (id)userActionsToDisableDataclass:(id)arg1;
- (id)userActionsToEnableDataclass:(id)arg1;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)viewWillRedisplay;

@end
