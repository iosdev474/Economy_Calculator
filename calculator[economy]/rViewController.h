//
//  rViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface rViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *unitcontributionmarginofrucmtextfield;
@property (weak, nonatomic) IBOutlet UITextField *productiontimeofrucmtextfield;
@property (weak, nonatomic) IBOutlet UILabel *unitcontributionmarginfrucmlabel;
@property (weak, nonatomic) IBOutlet UILabel *productivitytimeofrucmlabel;
@property (weak, nonatomic) IBOutlet UILabel *rucmofrucmlabel;


- (IBAction)rucmgobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
