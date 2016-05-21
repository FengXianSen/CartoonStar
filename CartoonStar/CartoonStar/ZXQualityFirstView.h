//
//  ZXQualityFirstView.h
//  CartoonStar
//
//  Created by FengZC on 16/1/18.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZXQualityFirstView : UICollectionReusableView <UIScrollViewDelegate>


@property (nonatomic,strong)UIImageView *itemImageView;

@property (nonatomic,strong)UILabel *sectionLabel;

@property (nonatomic,strong)UIButton *moreButton;

@property (nonatomic,strong)UIScrollView *scrollView;

@property (nonatomic,strong)NSArray *array;

@property (nonatomic,strong)UIPageControl *pageControl;

//- (instancetype)initWithFrame:(CGRect)frame  withArray:(NSArray *)array;


@end
