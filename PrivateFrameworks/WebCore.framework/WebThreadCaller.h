/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, WebThreadCaller;

@interface WebThreadCaller : NSObject {
    struct TiledSurface { struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; NSInteger x8; in double x9; out void*x10; void*x11; struct RetainPtr<WebThreadCaller> { 
            WebThreadCaller *m_ptr; 
        } x12; NSInteger x13; id x14; void*x15; inout unsigned short x16; unsigned short x17; void*x18; const NSInteger x19; in void*x20; void*x21; struct IntPoint { 
            NSInteger m_x; 
            NSInteger m_y; 
        } x22; struct IntSize { 
            NSInteger m_width; 
            NSInteger m_height; 
        } x23; void*x24; struct IntRect { 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_location; 
            struct IntSize { 
                NSInteger m_width; 
                NSInteger m_height; 
            } m_size; 
        } x25; struct IntRect { 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_location; 
            struct IntSize { 
                NSInteger m_width; 
                NSInteger m_height; 
            } m_size; 
        } x26; void*x27; struct Vector<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul> { 
                struct Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>,0ul> {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x28; struct Vector<WebCore::IntRect,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::IntRect,0ul> { 
                struct IntRect {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x29; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x30; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
     /* Encoded args for previous method: @12@0:4^{TiledSurface={RetainPtr<CALayer>=@}@{RetainPtr<WebThreadCaller>=@}i@{IntPoint=ii}{IntSize=ii}B{IntRect={IntPoint=ii}{IntSize=ii}}{IntRect={IntPoint=ii}{IntSize=ii}}B{Vector<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul>=I{VectorBuffer<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul>=^{Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>,0ul>}I}}{Vector<WebCore::IntRect,0ul>=I{VectorBuffer<WebCore::IntRect,0ul>=^{IntRect}I}}{Mutex={_opaque_pthread_mutex_t=l[40c]}}{Mutex={_opaque_pthread_mutex_t=l[40c]}}}8 */
        } x31; } *_tiledSurface;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*_hasPendingDoLayoutTiles;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*_hasPendingUpdateTilingMode;
}

- (void)doLayoutTiles;
- (id)initWithTiledSurface:(struct TiledSurface { struct RetainPtr<CALayer> { id x_1_1_1; } x1; id x2; struct RetainPtr<WebThreadCaller> { id x_3_1_1; } x3; NSInteger x4; id x5; struct IntPoint { NSInteger x_6_1_1; NSInteger x_6_1_2; } x6; struct IntSize { NSInteger x_7_1_1; NSInteger x_7_1_2; } x7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_9_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_9_1_2; } x9; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_10_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_10_1_2; } x10; void*x11; struct Vector<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul> { NSUInteger x_12_1_1; struct VectorBuffer<WTF::Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>, 0ul>,0ul> { struct Vector<WTF::RefPtr<WebCore::TiledSurface::Tile>,0ul> {} *x_2_2_1; NSUInteger x_2_2_2; } x_12_1_2; } x12; struct Vector<WebCore::IntRect,0ul> { NSUInteger x_13_1_1; struct VectorBuffer<WebCore::IntRect,0ul> { struct IntRect {} *x_2_2_1; NSUInteger x_2_2_2; } x_13_1_2; } x13; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_14_1_1; } x14; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_15_1_1; } x15; }*)arg1;
- (void)resetTiledSurface;
- (void)updateTilingMode;

@end
