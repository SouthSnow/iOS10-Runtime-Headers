/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface BSFileLogManager : NSObject <BSFileLoggerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_loggersByName;
}

+ (id)sharedInstance;

- (void)flush;
- (void)loggerEnabledStateChanged:(id)arg1;
- (void)_queue_addLogger:(id)arg1;
- (bool)_queue_isClass:(Class)arg1 aKindOfClass:(Class)arg2;
- (void)_queue_enableOrDisableLoggerIfNecessary:(id)arg1;
- (void)_queue_loadFileLoggers;
- (id)loggerForName:(id)arg1;
- (void)reloadFromDefaults;
- (id)init;
- (void)dealloc;

@end