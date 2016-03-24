//
//  ChecklistItem.h
//  Checklists
//
//  Created by HeBin on 16/2/4.
//  Copyright © 2016年 Myzle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Realm/Realm.h>

@interface ChecklistItem : RLMObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

- (void)toggleChecked;

@end
