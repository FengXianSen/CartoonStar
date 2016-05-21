//
//  ZXHistoryManager.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ZXLIstModel;
@interface ZXHistoryManager : NSObject

+ (ZXHistoryManager *)sharedManager;

- (void)prepare;
- (BOOL)insert:(ZXLIstModel *)model andChapterName:(NSString *)chapterName;
- (BOOL)delete:(ZXLIstModel *)model ;
- (BOOL)deleteById:(NSString *)comic_id ;
- (NSMutableArray *)fetchAll;
- (BOOL)deleteAll;
- (BOOL)findModel:(ZXLIstModel *)model;

@end
