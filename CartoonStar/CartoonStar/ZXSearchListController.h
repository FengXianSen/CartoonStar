//
//  ZXSearchListController.h
//  CartoonStar
//
//  Created by FengZC on 16/1/30.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ViewController.h"

@class ZXSearchModel;
@interface ZXSearchListController : ViewController

@property (nonatomic,strong)ZXSearchModel *model;

@property (nonatomic,copy)NSString *text;

@end
