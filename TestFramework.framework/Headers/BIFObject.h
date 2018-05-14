//
//  BIFObject.h
//  BIFCore
//
//  Created by Softwind.Tang on 14/12/2.
//  Copyright (c) 2014年 Plan B Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BIFObject <NSObject>

/**
 *  用字典来描述这个类，字典中包含类中的所有属性，以 属性名:属性值 为一个单位。
 *
 *  @return 代表这个类的字典。
 */
- (NSMutableDictionary *)dictionaryRepresentation;

@optional

/**
 *  方法重组，需要的情况下实现
 */
+ (void)swizzleSelector;
@end

@interface BIFObject : NSObject <BIFObject, NSCoding>

@end
