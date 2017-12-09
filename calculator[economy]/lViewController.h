//
//  lViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface lViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *currentactivityleveltextfield;
@property (weak, nonatomic) IBOutlet UITextField *plannedactivityleveltextfield;
@property (weak, nonatomic) IBOutlet UILabel *currentactivitylevelofloelabel;
@property (weak, nonatomic) IBOutlet UILabel *planedactivitylevelofloelabel;
@property (weak, nonatomic) IBOutlet UILabel *levelofemploymentofloelabel;

- (IBAction)levelofemploymentgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
