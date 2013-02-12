/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSMutableArray, NSMutableDictionary;

@interface ICSComponent : NSObject <ICSWriting> {
    NSMutableArray *_components;
    NSMutableDictionary *_properties;
}

@property(retain) NSArray *attach;
@property(retain) NSArray *attendee;
@property(retain) NSArray *components;
@property(retain) ICSDate *created;
@property(retain) NSString *description;
@property(retain) ICSDate *dtend;
@property(retain) ICSDate *dtstamp;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDuration *duration;
@property(retain) NSArray *exdate;
@property(retain) NSArray *exrule;
@property(retain) ICSDate *last_modified;
@property(retain) NSString *location;
@property(retain) ICSUserAddress *organizer;
@property(retain) NSArray *rdate;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rrule;
@property(retain) NSString *summary;
@property(retain) ICSTrigger *trigger;
@property(retain) NSString *uid;
@property(retain) NSURL *url;
@property(retain) NSString *x_apple_dropbox;
@property(retain) NSString *x_apple_ews_changekey;
@property(retain) NSString *x_apple_ews_itemid;
@property(retain) NSString *x_apple_ews_permission;
@property NSInteger classification;
@property NSUInteger sequence;
@property NSInteger status;
@property BOOL x_apple_ews_needsserverconfirmation;
@property BOOL x_apple_ignore_on_restore;
@property NSInteger x_calendarserver_access;

+ (id)inheritanceKeywords;
+ (id)name;
+ (id)newUID;

- (void)ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(NSUInteger)arg1;
- (void)addComponent:(id)arg1;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)attach;
- (id)attendee;
- (NSInteger)classification;
- (id)components;
- (id)created;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dtend;
- (id)dtstamp;
- (id)dtstart;
- (id)duration;
- (id)exdate;
- (id)exrule;
- (void)fixAlarms;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixComponent;
- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixPropertiesInheritance:(id)arg1;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (id)init;
- (id)last_modified;
- (id)location;
- (id)organizer;
- (id)properties;
- (id)propertiesForName:(id)arg1;
- (id)rdate;
- (id)recurrence_id;
- (void)removeComponent:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (id)rrule;
- (NSUInteger)sequence;
- (void)setAttach:(id)arg1;
- (void)setAttendee:(id)arg1;
- (void)setClassification:(NSInteger)arg1;
- (void)setComponents:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDtend:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (void)setDtstart:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setExdate:(id)arg1;
- (void)setExrule:(id)arg1;
- (void)setLast_modified:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(NSInteger)arg2 forName:(id)arg3;
- (void)setRdate:(id)arg1;
- (void)setRecurrence_id:(id)arg1;
- (void)setRrule:(id)arg1;
- (void)setSequence:(NSUInteger)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setSummary:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setX_apple_dropbox:(id)arg1;
- (void)setX_apple_ews_changekey:(id)arg1;
- (void)setX_apple_ews_itemid:(id)arg1;
- (void)setX_apple_ews_needsserverconfirmation:(BOOL)arg1;
- (void)setX_apple_ews_permission:(id)arg1;
- (void)setX_apple_ignore_on_restore:(BOOL)arg1;
- (void)setX_calendarserver_access:(NSInteger)arg1;
- (NSInteger)status;
- (id)summary;
- (id)trigger;
- (id)uid;
- (id)url;
- (BOOL)validate:(id*)arg1;
- (id)x_apple_dropbox;
- (id)x_apple_ews_changekey;
- (id)x_apple_ews_itemid;
- (BOOL)x_apple_ews_needsserverconfirmation;
- (id)x_apple_ews_permission;
- (BOOL)x_apple_ignore_on_restore;
- (NSInteger)x_calendarserver_access;

@end
