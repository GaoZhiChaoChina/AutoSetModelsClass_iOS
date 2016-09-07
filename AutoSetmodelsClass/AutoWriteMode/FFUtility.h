//
//  FFUtility.h
//  Cloud
//
//  Created by gaozhichao on 16/8/5.
//  Copyright © 2016年 gaozhichao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FFUtility : NSObject
+ (instancetype)sharedFFUtility;

/**
 *  /自动生成mode文件
 *
 *  @param string 文件类名
 *  @param data   json数据
 */
- (void)setbaseClassName:(NSString *)classNameString setJsonData:(NSString *)jsonData setJsonUrl:(NSString *)jsonUrl;


/**
 *  获取mac桌面地址
 *
 *  @return mac主机地址
 */
/***/
+ (NSString *)getMacHomeDirectorInIOS;
@end
