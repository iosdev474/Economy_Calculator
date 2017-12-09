//
//  cashViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cashViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *fixedcosttextfield;
@property (weak, nonatomic) IBOutlet UITextField *depreciationtextfield;
@property (weak, nonatomic) IBOutlet UITextField *unitcontributionmargintextfield;
@property (weak, nonatomic) IBOutlet UILabel *fixedcostsofcslabel;
@property (weak, nonatomic) IBOutlet UILabel *depreciationofcslabel;
@property (weak, nonatomic) IBOutlet UILabel *unitcontributionmarginofcplabel;
@property (weak, nonatomic) IBOutlet UILabel *cashpointofcplabel;

- (IBAction)cashpointgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
