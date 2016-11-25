//
//  Moments.h
//  SoolyMomentCell
//
//  Created by SoolyChristina on 2016/11/25.
//  Copyright © 2016年 SoolyChristina. All rights reserved.
//  数据模型

#import <Foundation/Foundation.h>

@interface Moments : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *comment_count;
@property (nonatomic, copy) NSString *like_count;
@property (nonatomic, strong) NSArray *photos;

- (instancetype)initWithDic:(NSDictionary *)dic;
+ (instancetype)initWithDic:(NSDictionary *)dic;

+ (NSMutableArray *)moments;

@end
