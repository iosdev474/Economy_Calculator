//
//  o2ViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "o2ViewController.h"

@interface o2ViewController ()

@end

@implementation o2ViewController

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

- (IBAction)ordertrendgobutton:(id)sender {
  
    float x = ([self.ordersrecivedrecentlytextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.orderrecivedinthecomparisionperiodtextfield.text floatValue]);
    float result;
    float result1;
    result = (x/y)*100;
    result1 = result-100;
    self.orderrecivedrecentlyofotlabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.orderrecivedinthecomparisionperiodlabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.ordertrendofotlabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
    self.changesofotlabel.text = [[NSString alloc] initWithFormat:@"%.3f", result1];
}
@end
