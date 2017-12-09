//
//  s3ViewController.m
//  calculator[economy]
//
//  Created by Narender Pal Singh on 29/03/16.
//  Copyright © 2016 Narender Pal Singh. All rights reserved.
//

#import "s3ViewController.h"

@interface s3ViewController ()

@end

@implementation s3ViewController

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

- (IBAction)storagerategobutton:(id)sender {
  
    float x = ([self.storagecosttotalofsrtextfield.text floatValue]);  // balanceowncapitalfield is name of field
    float y = ([self.inventoryvalueofsrtextfield.text floatValue]);
    float result;
    result = (x/y)*100;
    self.storagecosttotalofsrlabel.text = [[NSString alloc] initWithFormat:@"%.2f", x];     //balanceowncapitallabel is name of label
    self.inventoryvalueofsrlabel.text = [[NSString alloc] initWithFormat:@"%.2f", y];
    self.srofsrlabel.text = [[NSString alloc] initWithFormat:@"%.3f", result];
}
@end
