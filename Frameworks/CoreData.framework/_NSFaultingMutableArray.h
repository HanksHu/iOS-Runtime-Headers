/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSMutableArray, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {
    struct _NSFaultingMutableArrayFlags { 
        unsigned int _isFault : 1; 
        unsigned int _reserved : 31; 
    NSInteger _cd_rc;
    } _flags;
    NSMutableArray *_realArray;
    NSPropertyDescription *_relationship;
    NSManagedObject *_source;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (void)getObjects:(id*)arg1;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)isFault;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (id)objectEnumerator;
- (id)relationship;
- (void)release;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)source;
- (void)turnIntoFault;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)willRead;

@end
