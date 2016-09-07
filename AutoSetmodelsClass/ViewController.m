//
//  ViewController.m
//  AutoSetmodelsClass
//
//  Created by gaozhichao on 16/8/5.
//  Copyright © 2016年 gaozhichao. All rights reserved.
//

#import "ViewController.h"
#import "FFUtility.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UITextView *jsonStringTextView;
@property (weak, nonatomic) IBOutlet UITextField *baseClassName;
@property (weak, nonatomic) IBOutlet UITextField *urlRequestString;


@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
  
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    [self.view endEditing:NO];
    
}

- (IBAction)ButtonClick:(id)sender {

    [[FFUtility sharedFFUtility] setbaseClassName:self.baseClassName.text  setJsonData:self.jsonStringTextView.text setJsonUrl:self.urlRequestString.text];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
