//
//  m2ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface m2ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *marketvolumetextfield;
@property (weak, nonatomic) IBOutlet UITextField *marketvolumebeforetextfield;
@property (weak, nonatomic) IBOutlet UILabel *marketvolumeatplanningtimelabel;
@property (weak, nonatomic) IBOutlet UILabel *marketvolumebeforeofmglabel;
@property (weak, nonatomic) IBOutlet UILabel *marketgrowthofmglabel;

- (IBAction)marketgrowthgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
