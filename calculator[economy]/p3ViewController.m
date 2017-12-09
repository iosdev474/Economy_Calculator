//
//  p3ViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "p3ViewController.h"

@interface p3ViewController ()

@end

@implementation p3ViewController

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

- (IBAction)pricereductionquotegobutton:(id)sender {
  
    float x = ([self.pricereductionsofprqtextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.salesrevenuetextfield.text floatValue]);
    float result;
    result = (x/y)*100;
    self.pricereductionsofprqlabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.salesrevenueofprqlabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.pricereductionquotelabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
}
@end
