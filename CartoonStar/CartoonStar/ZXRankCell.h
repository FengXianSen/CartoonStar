//
//  ZXRankCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/21.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZXRankModel;
@interface ZXRankCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *itemImageView;
@property (weak, nonatomic) IBOutlet UILabel *rankNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *description1Label;
@property (weak, nonatomic) IBOutlet UILabel *description2Label;

@property (nonatomic,strong)ZXRankModel *model;

@end
