/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKRulerUnits : NSObject {
    BOOL _centerRulerOrigin;
    NSFormatter *_formatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
    int _preferredPixelUnit;
    int _rulerUnits;
    BOOL _showRulerAsPercentage;
}

@property (nonatomic) BOOL centerRulerOrigin;
@property (nonatomic) int preferredPixelUnit;
@property (nonatomic) int rulerUnits;
@property (nonatomic) BOOL showRulerAsPercentage;

+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(BOOL)arg3 lenient:(BOOL)arg4;
+ (id)instance;

- (BOOL)centerRulerOrigin;
- (id)compatibleRulerUnits;
- (float)convertPointsToRulerUnits:(float)arg1;
- (float)convertRulerUnitsToPoints:(float)arg1;
- (void)dealloc;
- (id)formatter:(BOOL)arg1 lenient:(BOOL)arg2;
- (id)init;
- (id)localizedCompatibleRulerUnits;
- (int)preferredPixelUnit;
- (int)rulerUnits;
- (void)setCenterRulerOrigin:(BOOL)arg1;
- (void)setPreferredPixelUnit:(int)arg1;
- (void)setRulerUnits:(int)arg1;
- (void)setShowRulerAsPercentage:(BOOL)arg1;
- (BOOL)showRulerAsPercentage;

@end
