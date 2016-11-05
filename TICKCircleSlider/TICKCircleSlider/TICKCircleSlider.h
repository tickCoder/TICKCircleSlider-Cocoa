//
//  TICKCircleSlider.h
//  TICKCircleSlider
//
//  Created by Claris on 2016.11.05.
//  Copyright © 2016 Claris. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TICKCircleSlider;
@protocol TICKCircleSliderDelegate <NSObject>
@end

@interface TICKCircleSlider : UIView
@property (nonatomic, weak) IBInspectable id<TICKCircleSliderDelegate> delegate;
@property (nonatomic, assign) IBInspectable CGFloat value;
@property (nonatomic, assign) IBInspectable CGFloat minValue;
@property (nonatomic, assign) IBInspectable CGFloat maxValue;
@property (nonatomic, assign) IBInspectable CGFloat startClock;
@property (nonatomic, assign) IBInspectable CGFloat endClock;
@property (nonatomic, assign) IBInspectable BOOL clockwise;
@property (nonatomic, assign) IBInspectable BOOL showFullBack;
@property (nonatomic, strong) IBInspectable UIColor *backColor;
@property (nonatomic, strong) IBInspectable UIColor *valueColor;
@property (nonatomic, strong) IBInspectable UIColor *handleColor;
@property (nonatomic, strong) IBInspectable UIImage *backImage;
@property (nonatomic, strong) IBInspectable UIImage *valueImage;
@property (nonatomic, strong) IBInspectable UIImage *handleImage;
@property (nonatomic, assign) IBInspectable BOOL backGradient;
@property (nonatomic, strong) NSArray <__kindof UIColor*> *backGradientColors;
@property (nonatomic, strong) NSArray <__kindof NSNumber*> *backGradientLocations;
@property (nonatomic, assign) IBInspectable BOOL valueGradient;
@property (nonatomic, strong) NSArray <__kindof UIColor*> *valueGradientColors;
@property (nonatomic, strong) NSArray <__kindof NSNumber*> *valueGradientLocations;
@property (nonatomic, assign) IBInspectable CGFloat backWidth;
@property (nonatomic, assign) IBInspectable CGFloat valueWidth;
@property (nonatomic, assign) IBInspectable CGFloat handleSize;
@property (nonatomic, assign) IBInspectable BOOL useShapeLayer;
@property (nonatomic, assign) IBInspectable BOOL valueStep;
@property (nonatomic, assign) IBInspectable CGFloat precisionOfValueStep;
@end
