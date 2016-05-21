//
//  ZXRecommendModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/22.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"
#import "ZXComicListItemsModel.h"

@protocol ZXComicListItemsModel;
@interface ZXRecommendModel : JSONModel

@property (nonatomic,strong)NSNumber *itemViewType;
@property (nonatomic,copy)NSString *argName;
@property (nonatomic,copy)NSString *argValue;
@property (nonatomic,copy)NSString *title;
@property (nonatomic,copy)NSString *titleIconUrl;
@property (nonatomic,copy)NSString *titleWithIcon;

@property (nonatomic,strong)NSArray<ZXComicListItemsModel> *comicListItems;


@end
