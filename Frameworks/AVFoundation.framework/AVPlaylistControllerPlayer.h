/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaylistControllerPlayer : AVQueuePlayer {
    struct __CFDictionary { } * _playerItemsForFigPlaybackItems;
}

- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (struct OpaqueFigPlaybackItem { }*)_copyCurrentFigPlaybackItem;
- (id)_items;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (void)finalize;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;

@end
