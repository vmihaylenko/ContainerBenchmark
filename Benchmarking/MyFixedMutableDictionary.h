//
//  MyFixedMutableDictionary.h
//  Benchmarking
//
//  Created by Vlad Mihaylenko on 22.01.15.
//  Copyright (c) 2015 Vlad Mihaylenko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyFixedMutableDictionary : NSMutableDictionary
- (instancetype)initWithSize:(NSUInteger)size;
@end
