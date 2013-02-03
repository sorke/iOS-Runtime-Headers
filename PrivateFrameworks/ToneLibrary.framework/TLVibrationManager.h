/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class TLCapabilitiesManager, NSDictionary;

@interface TLVibrationManager : NSObject {
    BOOL _allowsAutoRefresh;
    id _capabilitiesManager;
    BOOL _needsRefresh;
    BOOL _unitTestingMode;
    NSDictionary *_userGeneratedVibrationPatterns;
    NSDictionary *_vibrationPatterns;
}

@property(readonly) BOOL _areCustomVibrationsAllowed;
@property(readonly) TLCapabilitiesManager * _capabilitiesManager;
@property(readonly) NSDictionary * _userGeneratedVibrationPatterns;
@property(readonly) NSDictionary * _vibrationPatterns;
@property BOOL allowsAutoRefresh;
@property(readonly) BOOL needsRefresh;

+ (void)_handleSystemVibrationDidChangeNotification;
+ (void)releaseSharedVibrationManager;
+ (id)sharedVibrationManager;

- (BOOL)_areCustomVibrationsAllowed;
- (id)_capabilitiesManager;
- (id)_copyNameOfVibrationWithIdentifier:(id)arg1;
- (id)_copyPatternForVibrationWithIdentifier:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)arg1 error:(id*)arg2;
- (id)_userGeneratedVibrationPatterns;
- (id)_vibrationPatterns;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (BOOL)allowsAutoRefresh;
- (id)copyNameOfVibrationWithIdentifier:(id)arg1;
- (id)copyPatternForVibrationWithIdentifier:(id)arg1;
- (id)copyUserGeneratedVibrationIdentifiers;
- (id)copyVibrationIdentifiers;
- (id)currentVibrationIdentifierForType:(unsigned int)arg1;
- (id)currentVibrationNameForType:(unsigned int)arg1;
- (id)currentVibrationPatternForType:(unsigned int)arg1;
- (void)dealloc;
- (id)defaultVibrationIdentifierForType:(unsigned int)arg1;
- (id)defaultVibrationNameForType:(unsigned int)arg1;
- (id)defaultVibrationPatternForType:(unsigned int)arg1;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithUnitTestingModeEnabled:(BOOL)arg1;
- (BOOL)needsRefresh;
- (id)noneVibrationIdentifier;
- (id)noneVibrationName;
- (BOOL)refresh;
- (void)setAllowsAutoRefresh:(BOOL)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forType:(unsigned int)arg2;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;

@end