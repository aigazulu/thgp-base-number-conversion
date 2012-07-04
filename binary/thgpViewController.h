//
//  thgpViewController.h
//  binary
//
//  Created by Kurt Collins on 6/27/12.
//  Copyright (c) 2012 Enole. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface thgpViewController : UIViewController
<UIPickerViewDataSource , UIPickerViewDelegate>
{
    
    UITextField *inputText;
    UITextField *outputText;
    IBOutlet UIPickerView *singlePicker;
    NSArray *pickerData;

}

@property (nonatomic, retain) IBOutlet UITextField *inputText;
@property (nonatomic, retain) IBOutlet UITextField *outputText;
@property(nonatomic , retain) UIPickerView *singlePicker;
@property(nonatomic , retain) NSArray *pickerData;


-(IBAction)converter:(id)sender;
@end
