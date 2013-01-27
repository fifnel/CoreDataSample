//
//  DetailViewController.h
//  CoreDataSample
//
//  Created by fifnel on 2013/01/27.
//  Copyright (c) 2013年 fifnel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
