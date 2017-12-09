//
//  p6ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p6ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *revenueofppatextfield;
@property (weak, nonatomic) IBOutlet UITextField *areainmsqofppatextfield;
@property (weak, nonatomic) IBOutlet UILabel *revenueofppalabel;
@property (weak, nonatomic) IBOutlet UILabel *areamsqofppalabel;
@property (weak, nonatomic) IBOutlet UILabel *ppaofppalabel;

- (IBAction)productivityperareagobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
