//
//  p4ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p4ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *actualcostfopvtextfield;
@property (weak, nonatomic) IBOutlet UITextField *targetcostsofpvtextfield;
@property (weak, nonatomic) IBOutlet UILabel *actualcostlabel;
@property (weak, nonatomic) IBOutlet UILabel *targetcostofpvlabel;
@property (weak, nonatomic) IBOutlet UILabel *pricevarienceofpvlabel;

- (IBAction)pricevariancegobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
