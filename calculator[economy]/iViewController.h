//
//  iViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *inventoriestextfield;
@property (weak, nonatomic) IBOutlet UITextField *totalassetsofiitextfield;
@property (weak, nonatomic) IBOutlet UILabel *inventorieslabel;
@property (weak, nonatomic) IBOutlet UILabel *totalassetslabel;
@property (weak, nonatomic) IBOutlet UILabel *inventoryintensitylabel;

- (IBAction)inventoryintensitygobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
