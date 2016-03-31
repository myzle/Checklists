//
//  Checklist.h
//  Checklists
//
//  Created by HeBin on 16/2/16.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>
#import "ChecklistItem.h"

@interface Checklist : RLMObject

@property (nonatomic, copy) NSString *name;
@property RLMArray<ChecklistItem> *items;

- (int)countUncheckedItems;

@end
