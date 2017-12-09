//
//  o3ViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "o3ViewController.h"

@interface o3ViewController ()

@end

@implementation o3ViewController

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

- (IBAction)overalldivergencegobutton:(id)sender {
  
    float x = ([self.actualcostsinodtextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.allocatedcostsofodtextfield.text floatValue]);
    float result;
    result = (x-y);
    self.actualcostsofodlabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.allocatedcostslabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.odofodlabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
}
@end
