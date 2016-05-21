//
//  ZXSearchRecommendModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/27.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"

@interface ZXSearchRecommendModel : JSONModel

@property (nonatomic,strong)NSNumber *comicId;
@property (nonatomic,copy)NSString *coverUrl;
@property (nonatomic,copy)NSString *name;


@end
