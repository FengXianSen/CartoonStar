//
//  ZXCollectionManager.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <Foundation/Foundation.h>


@class ZXLIstModel;
@interface ZXCollectionManager : NSObject

+ (ZXCollectionManager *)sharedManager;

- (void)prepare;
- (BOOL)insert:(ZXLIstModel *)model ;
- (BOOL)delete:(ZXLIstModel *)model ;
- (BOOL)deleteById:(NSString *)comic_id ;
- (NSMutableArray *)fetchAll;
- (BOOL)deleteAll;
- (BOOL)findModel:(ZXLIstModel *)model;

@end
