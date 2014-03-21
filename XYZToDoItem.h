//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Oscar Iván on 2/28/14.
//  Copyright (c) 2014 CEA Jalisco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
