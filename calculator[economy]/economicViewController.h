//
//  economicViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface economicViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *operatingresultstextfield;
@property (weak, nonatomic) IBOutlet UITextField *necessaryoperationcapitaltextfield;
@property (weak, nonatomic) IBOutlet UILabel *operatingresultslabel;
@property (weak, nonatomic) IBOutlet UILabel *necessaryoperationcapitallabel;
@property (weak, nonatomic) IBOutlet UILabel *economicefficiencylabel;

- (IBAction)economicefficiencygobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
