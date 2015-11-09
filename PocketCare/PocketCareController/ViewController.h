/*
 
 File: ViewController.h
 
 Abstract: View Controller to select whether the App runs in Central or 
 Peripheral Mode
 
 Version: 1.0
 

 */

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface ViewController : UIViewController <CLLocationManagerDelegate>

@end
