//
//  KSViewController.h
//  SQLiteDemo
//
//  Created by kesalin on 3/28/13.
//  Copyright (c) 2013 kesalin@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KSViewController : UIViewController
{
    UIButton * addButton;
    UIButton * deleteButton;
    UIButton * updateButton;
}

@property (nonatomic, weak) IBOutlet UIButton * addButton;
@property (nonatomic, weak) IBOutlet UIButton * deleteButton;
@property (nonatomic, weak) IBOutlet UIButton * updateButton;

- (IBAction)addButtonPressed:(id)sender;
- (IBAction)deleteButtonPressed:(id)sender;
- (IBAction)updateButtonPressed:(id)sender;

@end