//
//  RACDynamicSignal.h
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2013-10-10.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "RACSignal.h"

// everything is stream

// A 是一个事件源
// 随着时间不断产生事件
// 事件沿着管道流动
//
// 这个管道可以接入任意的分支，将事件截流
// 接入的方式的就是 订阅

// A private `RACSignal` subclasses that implements its subscription behavior
// using a block.
@interface RACDynamicSignal : RACSignal

+ (RACSignal *)createSignal:(RACDisposable * (^)(id<RACSubscriber> subscriber))didSubscribe;

@end
