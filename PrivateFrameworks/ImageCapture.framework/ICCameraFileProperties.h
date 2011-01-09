/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableDictionary;



@interface ICCameraFileProperties : NSObject 
{
    long long _fileSize;
    BOOL _hasThumbnail;
    BOOL _hasMetadata;
    BOOL _raw;
    NSInteger _fetchingThumbnailLock;
    BOOL _fetchingThumbnail;
    NSInteger _fetchingMetadataLock;
    BOOL _fetchingMetadata;
    struct CGImage { } *_originalThumbnail;
    struct CGImage { } *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    NSUInteger _orientation;
    BOOL _hasOverriddenOrientation;
}

@property BOOL fetchingThumbnail;
@property BOOL fetchingMetadata;
@property BOOL hasOverriddenOrientation;
@property NSUInteger orientation;
@property(retain) NSMutableDictionary *metadata_hidden;
@property(retain) NSMutableDictionary *metadata;
@property CGImage *thumbnail;
@property CGImage *originalThumbnail;
@property(getter=isRaw) BOOL raw;
@property BOOL hasMetadata;
@property BOOL hasThumbnail;
@property long long fileSize;


- (long long)fileSize;
- (struct CGImage { }*)originalThumbnail;
- (void)setOriginalThumbnail:(struct CGImage { }*)arg1;
- (void)setHasOverriddenOrientation:(BOOL)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setRaw:(BOOL)arg1;
- (BOOL)hasOverriddenOrientation;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setHasMetadata:(BOOL)arg1;
- (BOOL)fetchingThumbnail;
- (BOOL)fetchingMetadata;
- (id)metadata_hidden;
- (void)setMetadata_hidden:(id)arg1;
- (void)setFetchingThumbnail:(BOOL)arg1;
- (void)setFetchingMetadata:(BOOL)arg1;
- (BOOL)isRaw;
- (struct CGImage { }*)thumbnail;
- (void)finalize;
- (void)setOrientation:(NSUInteger)arg1;
- (NSUInteger)orientation;
- (void)dealloc;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
- (void)setThumbnail:(struct CGImage { }*)arg1;

@end