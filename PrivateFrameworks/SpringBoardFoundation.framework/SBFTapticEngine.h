/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFTapticEngine : NSObject {
    NSMutableSet * _cancelledReasons;
    NSObject<OS_dispatch_queue> * _cancelledReasonsQueue;
    NSMutableSet * _commitReasons;
    NSObject<OS_dispatch_queue> * _commitReasonsQueue;
    NSMutableSet * _previewReasons;
    NSObject<OS_dispatch_queue> * _previewReasonsQueue;
    BOOL  _supportsFeedbackActuation;
    _UITapticEngine * _tapticEngine;
}

@property (nonatomic, readonly) BOOL supportsFeedbackActuation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)actuateFeedback:(int)arg1;
- (void)coolDownForFeedback:(unsigned int)arg1 withReason:(id)arg2;
- (id)init;
- (BOOL)supportsFeedbackActuation;
- (void)warmUpForFeedback:(unsigned int)arg1 withReason:(id)arg2;

@end
