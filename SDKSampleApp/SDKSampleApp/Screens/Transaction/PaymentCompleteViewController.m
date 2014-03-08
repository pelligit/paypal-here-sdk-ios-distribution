//
//  PaymentCompleteViewController.m
//  SDKSampleApp
//
//  Created by Chandrashekar,Sathyanarayan on 3/5/14.
//  Copyright (c) 2014 PayPalHereSDK. All rights reserved.
//

#import "PaymentCompleteViewController.h"
#import "ReceiptInfoViewController.h"
#import <PayPalHereSDK/PPHTransactionManager.h>
#import <PayPalHereSDK/PPHTransactionRecord.h>
#import <PayPalHereSDK/PPHError.h>

@interface PaymentCompleteViewController ()

@end

@implementation PaymentCompleteViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if(_transactionResponse.error == nil)
    {
        self.paymentStatus.text = @"Payment Successful";
        if(_transactionResponse.record.transactionId != nil)
        {
            self.paymentDetails.text = [NSString stringWithFormat: @"Transaction Id : %@", _transactionResponse.record.transactionId];
        }
        else
        {
            self.paymentDetails.text = [NSString stringWithFormat: @"Invoice Id : %@", _transactionResponse.record.payPalInvoiceId];
        }
        
    }
    else
    {
        self.paymentStatus.text = @"Payment Declined";
        self.paymentDetails.text = [NSString stringWithFormat: @"Error : %@", _transactionResponse.error.description];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)onEmailPressed:(id)sender
{
    [self showReceiptView:YES];
}

-(IBAction)onTextPressed:(id)sender
{
    [self showReceiptView:NO];
}

-(IBAction)onNoThanksPressed:(id)sender
{
    [self.navigationController popToRootViewControllerAnimated:YES];
}

-(void) showReceiptView:(BOOL)isEmail
{
    ReceiptInfoViewController* receiptInfoViewController = [[ReceiptInfoViewController alloc]
                                                                    initWithNibName:@"ReceiptInfoViewController"
                                                                    bundle:nil];
    receiptInfoViewController.isEmail = isEmail;
    receiptInfoViewController.transactionRecord = _transactionResponse.record;
    [self.navigationController pushViewController:receiptInfoViewController animated:YES];
}

@end