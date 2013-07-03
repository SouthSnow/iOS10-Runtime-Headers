/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper  {
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForNode:(id)arg1;
- (id)infoForNode:(id)arg1;
- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mapRangesForNode:(id)arg1;
- (void)copyInfoForNode:(id)arg1 depth:(int)arg2;
- (void)setUpLayers;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end