//
//  oViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "oViewController.h"

@interface oViewController ()

@end

@implementation oViewController

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

- (IBAction)offerinfsuccessgobutton:(id)sender {
  
    float x = ([self.recivedordertextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.offerstextfield.text floatValue]);
    float result;
    float result1;
    result = (x/y)*100;
    result1 = 100*(100/result-1);
    self.recivedordersofoslabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.offersofoslabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.offeringsucessofoslabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
    self.possibleenhancementofoslabel.text = [[NSString alloc] initWithFormat:@"%.3f", result1];
}
@end
