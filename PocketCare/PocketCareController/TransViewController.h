//
//  TransViewController.h
//  BTLE Transfer
//
//  Created by ajay singh on 10/4/15.
//  Copyright © 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BackgroundTask.h"


@interface TransViewController : UIViewController{
    BackgroundTask * bgTask;

}
- (IBAction)transmit:(id)sender;

- (IBAction)receive:(id)sender;




@end
