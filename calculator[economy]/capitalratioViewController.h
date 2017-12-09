//
//  capitalratioViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface capitalratioViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *Fixedassettextfield;
@property (weak, nonatomic) IBOutlet UITextField *totalassetstextfield;
@property (weak, nonatomic) IBOutlet UILabel *fixedassetlabel;
@property (weak, nonatomic) IBOutlet UILabel *totalassets;
@property (weak, nonatomic) IBOutlet UILabel *capitalizationratiolabel;


- (IBAction)capitalizationratiogobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender;

@end
