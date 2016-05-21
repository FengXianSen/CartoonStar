//
//  ZXLIstCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/20.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZXChapterListModel;
@interface ZXLIstCell : UITableViewCell

@property (nonatomic,strong)UIButton *downloadButton;

@property (nonatomic,strong)UILabel *label;

@property (nonatomic,strong)ZXChapterListModel *model;



//@property (nonatomic,strong)UIImageView *bgImageView;



@end
