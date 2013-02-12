/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUICameraViewController : PLCameraViewController <UIImagePickerCameraViewController> {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    NSInteger _newStatusBarMode;
    } _previewViewTransform;
    NSInteger _previousStatusBarMode;
}

- (id)_cameraOverlayView;
- (id)_cameraView;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_cameraViewTransform;
- (BOOL)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (NSInteger)_imagePickerStatusBarMode;
- (void)_setCameraOverlayView:(id)arg1;
- (void)_setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setShowsCameraControls:(BOOL)arg1;
- (BOOL)_showsCameraControls;
- (void)_takePicture;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (void)cameraViewCancelled:(id)arg1;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setWantsImageData:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
