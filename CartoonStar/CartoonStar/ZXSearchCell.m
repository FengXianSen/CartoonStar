//
//  ZXSearchCell.m
//  CartoonStar
//
//  Created by FengZC on 16/1/21.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXSearchCell.h"

@implementation ZXSearchCell

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        _nameLabel = [[UILabel alloc]initWithFrame:frame];
        _nameLabel.textAlignment = NSTextAlignmentCenter;
        _nameLabel.textColor = [UIColor blackColor];
        [self.contentView addSubview:_nameLabel];
    }
    return self;
}
@end
