/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSLock, NSMutableArray;

@interface ICEResultWaitQueue : NSObject {
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSMutableArray *queryList;
    NSLock *queryLock;
    } resCond;
    } resMutex;
}

- (void)addResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; struct tagIPPORT { NSInteger x_5_1_1; BOOL x_5_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_5_1_3; unsigned short x_5_1_4; } x5; struct tagIPPORT { NSInteger x_6_1_1; BOOL x_6_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_6_1_3; unsigned short x_6_1_4; } x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; NSUInteger x10; }*)arg1 forCallID:(NSInteger)arg2;
- (void)dealloc;
- (id)init;
- (id)resultForCallID:(NSInteger)arg1;

@end
