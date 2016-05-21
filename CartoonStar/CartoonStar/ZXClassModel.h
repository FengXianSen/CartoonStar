//
//  ZXClassModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/27.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"

@interface ZXClassModel : JSONModel

@property (nonatomic,copy)NSString *sortId;
@property (nonatomic,copy)NSString *sortName;
@property (nonatomic,copy)NSString *icon;
@property (nonatomic,copy)NSString *iconSortName;
@property (nonatomic,copy)NSString *cover;
@property (nonatomic,copy)NSString *argCon;
@property (nonatomic,copy)NSString *argName;
@property (nonatomic,copy)NSString *argValue;

@end
