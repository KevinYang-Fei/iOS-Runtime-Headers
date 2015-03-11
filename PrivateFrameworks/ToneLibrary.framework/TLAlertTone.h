/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSString, TLSound;

@interface TLAlertTone : NSObject {
    TLSound *_actualSound;
    NSString *_filePath;
    TLSound *_previewSound;
}

@property(retain) TLSound * actualSound;
@property(copy) NSString * filePath;
@property(retain) TLSound * previewSound;

- (void)_setActualSound:(id)arg1;
- (void)_setFilePath:(id)arg1;
- (void)_setPreviewSound:(id)arg1;
- (id)actualSound;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;
- (id)previewSound;

@end