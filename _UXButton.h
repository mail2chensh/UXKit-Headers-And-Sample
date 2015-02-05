//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import  AppKit;

@class NSMutableDictionary;

@interface _UXButton : NSButton
{
    NSMutableDictionary *_titlesByState;
    NSMutableDictionary *_titleAttributesByState;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)_textColorForState:(unsigned long long)arg1;
- (id)_AttributedStringForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)tintColorDidChange;
- (void)setTitleAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

