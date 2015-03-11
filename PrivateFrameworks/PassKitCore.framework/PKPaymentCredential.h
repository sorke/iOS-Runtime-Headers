/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSURL;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {
    NSString *_applicationIdentifier;
    NSString *_cardSecurityCode;
    NSString *_cardholderName;
    long long _credentialType;
    long long _eligibilityStatus;
    NSString *_expiration;
    NSURL *_iconURL;
    NSString *_identifier;
    NSString *_longDescription;
    NSURL *_passURL;
    NSString *_primaryAccountNumber;
    NSString *_sanitizedPrimaryAccountNumber;
    long long _status;
    NSString *_termsID;
    NSURL *_termsURL;
}

@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * cardSecurityCode;
@property(readonly) NSString * cardTypeDescription;
@property(copy) NSString * cardholderName;
@property long long credentialType;
@property long long eligibilityStatus;
@property(readonly) NSString * eligibilityStatusDescription;
@property(copy) NSString * expiration;
@property(copy) NSURL * iconURL;
@property(copy) NSString * identifier;
@property(copy) NSString * longDescription;
@property(copy) NSURL * passURL;
@property(copy) NSString * primaryAccountNumber;
@property(copy) NSString * sanitizedPrimaryAccountNumber;
@property long long status;
@property(readonly) NSString * statusDescription;
@property(copy) NSString * termsID;
@property(copy) NSURL * termsURL;

+ (id)credentialWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)applicationIdentifier;
- (id)cardSecurityCode;
- (id)cardTypeDescription;
- (id)cardholderName;
- (long long)credentialType;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (long long)eligibilityStatus;
- (id)eligibilityStatusDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)iconURL;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)longDescription;
- (id)passURL;
- (id)primaryAccountNumber;
- (id)sanitizedPrimaryAccountNumber;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setEligibilityStatus:(long long)arg1;
- (void)setExpiration:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTermsID:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (long long)status;
- (id)statusDescription;
- (id)termsID;
- (id)termsURL;

@end