//
//  Util.h
//  hmjz
//  工具类
//  Created by yons on 14-10-23.
//  Copyright (c) 2014年 yons. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Utils : NSObject

+ (NSNumber *)getUserId;

+ (NSString *)getToken;

+ (NSString *)getHostname;

+ (NSString *)getOptTypeName:(NSNumber *)opttype;

+ (NSMutableURLRequest *)postRequestWithParems:(NSURL *)url postParams:(NSMutableDictionary *)postParams images: (NSArray *)images;

@end
