/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODebugLogMessage : PBCodable <NSCopying> {
    NSString * _callStack;
}

@property (nonatomic, retain) NSString *callStack;
@property (nonatomic, readonly) bool hasCallStack;

- (id)callStack;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallStack;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallStack:(id)arg1;
- (void)writeTo:(id)arg1;

@end
