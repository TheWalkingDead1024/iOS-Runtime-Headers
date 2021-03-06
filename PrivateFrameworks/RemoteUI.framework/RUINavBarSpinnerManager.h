/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavBarSpinnerManager : NSObject {
    int  _activityIndicatorViewStyle;
    NSMutableDictionary * _savedRecords;
}

@property (nonatomic) int activityIndicatorViewStyle;

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (int)activityIndicatorViewStyle;
- (id)init;
- (void)setActivityIndicatorViewStyle:(int)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(BOOL)arg4;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end
