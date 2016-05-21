//
//  ZXHistoryCell.h
//  CartoonStar
//
//  Created by FengZC on 16/1/24.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZXHistoryCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *itemImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *historyLabel;
@property (weak, nonatomic) IBOutlet UIButton *deleteButton;

@end
