//
//  ViewController.h
//  stv_project2.5.7
//
//  Created by 比留間龍三 on 2018/07/23.
//  Copyright © 2018年 比留間龍三. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController<MKMapViewDelegate>

@property IBOutlet MKMapView *mapView;
@end
