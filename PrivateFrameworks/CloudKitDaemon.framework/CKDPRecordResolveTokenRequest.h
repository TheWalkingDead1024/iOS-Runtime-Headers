/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {
    BOOL  _forceFetch;
    struct { 
        unsigned int forceFetch : 1; 
        unsigned int shouldFetchRootRecord : 1; 
    }  _has;
    NSMutableArray * _rootRecordDesiredKeys;
    NSString * _routingKey;
    NSData * _shortTokenHash;
    BOOL  _shouldFetchRootRecord;
}

@property (nonatomic) BOOL forceFetch;
@property (nonatomic) BOOL hasForceFetch;
@property (nonatomic, readonly) BOOL hasRoutingKey;
@property (nonatomic, readonly) BOOL hasShortTokenHash;
@property (nonatomic) BOOL hasShouldFetchRootRecord;
@property (nonatomic, retain) NSMutableArray *rootRecordDesiredKeys;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortTokenHash;
@property (nonatomic) BOOL shouldFetchRootRecord;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

- (void).cxx_destruct;
- (void)addRootRecordDesiredKeys:(id)arg1;
- (void)clearRootRecordDesiredKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)forceFetch;
- (BOOL)hasForceFetch;
- (BOOL)hasRoutingKey;
- (BOOL)hasShortTokenHash;
- (BOOL)hasShouldFetchRootRecord;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)rootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned int)arg1;
- (unsigned int)rootRecordDesiredKeysCount;
- (id)routingKey;
- (void)setForceFetch:(BOOL)arg1;
- (void)setHasForceFetch:(BOOL)arg1;
- (void)setHasShouldFetchRootRecord:(BOOL)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (void)setShouldFetchRootRecord:(BOOL)arg1;
- (id)shortTokenHash;
- (BOOL)shouldFetchRootRecord;
- (void)writeTo:(id)arg1;

@end
