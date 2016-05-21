
//
//  AppDelegate.m
//  CartoonStar
//
//  Created by FengZC on 16/1/18.
//  Copyright (c) 2016年 FengZC. All rights reserved.
//

#import "AppDelegate.h"
#import "ZXChoiceQualityViewController.h"
#import "ZXCollectionViewController.h"
#import "ZXFindViewController.h"
#import "ZXMineViewController.h"
//#import "UMSocial.h"
//#import "UMSocialWechatHandler.h"
//#import "TencentOpenAPI/QQApiInterface.h"
//#import "TencentOpenAPI/TencentOAuth.h"
@interface AppDelegate ()
@property (nonatomic,strong)UIImageView *AlertImageView;
@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
//    [UMSocialData setAppKey:@"507fcab25270157b37000010"];
//    [UMSocialWechatHandler setWXAppId:@"wxd9a39c7122aa6516" url:nil];
//    [UMSocialConfig setQQAppId:@"100424468" url:nil importClasses:@[[QQApiInterface class],[TencentOAuth class]]];
    _AlertImageView  = [[UIImageView alloc]initWithFrame:self.window.bounds];
    NSMutableArray *array = [[NSMutableArray alloc]init];
    for (int i=1; i<9; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"%d",i]];
        [array addObject:image];
    }
    _AlertImageView.animationImages = array;
    _AlertImageView.animationDuration = 0.5;
    _AlertImageView.animationRepeatCount = 0;
    [_AlertImageView startAnimating];
    [self.window addSubview:_AlertImageView];
    [self.window bringSubviewToFront:_AlertImageView];

    self.window.backgroundColor = [UIColor whiteColor];
    [self performSelector:@selector(prepareTabbarController) withObject:nil afterDelay:2.5];
    //[self prepareTabbarController];
    //NSLog(@"%@",NSHomeDirectory());
    [self.window makeKeyAndVisible];
    return YES;
}
- (void)prepareTabbarController{
    [self.AlertImageView removeFromSuperview];
    UITabBarController *tabController = [[UITabBarController alloc]init];
    NSArray *tabNames = @[@"漫画",@"收藏",@"发现",@"我的"];
    NSArray *controllers = @[@"ZXRootViewController",@"ZXCollectionRootViewController",@"ZXFindViewController",@"ZXMineViewController"];
    NSArray *images = @[@"icon_main_bottom_store_pressed_smartbar.png",@"icon_main_bottom_favorite_pressed_smartbar.png",@"icon_main_bottom_game_pressed_green.png",@"icon_main_bottom_user_pressed_smartbar.png"];
    NSArray *normalImages = @[@"icon_main_bottom_store_normal",@"icon_main_bottom_favorite_normal",@"icon_main_bottom_game_normal",@"icon_main_bottom_user_normal"];
    NSMutableArray *mutableArray = [[NSMutableArray alloc]init];
    for (int i=0; i<tabNames.count; i++) {
        Class cls = NSClassFromString(controllers[i]);
        UIViewController *controller = [[cls alloc]init];
        //controller.tabBarItem.title = tabNames[i];
        UIImage *normalImage = [[UIImage imageNamed:normalImages[i]]imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        UIImage *newNormalImage = [self scaleFromImage:normalImage toSize:CGSizeMake(30, 30)];
        UIImage *Image = [[UIImage imageNamed:images[i]]imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        UIImage *newImage = [self scaleFromImage:Image toSize:CGSizeMake(40, 40)];
        controller.tabBarItem = [[UITabBarItem alloc]initWithTitle:tabNames[i] image:newNormalImage selectedImage:newImage];
        //UINavigationController *nvc = [[UINavigationController alloc]initWithRootViewController:controller];
        [mutableArray addObject:controller];
    }
    tabController.viewControllers = mutableArray;
    self.window.rootViewController = tabController;
}
- (UIImage *)scaleFromImage:(UIImage *)Image toSize:(CGSize)size{
    UIGraphicsBeginImageContext(size);
    [Image drawInRect:CGRectMake(0, 0, size.width, size.height)];
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    return newImage;
}
- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
