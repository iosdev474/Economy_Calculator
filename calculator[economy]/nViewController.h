//
//  nViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface nViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *actualcoststextfield;
@property (weak, nonatomic) IBOutlet UITextField *actualpricestextfield;
@property (weak, nonatomic) IBOutlet UILabel *actualcostsofncslabel;
@property (weak, nonatomic) IBOutlet UILabel *actualpriceofnclabel;
@property (weak, nonatomic) IBOutlet UILabel *ncofnclabel;

- (IBAction)normalcostsgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
