/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ATAsset, ATClientController, ATLegacyAssetLink, ATLegacyMessageLink, ATSession, ATUserDefaults, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ATEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate> {
    ATLegacyAssetLink *_assetLink;
    struct CacheDeleteToken { } *_cacheDeleteToken;
    ATClientController *_clientController;
    id _clientProgressCallback;
    ATAsset *_currentAsset;
    NSString *_currentDataclass;
    ATLegacyMessageLink *_currentMessageLink;
    double _currentOverallProgress;
    unsigned int _currentStage;
    NSString *_currentStatus;
    NSMutableDictionary *_dataclassTimers;
    NSMutableArray *_dataclasses;
    ATUserDefaults *_defaults;
    NSMutableDictionary *_diskUsageInfo;
    NSObject<OS_dispatch_queue> *_diskUsageQueue;
    unsigned int _grappaId;
    NSMutableArray *_messageLinks;
    NSDate *_startTime;
    ATSession *_syncSession;
    NSObject<OS_dispatch_queue> *_workQueue;
    bool_automaticSync;
    bool_localSyncRequest;
    bool_localSyncRequestCanceled;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) ATSession * syncSession;

+ (id)legacyDeviceSyncManager;

- (void).cxx_destruct;
- (bool)_currentLinkIsWifiConnection;
- (void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2;
- (void)_reconcileSyncWithMessage:(id)arg1;
- (void)_reportLocalProgress;
- (void)_reset;
- (void)_sendDiskUsageForDataClasses:(id)arg1;
- (void)_sendInstalledAssets;
- (void)_sendSyncAllowed;
- (void)_updatePurgeableStorageUsage;
- (void)assetLink:(id)arg1 didUpdateOverallProgress:(double)arg2;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (id)init;
- (void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)session:(id)arg1 didBeginSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)sessionWillBegin:(id)arg1;
- (void)setSyncSession:(id)arg1;
- (id)syncSession;

@end