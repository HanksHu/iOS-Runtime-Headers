/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableDictionary;

@interface UIImagePickerController : UINavigationController <NSCoding> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int savingOptions : 3; 
        unsigned int didRevertStatusBar : 1; 
    } _cropRect;
    id _image;
    } _imagePickerFlags;
    NSArray *_mediaTypes;
    NSInteger _previousStatusBarMode;
    NSMutableDictionary *_properties;
    NSUInteger _sourceType;
}

@property(retain) UIView *cameraOverlayView;
@property <UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;
@property(copy) NSArray *mediaTypes;
@property BOOL allowsEditing;
@property BOOL allowsImageEditing;
@property CGAffineTransform cameraViewTransform;
@property BOOL showsCameraControls;
@property NSUInteger sourceType;
@property double videoMaximumDuration;
@property NSUInteger videoQuality;

+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(NSUInteger)arg2;
+ (id)availableMediaTypesForSourceType:(NSUInteger)arg1;
+ (BOOL)isSourceTypeAvailable:(NSUInteger)arg1;

- (BOOL)_allowsImageEditing;
- (void)_autoDismiss;
- (id)_cameraViewController;
- (id)_createInitialController;
- (BOOL)_didRevertStatusBar;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (NSUInteger)_imagePickerSavingOptions;
- (id)_initWithSourceImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_initializeProperties;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setAllowsImageEditing:(BOOL)arg1;
- (void)_setImagePickerSavingOptions:(NSUInteger)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceType;
- (BOOL)_sourceTypeIsCamera;
- (id)_valueForProperty:(id)arg1;
- (BOOL)allowsEditing;
- (BOOL)allowsImageEditing;
- (id)cameraOverlayView;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })cameraViewTransform;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mediaTypes;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setCameraOverlayView:(id)arg1;
- (void)setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setShowsCameraControls:(BOOL)arg1;
- (void)setSourceType:(NSUInteger)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoQuality:(NSUInteger)arg1;
- (BOOL)showsCameraControls;
- (NSUInteger)sourceType;
- (void)takePicture;
- (double)videoMaximumDuration;
- (NSUInteger)videoQuality;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
