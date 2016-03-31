//
//  ChecklistItem.m
//  Checklists
//
//  Created by HeBin on 16/2/4.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void)toggleChecked {
    self.checked = !self.checked;
}

@end
