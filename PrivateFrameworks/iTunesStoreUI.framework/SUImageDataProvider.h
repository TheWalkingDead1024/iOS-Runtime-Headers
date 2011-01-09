/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUImageModifier, UIColor;



@interface SUImageDataProvider : ISDataProvider <NSCopying>
{
    UIColor *_fillColor;
    struct CGSize { 
        float width; 
        float height; 
    } _finalSize;
    SUImageModifier *_modifier;
}

@property(retain) SUImageModifier *modifier; /* unknown property attribute: V_modifier */
@property CGSize finalSize; /* unknown property attribute: V_finalSize */
@property(retain) UIColor *fillColor; /* unknown property attribute: V_fillColor */


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createImageFromImage:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)modifier;
- (void)setModifier:(id)arg1;
- (struct CGSize { float x1; float x2; })finalSize;
- (void)setFinalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;

@end