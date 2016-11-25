//
//  UIColor+HexString.h
//  SoolyMomentCell
//
//  Created by SoolyChristina on 2016/11/25.
//  Copyright © 2016年 SoolyChristina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)

#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:1.0f]

/**
 * 从十六进制字符串获取颜色 默认alpha值为1
 */
+ (UIColor *)colorWithHexString:(NSString *)color;


//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式

/**
 * 从十六进制字符串获取颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;


@end
