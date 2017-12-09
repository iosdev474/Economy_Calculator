//
//  oViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface oViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *recivedordertextfield;
@property (weak, nonatomic) IBOutlet UITextField *offerstextfield;
@property (weak, nonatomic) IBOutlet UILabel *recivedordersofoslabel;
@property (weak, nonatomic) IBOutlet UILabel *offersofoslabel;
@property (weak, nonatomic) IBOutlet UILabel *offeringsucessofoslabel;
@property (weak, nonatomic) IBOutlet UILabel *possibleenhancementofoslabel;

- (IBAction)offerinfsuccessgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
