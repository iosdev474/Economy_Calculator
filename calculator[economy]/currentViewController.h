//
//  currentViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface currentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *floatingcapitaltextfield;
@property (weak, nonatomic) IBOutlet UITextField *borrowedcapitaltextfield;
@property (weak, nonatomic) IBOutlet UILabel *floatingcapitallabel;
@property (weak, nonatomic) IBOutlet UILabel *borrowedcapitalofcrlabel;
@property (weak, nonatomic) IBOutlet UILabel *currentratioofcrlabel;

- (IBAction)currentratiogobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
