/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVAccount, CalDAVCacheManager, ICSCalendar, NSString, NSURL;

@interface CalDAVWriteEventOperation : NSObject {
    CalDAVAccount *_account;
    CalDAVCacheManager *_cache;
    ICSCalendar *_calendar;
    NSURL *_calendarURL;
    BOOL _overwrite;
    NSString *_resourcePath;
    BOOL _wasResourceModifiedByServer;
}

@property(readonly) NSString *resourcePath;
@property(readonly) BOOL wasResourceModifiedByServer;

- (void)dealloc;
- (id)initWithCalendar:(id)arg1 overwrite:(BOOL)arg2 calendarURL:(id)arg3 account:(id)arg4 cache:(id)arg5;
- (void)performOperation:(BOOL)arg1;
- (id)resourcePath;
- (BOOL)wasResourceModifiedByServer;

@end
