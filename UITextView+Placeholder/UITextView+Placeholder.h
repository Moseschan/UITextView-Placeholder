//
//
//  UITextView+Placehoder.m
//
//  Created by Moses on 15/8/14.
//  Copyright © 2015年 etouch. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface UITextView (Placeholder)

@property (nonatomic, readonly) UILabel *placeholderLabel;

@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic, strong) UIColor *placeholderColor;

+ (UIColor *)defaultPlaceholderColor;

@end
