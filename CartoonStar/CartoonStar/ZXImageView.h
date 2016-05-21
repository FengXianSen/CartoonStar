//
//  ZXImageView.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZXReModel;
@class ZXFindBannerModel;
@class ZXQualityADModel;
@class ZXSearchRecommendModel;
@interface ZXImageView : UIImageView

@property (nonatomic,strong)ZXQualityADModel *model;

@property (nonatomic,strong)ZXSearchRecommendModel *recommendModel;

@property (nonatomic,strong)ZXFindBannerModel *bannerModel;

@property (nonatomic,strong)ZXReModel *remodel;


@end
