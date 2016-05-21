//
//  ZXRecommendCell.m
//  CartoonStar
//
//  Created by FengZC on 16/1/20.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXRecommendCell.h"
#import "UIImageView+AFNetworking.h"
#import "ZXUpdateModel.h"

@implementation ZXRecommendCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setModel:(ZXUpdateModel *)model{
    _model = model;
    [_itemImageView setImageWithURL:[NSURL URLWithString:model.cover] placeholderImage:[UIImage imageNamed:@"bg_default_cover.png"]];
    _nameLabel.text = model.name;
    _authorLabel.text = model.nickname;
    _clickLabel.text = model.click_total;
    NSString *string = [model.tags componentsJoinedByString:@" "];
    _classLabel.text = string;
    _descriptionLabel.text = model.myDescription;
    
}

@end
