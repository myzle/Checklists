//
//  Checklist.h
//  Checklists
//
//  Created by HeBin on 16/2/16.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

@interface Checklist : RLMObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) RLMResults *items;

- (int)countUncheckedItems;

@end
