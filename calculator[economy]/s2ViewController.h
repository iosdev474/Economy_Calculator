//
//  s2ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface s2ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *salesrevenueofsostextfield;
@property (weak, nonatomic) IBOutlet UITextField *numberoforderstextfield;
@property (weak, nonatomic) IBOutlet UILabel *salesrevenueofsoolabel;
@property (weak, nonatomic) IBOutlet UILabel *numberoforderslabel;
@property (weak, nonatomic) IBOutlet UILabel *sosofsoslabel;

- (IBAction)sizeofordergobuttonlabel:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
