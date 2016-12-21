//
//  ViewController.h
//  BoundsSearchDemo
//
//  Created by qiuyu on 16/6/16.
//  Copyright © 2016年 qiuyu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Base/BMKBaseComponent.h>//引入base相关所有的头文件

#import <BaiduMapAPI_Map/BMKMapComponent.h>//引入地图功能所有的头文件

#import <BaiduMapAPI_Search/BMKSearchComponent.h>//引入检索功能所有的头文件

#import <BaiduMapAPI_Cloud/BMKCloudSearchComponent.h>//引入云检索功能所有的头文件

#import <BaiduMapAPI_Location/BMKLocationComponent.h>//引入定位功能所有的头文件

#import <BaiduMapAPI_Map/BMKMapView.h>//只引入所需的单个头文件
#import <BaiduMapAPI_Map/BMKMapComponent.h>
#import <BaiduMapAPI_Location/BMKLocationComponent.h>

@interface ViewController : UIViewController<BMKMapViewDelegate, BMKPoiSearchDelegate,BMKMapViewDelegate,BMKLocationServiceDelegate,BMKGeoCodeSearchDelegate>
{
    BMKMapView* _mapView;
    BMKPoiSearch* _poisearch;
    BMKLocationService* _locService;
    
    CLLocationCoordinate2D leftBottomPoint;
    CLLocationCoordinate2D rightBottomPoint;
}

@property (nonatomic ,strong) NSMutableArray *annotationsArray;


@end

