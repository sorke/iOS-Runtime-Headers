/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSoundPlayer : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    TURepeatingActor * _repeatingActor;
    unsigned long  _soundID;
}

@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned long soundID;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isPlaying;
- (void)playSound:(unsigned long)arg1;
- (void)playSound:(unsigned long)arg1 iterations:(unsigned int)arg2 pauseDurationBetweenIterations:(double)arg3;
- (void)playSound:(unsigned long)arg1 iterations:(unsigned int)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(id /* block */)arg4;
- (void)playSoundIndefinitely:(unsigned long)arg1 pauseDurationBetweenIterations:(double)arg2;
- (id)queue;
- (id)repeatingActor;
- (void)setQueue:(id)arg1;
- (void)setRepeatingActor:(id)arg1;
- (void)setSoundID:(unsigned long)arg1;
- (unsigned long)soundID;
- (void)stopPlaying;

@end
