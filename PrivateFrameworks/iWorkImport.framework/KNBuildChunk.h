/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying> {
    BOOL _automatic;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    TSPLazyReference *_buildReference;
    unsigned int _cachedActiveIndexOnSlide;
    unsigned int _cachedIndexInBuild;
    unsigned int _cachedIndexOnSlide;
    double _delay;
    double _duration;
    BOOL _needsAutomaticFromBuildAttributes;
    BOOL _needsDelayFromBuildAttributes;
    BOOL _needsDurationFromBuildAttributes;
    BOOL _needsReferentFromBuildAttributes;
    unsigned int _referent;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) unsigned int activeIndexOnSlide;
@property (getter=isAutomatic, nonatomic) BOOL automatic;
@property (getter=isAutomaticWithPreviousChunk, nonatomic, readonly) BOOL automaticWithPreviousChunk;
@property (getter=isAutomaticWithPreviousChunkOnSameDrawable, nonatomic, readonly) BOOL automaticWithPreviousChunkOnSameDrawable;
@property (nonatomic, readonly) NSArray *availableEventTriggers;
@property (nonatomic, readonly) KNBuild *build;
@property (nonatomic, readonly) BOOL canEditAnimations;
@property (nonatomic, readonly) KNBuildChunkIdentifier *chunkIdentifier;
@property (nonatomic) double delay;
@property (nonatomic, readonly) unsigned int deliveryGroupIndex;
@property (nonatomic) double duration;
@property (nonatomic, readonly) unsigned int eventTrigger;
@property (nonatomic, readonly) BOOL hasComplement;
@property (nonatomic, readonly) NSUUID *i_buildId;
@property (nonatomic, readonly) unsigned int indexInBuild;
@property (nonatomic, readonly) unsigned int indexOnSlide;
@property (nonatomic, readonly) NSSet *inspectableAttributes;
@property (nonatomic, readonly) BOOL isFirstInBuild;
@property (nonatomic, readonly) BOOL isFirstInDeliveryGroup;
@property (nonatomic, readonly) BOOL isFirstOnSlide;
@property (nonatomic) unsigned int referent;
@property (nonatomic, readonly) KNSlide *slide;
@property (nonatomic, readonly) BOOL supportsWithStart;
@property (nonatomic, readonly) NSString *title;

+ (BOOL)needsObjectUUID;

- (unsigned int)activeIndexOnSlide;
- (id)availableEventTriggers;
- (id)build;
- (BOOL)canBuildWithChunk:(id)arg1;
- (BOOL)canEditAnimations;
- (id)chunkIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (unsigned int)deliveryGroupIndex;
- (id)description;
- (void)didInitFromSOS;
- (double)duration;
- (unsigned int)eventTrigger;
- (BOOL)hasComplement;
- (id)i_buildId;
- (void)i_clearChunkIdentifier;
- (void)i_didLoadBuild:(id)arg1;
- (void)i_invalidateChunkIndexInBuildCache;
- (void)i_setBuildId:(id)arg1;
- (void)i_setBuildPointer:(id)arg1;
- (void)i_setChunkIdentifier:(id)arg1;
- (void)i_updateChunkUUIDReferencesToBuild:(id)arg1;
- (unsigned int)indexInBuild;
- (unsigned int)indexOnSlide;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithBuild:(id)arg1;
- (id)initWithBuild:(id)arg1 copyingAttributesFromChunk:(id)arg2;
- (id)initWithBuild:(id)arg1 referent:(unsigned int)arg2 copyingRemainingAttributesFromChunk:(id)arg3;
- (id)inspectableAttributes;
- (BOOL)isActive;
- (BOOL)isAutomatic;
- (BOOL)isAutomaticWithPreviousChunk;
- (BOOL)isAutomaticWithPreviousChunkOnSameDrawable;
- (BOOL)isComplementOfBuildChunk:(id)arg1;
- (BOOL)isFirstInBuild;
- (BOOL)isFirstInDeliveryGroup;
- (BOOL)isFirstOnSlide;
- (void)loadFromArchive:(const struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 unarchiver:(id)arg2;
- (id)nextChunkOnSlide;
- (BOOL)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(BOOL)arg2;
- (id)p_chunksBuildingWithThisChunk;
- (BOOL)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1;
- (id)p_previousActiveChunkOnSlide;
- (void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned int)arg2 automatic:(BOOL)arg3;
- (void)p_setDurationFromBuildAttributes:(id)arg1;
- (id)p_stringForReferent:(unsigned int)arg1;
- (id)p_stringRepresentationWithNotAvailableForIndex:(unsigned int)arg1;
- (id)previousChunkOnSlide;
- (unsigned int)referent;
- (void)saveToArchive:(struct BuildChunkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; double x6; double x7; unsigned int x8; bool x9; bool x10; struct BuildChunkIdentifierArchive {} *x11; struct UUID {} *x12; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomatic:(BOOL)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setReferent:(unsigned int)arg1;
- (id)slide;
- (BOOL)supportsWithStart;
- (id)title;

@end
