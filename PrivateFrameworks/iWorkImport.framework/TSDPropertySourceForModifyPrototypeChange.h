/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSDModifyPrototypeChange;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {
    boolmAfterChange;
    TSDModifyPrototypeChange *mChange;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (bool)containsProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)initWithPrototypeChange:(id)arg1 afterChange:(bool)arg2;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)p_propertyMap;

@end