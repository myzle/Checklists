//
//  Checklist.m
//  Checklists
//
//  Created by HeBin on 16/2/16.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import "Checklist.h"
#import "ChecklistItem.h"
#import <Realm/Realm.h>

@implementation Checklist

- (id)init {
    if ((self = [super init])) {
        //self.items = [];
    }
    return self;
}

- (int)countUncheckedItems {
    int count = 0;
    for (ChecklistItem *item in self.items) {
        if (!item.checked) {
            count += 1;
        }
    }
    return count;
}

@end
