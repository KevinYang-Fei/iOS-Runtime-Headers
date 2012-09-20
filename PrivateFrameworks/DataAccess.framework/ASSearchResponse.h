/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSNumber, NSArray;

@interface ASSearchResponse : ASItem  {
    NSArray *_stores;
    NSNumber *_status;
    int _expectedResultType;
}

@property(retain) NSArray * stores;
@property(copy) NSNumber * status;
@property int expectedResultType;

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (id)stores;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setExpectedResultType:(int)arg1;
- (int)expectedResultType;
- (void)setStores:(id)arg1;

@end