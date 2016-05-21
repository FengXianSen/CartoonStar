//
//  ZXDownLoadManager.h
//  CartoonStar
//
//  Created by FengZC on 16/1/29.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ZXDownLoadManager;
@protocol ZXDownLoadManagerDelegate <NSObject>

- (void)fileDownloader:(ZXDownLoadManager *)manager failWithError:(NSError *)errpr;

- (void)fileDownloader:(ZXDownLoadManager *)manager didDownloadSize:(long long)downloadSize totalSize:(long long)totalSize;

- (void)fileDownloaderDidFinish:(ZXDownLoadManager *)manager;

@end
@interface ZXDownLoadManager : NSObject

@property (nonatomic,strong)NSURL *url;

@property (nonatomic,copy)NSString *pathString;

@property (nonatomic,weak)id <ZXDownLoadManagerDelegate>delegate;


- (void)start;
- (void)stop;

@end
