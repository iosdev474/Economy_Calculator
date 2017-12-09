//
//  p2ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p2ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *pricebeforeofpetextfield;
@property (weak, nonatomic) IBOutlet UITextField *priceafterofpetextfield;
@property (weak, nonatomic) IBOutlet UITextField *salesvolumebeforetextfield;
@property (weak, nonatomic) IBOutlet UITextField *salesvolumeaftertextfield;
@property (weak, nonatomic) IBOutlet UILabel *pricebeforeofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *priceafterofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *salesvolumebeforeofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *salesvolumeafterofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *changesinpriceofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *changesinsalesvolumeofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *priceelasticityofpelabel;
@property (weak, nonatomic) IBOutlet UILabel *turnoverincreaseordecreaseofpelabel;

- (IBAction)priceelasticityofpelabel:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
