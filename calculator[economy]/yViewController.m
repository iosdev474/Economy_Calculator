//
//  yViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "yViewController.h"

@interface yViewController ()

@end

@implementation yViewController

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

- (IBAction)yieldgobutton:(id)sender {
  
    float x = ([self.revenueofytextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.expensesofytextfield.text floatValue]);
    float result;
    float result1;
    result = (x-y);
    result1 = (result/y)*100;
    self.revenueofyieldlabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.expensesofylabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.profitofylabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
    self.yieldofylabel.text = [[NSString alloc] initWithFormat:@"%.3f", result1];
}
@end
