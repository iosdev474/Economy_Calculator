//
//  p3ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p3ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *pricereductionsofprqtextfield;
@property (weak, nonatomic) IBOutlet UITextField *salesrevenuetextfield;
@property (weak, nonatomic) IBOutlet UILabel *pricereductionsofprqlabel;
@property (weak, nonatomic) IBOutlet UILabel *salesrevenueofprqlabel;
@property (weak, nonatomic) IBOutlet UILabel *pricereductionquotelabel;

- (IBAction)pricereductionquotegobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
