//
//  ZXButton.m
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXButton.h"

@implementation ZXButton

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

+ (ZXButton *)buttonWithFrame:(CGRect)frame title:(NSString *)title tintColor:(UIColor *)color titleColor:(UIColor *)titleColor{
    ZXButton *button = [ZXButton buttonWithType:UIButtonTypeSystem];
    button.frame = frame;
    [button setTitle:title forState:UIControlStateNormal];
    button.tintColor = color;
    [button setTitleColor:titleColor forState:UIControlStateNormal];
    [button setTitleColor:titleColor forState:UIControlStateSelected];
    return button;
}
@end
