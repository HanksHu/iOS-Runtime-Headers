/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMutableIndexPathSet : PXIndexPathSet

- (void)addIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)minusIndexPathSet:(id)arg1;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned int)arg1 section:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned int)arg1 section:(int)arg2 item:(int)arg3 usingBlock:(id /* block */)arg4;
- (void)removeAllIndexPaths;
- (void)removeIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (void)unionIndexPathSet:(id)arg1;

@end
