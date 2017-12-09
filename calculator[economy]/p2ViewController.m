//
//  p2ViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "p2ViewController.h"

@interface p2ViewController ()

@end

@implementation p2ViewController

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

- (IBAction)priceelasticityofpelabel:(id)sender {
  
    float a = ([self.pricebeforeofpetextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float b = ([self.priceafterofpetextfield.text floatValue]);
    float c = ([self.salesvolumebeforetextfield.text floatValue]);
    float d = ([self.salesvolumeaftertextfield.text floatValue]);
    float result;
    float result1;
    float result2;
    float result3;
    result = ((b-a)/a)*100;
    result1 = ((d-c)/c)*100;
    result2 = (result1/result);
    result3 = ((result+100)*(result1+100)/100)-100;
    self.pricebeforeofpelabel.text = [[NSString alloc] initWithFormat:@"%.2f", a];     //balanceowncapitallabel is name of label
    self.priceafterofpelabel.text = [[NSString alloc] initWithFormat:@"%.2f", b];
    self.salesvolumebeforeofpelabel.text = [[NSString alloc] initWithFormat:@"%.2f", c];
    self.salesvolumeafterofpelabel.text = [[NSString alloc] initWithFormat:@"%.2f", d];
    self.changesinpriceofpelabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
    self.changesinsalesvolumeofpelabel.text = [[NSString alloc] initWithFormat:@"%.3f", result1];
    self.priceelasticityofpelabel.text = [[NSString alloc] initWithFormat:@"%.3f", result2];
    self.turnoverincreaseordecreaseofpelabel.text = [[NSString alloc] initWithFormat:@"%.3f", result3];
}
@end
