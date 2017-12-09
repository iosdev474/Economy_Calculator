//
//  o3ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface o3ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *actualcostsinodtextfield;
@property (weak, nonatomic) IBOutlet UITextField *allocatedcostsofodtextfield;
@property (weak, nonatomic) IBOutlet UILabel *actualcostsofodlabel;
@property (weak, nonatomic) IBOutlet UILabel *allocatedcostslabel;
@property (weak, nonatomic) IBOutlet UILabel *odofodlabel;

- (IBAction)overalldivergencegobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
