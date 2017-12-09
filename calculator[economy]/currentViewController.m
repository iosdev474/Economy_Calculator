//
//  currentViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "currentViewController.h"

@interface currentViewController ()

@end

@implementation currentViewController

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

- (IBAction)currentratiogobutton:(id)sender {
  
    float x = ([self.floatingcapitaltextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.borrowedcapitaltextfield.text floatValue]);
    float result;
    result = (x/y)*100;
    self.floatingcapitallabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.borrowedcapitalofcrlabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.currentratioofcrlabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
}
@end
