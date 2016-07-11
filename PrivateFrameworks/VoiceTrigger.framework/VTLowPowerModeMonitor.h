/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTLowPowerModeMonitor : VTEventMonitor {
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveLowPowerModeChanged;
- (void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isLowPowerMode;
- (unsigned char)powerMode;
- (void)removeObserver:(id)arg1;

@end