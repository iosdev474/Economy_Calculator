//
//  yViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface yViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *revenueofytextfield;
@property (weak, nonatomic) IBOutlet UITextField *expensesofytextfield;
@property (weak, nonatomic) IBOutlet UILabel *revenueofyieldlabel;
@property (weak, nonatomic) IBOutlet UILabel *expensesofylabel;
@property (weak, nonatomic) IBOutlet UILabel *profitofylabel;
@property (weak, nonatomic) IBOutlet UILabel *yieldofylabel;

- (IBAction)yieldgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
