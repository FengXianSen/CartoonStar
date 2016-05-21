//
//  ZXUpdateModel.m
//  CartoonStar
//
//  Created by FengZC on 16/1/27.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "ZXUpdateModel.h"

@implementation ZXUpdateModel

+ (BOOL)propertyIsOptional:(NSString *)propertyName{
    return YES;
}

- (instancetype)initWithDictionary:(NSDictionary *)dict error:(NSError *__autoreleasing *)err{
    if (self=[super initWithDictionary:dict error:err]) {
        _myDescription = dict[@"description"];
    }
    return self;
}
@end
