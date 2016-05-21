//
//  ZXReModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/27.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"

@interface ZXReModel : JSONModel

@property (nonatomic,copy)NSString *title;
@property (nonatomic,strong)NSNumber *appId;
@property (nonatomic,copy)NSString *coverUrl;



@end
