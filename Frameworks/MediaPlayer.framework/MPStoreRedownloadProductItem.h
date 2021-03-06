/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductItem : NSObject {
    NSDictionary * _responseDictionary;
    BOOL  _usesCurrentAccountIfAvailable;
}

@property (nonatomic, readonly) NSURL *HLSPlaylistURL;
@property (nonatomic, readonly, copy) NSArray *allFlavors;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *asset;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *firstAsset;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic) BOOL usesCurrentAccountIfAvailable;

- (void).cxx_destruct;
- (id)HLSPlaylistURL;
- (void)_enumerateAssetDictionariesWithBlock:(id /* block */)arg1;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)allFlavors;
- (id)asset;
- (id)assetForFlavor:(id)arg1;
- (id)fileExtension;
- (id)firstAsset;
- (id)responseDictionary;
- (void)setUsesCurrentAccountIfAvailable:(BOOL)arg1;
- (BOOL)usesCurrentAccountIfAvailable;

@end
