//
//  InfoDetailStatusViewController.h
//  gamyt
//
//  Created by yons on 15-3-13.
//  Copyright (c) 2015年 hmzl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InfoDetailStatusViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIScrollView *myscrollview;
@property (nonatomic, strong) NSNumber *newsid;
- (IBAction)refresh:(id)sender;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refreshBtn;

@end
