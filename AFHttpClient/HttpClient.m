//
//  HttpClient.m
//  AFHttpClient
//
//  Created by 迪远 王 on 2018/4/7.
//  Copyright © 2018年 andforce. All rights reserved.
//

#import "HttpClient.h"
#import <AFNetworking/AFNetworking.h>

@implementation HttpClient{
    AFHTTPSessionManager * _manager;
}

-(instancetype)init{
    if (self = [super init]) {
        _manager = [AFHTTPSessionManager manager];
        _manager.responseSerializer = [AFHTTPResponseSerializer serializer];
        _manager.responseSerializer.acceptableContentTypes = [_manager.responseSerializer.acceptableContentTypes setByAddingObject:@"text/html"];
        [_manager.requestSerializer setValue:@"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_12_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/54.0.2840.71 Safari/537.36" forHTTPHeaderField:@"User-Agent"];
    }
    
    return self;
}

- (void)GET:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler)failure {
    [_manager GET:url parameters:parameters progress:nil success:^(NSURLSessionDataTask *task, id responseObject) {
        success(responseObject);
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        failure(error);
    }];

}

- (void)POST:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler)failure {
    [_manager POST:url parameters:parameters progress:nil success:^(NSURLSessionDataTask *task, id responseObject) {
        success(responseObject);
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        failure(error);
    }];
}


@end
