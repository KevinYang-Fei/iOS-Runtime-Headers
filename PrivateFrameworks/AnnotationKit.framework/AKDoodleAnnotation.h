/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol> {
    int _brushStyle;
    BOOL _dashed;
    BOOL _hasShadow;
    UIBezierPath *_path;
    BOOL _pathIsDot;
    BOOL _pathIsPrestroked;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rectangle;
    float _rotationAngle;
    UIColor *_strokeColor;
    float _strokeWidth;
}

@property (getter=brushStyle) int brushStyle;
@property (getter=isDashed) BOOL dashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow;
@property (readonly) unsigned int hash;
@property (retain) UIBezierPath *path;
@property BOOL pathIsDot;
@property BOOL pathIsPrestroked;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rectangle;
@property float rotationAngle;
@property (retain) UIColor *strokeColor;
@property float strokeWidth;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (int)brushStyle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)flattenModelExifOrientation:(int)arg1 withModelSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)hasShadow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDashed;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)path;
- (BOOL)pathIsDot;
- (BOOL)pathIsPrestroked;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectangle;
- (float)rotationAngle;
- (void)setBrushStyle:(int)arg1;
- (void)setDashed:(BOOL)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)setPathIsDot:(BOOL)arg1;
- (void)setPathIsPrestroked:(BOOL)arg1;
- (void)setRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (id)strokeColor;
- (float)strokeWidth;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;

@end
