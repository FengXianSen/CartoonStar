//
//  ZXDataCache.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXDataCache : NSObject


+ (ZXDataCache *)sharedCache;

- (BOOL)saveDataWithData:(NSData *)data andStringName:(NSString *)name;

- (NSData *)getDataWithStringName:(NSString *)name;
@end
