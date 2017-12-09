//
//  economicViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "economicViewController.h"

@interface economicViewController ()

@end

@implementation economicViewController

-(IBAction)ReturnKeyButton1:(id)sender {
    [sender resignFirstResponder];
}


- (void)viewDidLoad {
    [super viewDidLoad];
 
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)economicefficiencygobutton:(id)sender {
  
    float x = ([self.operatingresultstextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.necessaryoperationcapitaltextfield.text floatValue]);
    float result;
    result = (x/y)*100;
    self.operatingresultslabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.necessaryoperationcapitallabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.economicefficiencylabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
}
@end
