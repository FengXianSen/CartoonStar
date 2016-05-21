//
//  ZXRankModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/27.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"

@interface ZXRankModel : JSONModel

@property (nonatomic,copy)NSString *rankingName;
@property (nonatomic,copy)NSString *rankingDescription1;
@property (nonatomic,copy)NSString *rankingDescription2;
@property (nonatomic,copy)NSString *cover;
@property (nonatomic,copy)NSString *argName;
@property (nonatomic,copy)NSString *argValue;

@end
