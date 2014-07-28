//
//  UISearchBar+textField.m
//  lottowinnersv2
//
//  Created by Mac Mini on 5/28/14.
//  Copyright (c) 2014 com.qaik. All rights reserved.
//

#import "UISearchBar+textField.h"
#import "UIView+DescentViews.h"

@implementation UISearchBar (textField)
- (UITextField *)textField {
    NSLog(@"%@",[self descentViews]);
    for (UIView *view in [self subviews]) {
        for (UIView *aview in [view subviews]) {
        if ([aview isKindOfClass:NSClassFromString(@"UISearchBarTextField")]) {
            return (UITextField *)aview;
        }
        }
    }
    return nil;
}

- (NSArray *)subcontrols
{
    return self.subviews.count == 1 ? [self.subviews.firstObject subviews] : self.subviews;
}
@end
