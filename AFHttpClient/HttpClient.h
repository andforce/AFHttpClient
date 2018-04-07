//
//  HttpClient.h
//  AFHttpClient
//
//  Created by 迪远 王 on 2018/4/7.
//  Copyright © 2018年 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^SuccessHandler)(NSData *data);

typedef void(^FailureHandler)(NSError *error);

@interface HttpClient : NSObject

- (void)GET:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler)failure;

- (void)POST:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler) failure;

@end
