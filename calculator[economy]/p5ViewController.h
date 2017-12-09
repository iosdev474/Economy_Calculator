//
//  p5ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p5ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *inputofproductivitytextfield;
@property (weak, nonatomic) IBOutlet UITextField *outputofproductivitytextfield;
@property (weak, nonatomic) IBOutlet UILabel *productivityofplabel;
@property (weak, nonatomic) IBOutlet UILabel *outputofplabel;
@property (weak, nonatomic) IBOutlet UILabel *inputofplabel;

- (IBAction)productivitygobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
