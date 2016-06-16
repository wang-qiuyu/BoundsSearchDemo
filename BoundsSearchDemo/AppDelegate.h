//
//  AppDelegate.h
//  BoundsSearchDemo
//
//  Created by qiuyu on 16/6/16.
//  Copyright © 2016年 qiuyu. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "ViewController.h"
#import <BaiduMapAPI_Base/BMKBaseComponent.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate,BMKGeneralDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic ,strong) ViewController *viewController;


@end

