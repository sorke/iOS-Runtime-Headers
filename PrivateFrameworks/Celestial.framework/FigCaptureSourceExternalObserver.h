/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceExternalObserver : NSObject {
    id  _eaAccessory;
    id  _eaAccessoryManager;
    NSMutableArray * _sourcesInfoArray;
    NSObject<OS_dispatch_queue> * _sourcesQueue;
    void * eaLibHandle;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void)_addDevicesForAccessory:(id)arg1;
- (id)_createFigCaptureSourceInfoForAccessory:(id)arg1;
- (void)_deleteDevicesForAccessory:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (id)copySourcesInfo;
- (id)init;
- (void)listenForAccessoryConnections;

@end
