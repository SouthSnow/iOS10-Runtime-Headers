/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoTrimQueueController : NSObject {
    PLManagedAlbum * _album;
    NSString * _albumName;
    NSString * _commentText;
    <PUVideoTrimQueueControllerDelegate> * _delegate;
    struct { 
        unsigned int hasWillTrim : 1; 
        unsigned int hasDidTrim : 1; 
        unsigned int hasDidFinish : 1; 
        unsigned int hasDidCancel : 1; 
    }  _delegateFlags;
    UIViewController * _displayingViewController;
    double  _endTime;
    NSArray * _recipients;
    NSMutableArray * _sourcesToTransform;
    double  _startTime;
    NSMutableArray * _trimQueue;
    NSMutableDictionary * _trimmedVideoInfo;
    NSArray * _videosSources;
}

@property (nonatomic, readonly) PLManagedAlbum *album;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *commentText;
@property (nonatomic) <PUVideoTrimQueueControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, readonly) NSDictionary *trimmedVideoInfo;
@property (nonatomic, readonly) NSArray *videosSources;

- (void).cxx_destruct;
- (void)_dequeueTrimmingControl;
- (void)_sendDidFinish;
- (BOOL)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (id)album;
- (id)albumName;
- (id)commentText;
- (id)delegate;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)initWithViewController:(id)arg1 videoSources:(id)arg2 album:(id)arg3;
- (id)recipients;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)start;
- (id)trimmedVideoInfo;
- (id)videosSources;

@end