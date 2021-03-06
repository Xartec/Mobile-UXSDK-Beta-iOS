//
//  DUXBetaCompassGyroHorizonLayer.h
//  DJIUXSDK
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

#import <QuartzCore/QuartzCore.h>

@interface DUXBetaCompassGyroHorizonLayer : CAShapeLayer

/**
 *  The pitch angle measured in degrees to be indcated in the view.
 */
@property (nonatomic, assign) CGFloat pitch;

/**
 *  The roll angle measured in degrees to be indicated in the view.
 */
@property (nonatomic, assign) CGFloat roll;

/**
 *  Updates both pitch and roll in a single redraw.
 *
 *  @param pitch The pitch angle measured in degrees
 *  @param roll  The roll angle measured in degrees.
 */
- (void)updatePitch:(CGFloat)pitch roll:(CGFloat)roll;


@end
