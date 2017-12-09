//
//  o2ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface o2ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *ordersrecivedrecentlytextfield;
@property (weak, nonatomic) IBOutlet UITextField *orderrecivedinthecomparisionperiodtextfield;
@property (weak, nonatomic) IBOutlet UILabel *orderrecivedrecentlyofotlabel;
@property (weak, nonatomic) IBOutlet UILabel *orderrecivedinthecomparisionperiodlabel;
@property (weak, nonatomic) IBOutlet UILabel *ordertrendofotlabel;
@property (weak, nonatomic) IBOutlet UILabel *changesofotlabel;


- (IBAction)ordertrendgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
