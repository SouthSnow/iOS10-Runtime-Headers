/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationDestinationsRegistry : NSObject <NCDebugInfoProvider> {
    struct NSMutableDictionary { Class x1; } * _activeDestinations;
    struct NSMutableDictionary { Class x1; } * _destinations;
    struct NSMutableDictionary { Class x1; } * _readyDestinations;
}

@property (nonatomic, copy) NSMutableDictionary *activeDestinations;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSMutableDictionary *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSMutableDictionary *readyDestinations;
@property (nonatomic, readonly) NSArray *registeredDestinations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeDestinationsDebugInfo;
- (id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(struct NSMutableDictionary { Class x1; }*)arg2;
- (id)_registeredDestinationsDebugInfo;
- (struct NSMutableDictionary { Class x1; }*)activeDestinations;
- (unsigned long long)count;
- (id)debugInfoPlist;
- (struct NSMutableDictionary { Class x1; }*)destinations;
- (id)destinationsForRequestDestinations:(id)arg1;
- (bool)hasActiveDestinationsForRequest:(id)arg1;
- (id)init;
- (bool)isRegisteredDestination:(id)arg1;
- (struct NSMutableDictionary { Class x1; }*)readyDestinations;
- (id)readyDestinationsForRequestDestinations:(id)arg1;
- (void)registerDestination:(id)arg1;
- (void)registerDestination:(id)arg1 forIdentifier:(id)arg2;
- (id)registeredDestinations;
- (void)setActiveDestinations:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setDestination:(id)arg1 enabled:(bool)arg2;
- (void)setDestination:(id)arg1 ready:(bool)arg2;
- (void)setDestinationWithIdentifier:(id)arg1 enabled:(bool)arg2;
- (void)setDestinations:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setReadyDestinations:(struct NSMutableDictionary { Class x1; }*)arg1;

@end