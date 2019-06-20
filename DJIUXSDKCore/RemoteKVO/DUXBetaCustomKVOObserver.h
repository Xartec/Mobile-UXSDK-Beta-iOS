//
//  DUXBetaCustomKVOObserver.h
//
//  MIT License
//  
//  Copyright © 2018-2019 DJI
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:

//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.

//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//  

#import <Foundation/Foundation.h>

@interface DUXBetaCustomKVOObserver : NSObject

@property (weak, nonatomic) id _Nullable object;
@property (assign, nonatomic) SEL _Nullable selector;
@property (copy, nonatomic) void (^ _Nullable block)(id _Nullable oldValue,id _Nullable newValue);

+ (nonnull DUXBetaCustomKVOObserver *)observerWithKeypath:(nonnull NSString *)keypath withObject:(nonnull id)object withSelector:(nonnull SEL)selector;
+ (nonnull DUXBetaCustomKVOObserver *)observerWithKeypath:(nonnull NSString *)keypath withObject:(nonnull id)object withBlock:(nonnull void(^)(id _Nullable oldValue,id _Nullable newValue))block;

- (void)callbackWithOldValue:(nullable id)oldValue withNewValue:(nullable id)newValue;

/**
 *  Observe key.
 *
 *  @return Only first path.
 */
- (nullable NSString *)observeKey;

/**
 *  Return Sub path
 *
 *  @return If haven't return no.
 */
- (nullable NSString *)observeSubpath;

@end
