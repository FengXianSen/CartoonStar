//
//  ZXSearchManager.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXSearchManager : NSObject

+ (ZXSearchManager *)sharedManager;


- (BOOL)insert:(NSString *)string;
- (BOOL)delete:(NSString *)string;

- (NSMutableArray *)fetchAll;

- (BOOL)deleteAll;

@end
