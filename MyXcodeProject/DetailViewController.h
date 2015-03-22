//
//  DetailViewController.h
//  MyXcodeProject
//
//  Created by scott dallamura on 3/22/15.
//  Copyright (c) 2015 scott dallamura. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

