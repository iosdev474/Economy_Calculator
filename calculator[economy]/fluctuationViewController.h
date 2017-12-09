//
//  fluctuationViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface fluctuationViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *fluctuationofemployeestextfield;
@property (weak, nonatomic) IBOutlet UITextField *workforcetextfield;
@property (weak, nonatomic) IBOutlet UILabel *flucationofemployeesoffrlabel;
@property (weak, nonatomic) IBOutlet UILabel *workforceoffrlabel;
@property (weak, nonatomic) IBOutlet UILabel *fluctuationrateoffrlabel;

- (IBAction)flucationrategobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
