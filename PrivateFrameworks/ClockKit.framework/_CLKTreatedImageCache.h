/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface _CLKTreatedImageCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableArray * _recentlyUsedKeys;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 maskToCircle:(bool)arg3;
- (id)init;

@end