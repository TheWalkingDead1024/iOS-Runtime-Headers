/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEventContainerIDs : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    int  _adamID;
    NSString * _cloudAlbumID;
    unsigned int  _cloudPlaylistID;
    NSString * _globalPlaylistID;
    NSString * _playlistVersionHash;
    NSString * _stationHash;
    int  _stationID;
    NSString * _stationStringID;
}

@property (nonatomic, readonly) int adamID;
@property (nonatomic, readonly, copy) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned int cloudPlaylistID;
@property (nonatomic, readonly, copy) NSString *globalPlaylistID;
@property (nonatomic, readonly, copy) NSString *playlistVersionHash;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) int stationID;
@property (nonatomic, readonly, copy) NSString *stationStringID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (int)adamID;
- (id)cloudAlbumID;
- (unsigned int)cloudPlaylistID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globalPlaylistID;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playlistVersionHash;
- (id)stationHash;
- (int)stationID;
- (id)stationStringID;

@end