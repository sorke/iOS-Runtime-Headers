/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAlbumChangeNotification, NSMutableSet, NSOrderedSet, PLInFlightAssetsAlbum;

@interface PLInFlightAssetsAlbumChangeNotification : PLAlbumChangeNotification {
    PLInFlightAssetsAlbum *_album;
    PLAlbumChangeNotification *_backingNotification;
    BOOL _keyAssetDidChange;
    NSOrderedSet *_oldOIDs;
    NSMutableSet *_uniquedOIDs;
}

@property(readonly) PLInFlightAssetsAlbum * album;
@property(readonly) PLAlbumChangeNotification * backingNotification;
@property(readonly) NSOrderedSet * oldOIDs;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)_changedObjects;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (id)backingNotification;
- (void)dealloc;
- (id)description;
- (id)initWithInFlightAssetsAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (BOOL)keyAssetDidChange;
- (id)object;
- (id)oldOIDs;
- (BOOL)titleDidChange;

@end