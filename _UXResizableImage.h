//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import  AppKit;

@interface _UXResizableImage : NSImage
{
    NSImage *_topLeftCorner;
    NSImage *_topEdgeFill;
    NSImage *_topRightCorner;
    NSImage *_leftEdgeFill;
    NSImage *_centerFill;
    NSImage *_rightEdgeFill;
    NSImage *_bottomLeftCorner;
    NSImage *_bottomEdgeFill;
    NSImage *_bottomRightCorner;
    double _scale;
    BOOL _alwaysStretches;
}

@property(nonatomic) BOOL alwaysStretches; // @synthesize alwaysStretches=_alwaysStretches;
- (void).cxx_destruct;
- (struct CGRect)_contentRectInPixels;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (struct CGRect)_contentStretchInPixels;
- (struct CGSize)_sizeInPixels;
- (struct CGRect)_contentInsetsInPixels:(struct NSEdgeInsets)arg1 emptySizeFallback:(CDUnknownBlockType)arg2;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)_setupNinePartFromImage:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct NSEdgeInsets)arg2;

@end

