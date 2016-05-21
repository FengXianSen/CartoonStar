//
//  ZXDataCache.m
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXDataCache.h"
#import "NSString+util.h"


@interface ZXDataCache ()

@property (nonatomic,assign)NSTimeInterval interval;
@end
@implementation ZXDataCache

static  ZXDataCache *cache = nil;
+ (ZXDataCache *)sharedCache{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        cache = [[ZXDataCache alloc]init];
    });
    return cache;

}

+ (instancetype)allocWithZone:(struct _NSZone *)zone{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        cache = [super allocWithZone:zone];
    });
    return cache;
}

- (instancetype)init{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        cache = [super init];
        _interval = 2*60*60;
    });
    return cache;
}
- (BOOL)saveDataWithData:(NSData *)data andStringName:(NSString *)name{
    NSString *path = [NSString stringWithFormat:@"%@/Documents/Cache/",NSHomeDirectory()];
    NSFileManager *fileManager = [NSFileManager defaultManager];
    
    BOOL isSuccess = [fileManager createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
    if (isSuccess) {
        NSLog(@"创建路径成功");
    }
    NSString *allPath = [path stringByAppendingString:name.md5];
    BOOL isWriteSuc = [data writeToFile:allPath atomically:YES];
    return isWriteSuc;
    
}

- (NSData *)getDataWithStringName:(NSString *)name{
    NSString *tempName = name.md5;
    NSString *path = [NSString stringWithFormat:@"%@/Documents/Cache/",NSHomeDirectory()];
    NSString *allPath = [path stringByAppendingString:tempName];
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:allPath]) {
        NSLog(@"文件不存在");
        return nil;
    }
    NSTimeInterval interval = [[NSDate date]timeIntervalSinceDate:[self getLasttime:allPath]];
    if (interval>=_interval) {
        return nil;
    }
    NSData *data = [NSData dataWithContentsOfFile:allPath];
    return data;
    
}
- (NSDate *)getLasttime:(NSString *)path{
    NSFileManager *manager = [NSFileManager defaultManager];
    NSDictionary *dic = [manager attributesOfItemAtPath:path error:nil];
    return dic[@"NSFileModificationDate"];
}
@end
