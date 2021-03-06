/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <Foundation/Foundation.h>

@interface ASQueue : NSObject

- (instancetype)initWithName:(const char *)name;

+ (ASQueue *)mainQueue;
+ (ASQueue *)globalQueue;

+ (void)dispatchOnStageQueue:(dispatch_block_t)block;

+ (void)dispatchOnStageQueue:(dispatch_block_t)block synchronous:(BOOL)synchronous;

+ (void)dispatchOnMainQueue:(dispatch_block_t)block;

+ (void)dispatchOnMainQueue:(dispatch_block_t)block synchronous:(BOOL)synchronous;

- (dispatch_queue_t)nativeQueue;

- (bool)isCurrentQueue;

- (void)dispatchOnQueue:(dispatch_block_t)block;
- (void)dispatchOnQueue:(dispatch_block_t)block synchronous:(bool)synchronous;

@end
