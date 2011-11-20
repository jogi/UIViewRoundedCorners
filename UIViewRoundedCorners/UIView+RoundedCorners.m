//
//  UIView+RoundedCorners.m
//  UIViewRoundedCorners
//
//  Created by Vashishtha Jogi on 11/20/11.
//  Copyright (c) 2011 Vashishtha Jogi. All rights reserved.
//

#import "UIView+RoundedCorners.h"
#import <QuartzCore/QuartzCore.h>

@implementation UIView (RoundedCorners)

-(void)setRoundedCorners:(UIRectCorner)corners radius:(CGFloat)radius {
	CGRect rect = self.bounds;
	    
    // Create the path 
    UIBezierPath *maskPath = [UIBezierPath bezierPathWithRoundedRect:rect 
                                                   byRoundingCorners:corners
                                                         cornerRadii:CGSizeMake(radius, radius)];
    
    // Create the shape layer and set its path
    CAShapeLayer *maskLayer = [CAShapeLayer layer];
    maskLayer.frame = rect;
    maskLayer.path = maskPath.CGPath;
    
    // Set the newly created shape layer as the mask for the view's layer
    self.layer.mask = maskLayer;
}

@end
