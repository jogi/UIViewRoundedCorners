//
//  ViewController.h
//  UIViewRoundedCorners
//
//  Created by Vashishtha Jogi on 11/20/11.
//  Copyright (c) 2011 Vashishtha Jogi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UIView *viewNone;
    UIView *viewTopLeft;
    UIView *viewTopRight;
    UIView *viewBottomLeft;
    UIView *viewBottomRight;
    UIView *viewall;
    UIView *viewTopLeftRight;
}

@property(nonatomic, strong) IBOutlet UIView *viewNone;
@property(nonatomic, strong) IBOutlet UIView *viewTopLeft;
@property(nonatomic, strong) IBOutlet UIView *viewTopRight;
@property(nonatomic, strong) IBOutlet UIView *viewBottomLeft;
@property(nonatomic, strong) IBOutlet UIView *viewBottomRight;
@property(nonatomic, strong) IBOutlet UIView *viewAll;
@property(nonatomic, strong) IBOutlet UIView *viewTopLeftRight;

@end
