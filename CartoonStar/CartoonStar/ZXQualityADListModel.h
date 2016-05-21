//
//  ZXQualityADListModel.h
//  CartoonStar
//
//  Created by FengZC on 16/1/22.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "JSONModel.h"
#import "ZXQualityADModel.h"

@protocol ZXQualityADModel;
@interface ZXQualityADListModel : JSONModel

@property (nonatomic,strong)NSNumber *itemViewType;
@property (nonatomic,strong)NSArray<ZXQualityADModel> *galleryItems;

@property (nonatomic,strong)NSArray<ZXQualityADModel> *bannerItems;

@end
