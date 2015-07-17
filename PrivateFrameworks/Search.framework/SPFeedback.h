/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedback : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    unsigned int  _domain;
    NSString * _externalIdentifier;
    NSString * _fbq;
    NSString * _identifier;
    NSString * _input;
    NSString * _predictionIdentifier;
    NSString * _protectionClass;
    NSArray * _results;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int domain;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *fbq;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *input;
@property (nonatomic, copy) NSString *predictionIdentifier;
@property (nonatomic, retain) NSString *protectionClass;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, readonly) double timestamp;

+ (id)feedback;
+ (id)feedbackForSearchResult:(id)arg1 section:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)fbq;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)localResultActivityStringFromResult:(id)arg1 attributes:(id)arg2;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2;
- (id)predictionIdentifier;
- (id)protectionClass;
- (id)results;
- (id)serializedActivityInfoWithResult:(id)arg1 attributes:(id)arg2;
- (void)setBundleID:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setFbq:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setPredictionIdentifier:(id)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)setResults:(id)arg1;
- (id)sha1:(id)arg1;
- (double)timestamp;

@end