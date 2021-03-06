/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate> {
    NSExpression * _expression;
    BOOL  _hasDeterminedValue;
    BOOL  _monitoringForChanges;
    id  _object;
    NSArray * _observers;
    NSDictionary * _substitutionVariables;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSExpression *expression;
@property (nonatomic) BOOL hasDeterminedValue;
@property (readonly) unsigned int hash;
@property (getter=isMonitoringForChanges, nonatomic) BOOL monitoringForChanges;
@property (nonatomic) id object;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic, copy) NSDictionary *substitutionVariables;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (id)_observersForExpression:(id)arg1;
- (id)_observersForPredicate:(id)arg1;
- (void)_startMonitoringForChanges;
- (void)_stopMonitoringForChanges;
- (void)_updateComputedResult:(id)arg1;
- (void)_updateComputedResultIfNeeded;
- (void)dealloc;
- (id)expression;
- (BOOL)hasDeterminedValue;
- (BOOL)isMonitoringForChanges;
- (id)object;
- (void)observeChange:(id)arg1 forObservance:(id)arg2;
- (id)observers;
- (void)setExpression:(id)arg1;
- (void)setHasDeterminedValue:(BOOL)arg1;
- (void)setMonitoringForChanges:(BOOL)arg1;
- (void)setObject:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSubstitutionVariables:(id)arg1;
- (void)setValue:(id)arg1;
- (id)substitutionVariables;
- (id)value;

@end
