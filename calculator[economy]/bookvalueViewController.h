//
//  bookvalueViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>







@interface bookvalueViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *balancedowncapitaltextfield;
@property (weak, nonatomic) IBOutlet UITextField *Equalitycapitaltextfield;

@property (weak, nonatomic) IBOutlet UILabel *balancedowncapitallabel;
@property (weak, nonatomic) IBOutlet UILabel *equalitycapitallabel;
@property (weak, nonatomic) IBOutlet UILabel *bookvaluelabel;

- (IBAction)bookvaluegobutton:(id)sender;

- (IBAction)ReturnKeyButton1:(id)sender;
















@end
