//
//  ZXRankCell.m
//  CartoonStar
//
//  Created by FengZC on 16/1/21.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXRankCell.h"
#import "ZXRankModel.h"
#import "UIImageView+AFNetworking.h"
@implementation ZXRankCell

- (void)awakeFromNib {
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (void)setModel:(ZXRankModel *)model{
    _model = model;
    [_itemImageView setImageWithURL:[NSURL URLWithString:model.cover] placeholderImage:[UIImage imageNamed:@"bg_default_update.png"]];
    _rankNameLabel.text = model.rankingName;
    _description1Label.text = model.rankingDescription1;
    _description2Label.text = model.rankingDescription2;
    
}

@end
