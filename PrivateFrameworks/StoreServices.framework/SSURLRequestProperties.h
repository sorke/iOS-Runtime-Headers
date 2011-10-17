/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSInputStream, NSString, NSData, NSDictionary, NSURL;

@interface SSURLRequestProperties : NSObject <SSCoding, NSCoding, NSCopying, NSMutableCopying> {
    int _allowedRetryCount;
    unsigned int _cachePolicy;
    NSString *_clientIdentifier;
    struct dispatch_queue_s { } *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSDictionary *_requestParameters;
    BOOL _shouldProcessProtocol;
    double _timeoutInterval;
    NSString *_urlBagKey;
    int _urlBagType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _urlBagURLBlock;

    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property(readonly) int allowedRetryCount;
@property(readonly) NSString * clientIdentifier;
@property(readonly) unsigned int cachePolicy;
@property(readonly) long long expectedContentLength;
@property(readonly) NSData * HTTPBody;
@property(readonly) NSDictionary * HTTPHeaders;
@property(readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest;
@property(readonly) NSDictionary * requestParameters;
@property(readonly) double timeoutInterval;
@property(readonly) NSString * URLBagKey;
@property(readonly) NSURL * URL;
@property(readonly) NSArray * userAgentComponents;
@property(readonly) BOOL canBeResolved;
@property(readonly) NSInputStream * HTTPBodyStream;
@property(readonly) BOOL shouldProcessProtocol;
@property(readonly) int URLBagType;
@property(readonly) id URLBagURLBlock;
@property(readonly) NSArray * URLs;


- (id)URLBagURLBlock;
- (BOOL)shouldProcessProtocol;
- (BOOL)isITunesStoreRequest;
- (int)URLBagType;
- (int)allowedRetryCount;
- (id)userAgentComponents;
- (id)copyURLRequest;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (long long)expectedContentLength;
- (id)HTTPBodyStream;
- (id)HTTPBody;
- (id)HTTPMethod;
- (double)timeoutInterval;
- (unsigned int)cachePolicy;
- (id)initWithURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)URLs;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)_initCommon;
- (id)HTTPHeaders;
- (id)clientIdentifier;
- (id)URLBagKey;
- (id)requestParameters;
- (BOOL)canBeResolved;

@end