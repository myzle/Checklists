//
//  ViewController.h
//  Checklists
//
//  Created by HeBin on 16/2/4.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDetailViewController.h"

@class Checklist;

@interface ChecklistsViewController : UITableViewController <ItemDetailViewControllerDelegate>

@property (nonatomic, strong) Checklist *checklist;

@end

