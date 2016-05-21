//
//  ZXReadCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/20.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZXReadModel;
@interface ZXReadCell : UITableViewCell

@property (nonatomic,strong)UIImageView *readImageView;

@property (nonatomic,strong)ZXReadModel *model;

@end
