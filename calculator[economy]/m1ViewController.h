//
//  m1ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface m1ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *outputtextfield;
@property (weak, nonatomic) IBOutlet UITextField *timehtextfield;
@property (weak, nonatomic) IBOutlet UILabel *outputofmplabel;
@property (weak, nonatomic) IBOutlet UILabel *timehofmplabel;
@property (weak, nonatomic) IBOutlet UILabel *mpofmplabel;

- (IBAction)machineryproductivitygobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
