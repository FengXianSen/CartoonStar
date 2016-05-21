//
//  ZXReadViewController.h
//  CartoonStar
//
//  Created by FengZC on 16/1/15.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ViewController.h"
@class ZXLIstModel;
@class ZXChapterListModel;
@interface ZXReadViewController : ViewController

@property (nonatomic,strong)ZXLIstModel *listModel;

@property (nonatomic,strong)ZXChapterListModel *model;


@property (nonatomic,assign)int currentChapter;
@property (nonatomic,assign)NSArray *sumDatas;

@property (nonatomic,assign)int maxChapter_id;

@end
