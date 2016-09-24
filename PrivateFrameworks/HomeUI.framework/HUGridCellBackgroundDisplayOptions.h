/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    UIVisualEffect * _backgroundVisualEffect;
    unsigned int  _contentColorStyle;
    unsigned int  _displayStyle;
}

@property (nonatomic, retain) UIVisualEffect *backgroundVisualEffect;
@property (nonatomic) unsigned int contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int displayStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)backgroundVisualEffect;
- (unsigned int)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)displayStyle;
- (void)setBackgroundVisualEffect:(id)arg1;
- (void)setContentColorStyle:(unsigned int)arg1;
- (void)setDisplayStyle:(unsigned int)arg1;

@end