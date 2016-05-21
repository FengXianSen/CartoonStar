//
//  ZXRecommendCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/20.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZXUpdateModel;
@interface ZXRecommendCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *itemImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *authorLabel;
@property (weak, nonatomic) IBOutlet UILabel *clickLabel;
@property (weak, nonatomic) IBOutlet UILabel *classLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UIImageView *duGiaImageView;

@property (nonatomic,strong)ZXUpdateModel *model;

@end
