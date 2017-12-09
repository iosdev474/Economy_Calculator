//
//  s1ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface s1ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *revenueofsstextfield;
@property (weak, nonatomic) IBOutlet UITextField *breakevenrevenueofsstextfield;
@property (weak, nonatomic) IBOutlet UILabel *revenueofsslabel;
@property (weak, nonatomic) IBOutlet UILabel *breakevenrevenuelabel;
@property (weak, nonatomic) IBOutlet UILabel *ssofsslabel;

- (IBAction)ssgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
