//
//  ZXFindCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/24.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZXFindListModel;
@interface ZXFindCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *itemImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *sizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@property (weak, nonatomic) IBOutlet UIProgressView *progressView;
@property (weak, nonatomic) IBOutlet UIButton *downloadButton;


@property (nonatomic,strong)ZXFindListModel *model;


@end
