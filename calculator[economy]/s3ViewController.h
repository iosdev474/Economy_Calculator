//
//  s3ViewController.h
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface s3ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *storagecosttotalofsrtextfield;
@property (weak, nonatomic) IBOutlet UITextField *inventoryvalueofsrtextfield;
@property (weak, nonatomic) IBOutlet UILabel *storagecosttotalofsrlabel;
@property (weak, nonatomic) IBOutlet UILabel *inventoryvalueofsrlabel;
@property (weak, nonatomic) IBOutlet UILabel *srofsrlabel;

- (IBAction)storagerategobutton:(id)sender;
-(IBAction)ReturnKeyButton1:(id)sender ;

@end
