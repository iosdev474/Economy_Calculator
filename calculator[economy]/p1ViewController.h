//
//  p1ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p1ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *fixedcostsofpptextfield;
@property (weak, nonatomic) IBOutlet UITextField *plannedprofittextfield;
@property (weak, nonatomic) IBOutlet UITextField *unitcontributionmargintextfield;
@property (weak, nonatomic) IBOutlet UILabel *fixedcostsofpplabel;
@property (weak, nonatomic) IBOutlet UILabel *plannedprofitofpplabel;
@property (weak, nonatomic) IBOutlet UILabel *unitcontributionmarginofpplabel;
@property (weak, nonatomic) IBOutlet UILabel *neededamountofsalesofplannedprofitlabel;

- (IBAction)plannedprofitgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
