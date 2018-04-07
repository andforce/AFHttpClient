//
//  AFHttpClient.h
//  AFHttpClient
//
//  Created by 迪远 王 on 2018/4/7.
//  Copyright © 2018年 andforce. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for AFHttpClient.
FOUNDATION_EXPORT double AFHttpClientVersionNumber;

//! Project version string for AFHttpClient.
FOUNDATION_EXPORT const unsigned char AFHttpClientVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AFHttpClient/PublicHeader.h>

//#ifndef _AFHTTPCLIENT_
//    #define _AFHTTPCLIENT_
//
//    #import "HttpClient.h"
//
//#endif /* _AFHTTPCLIENT_ */

typedef void(^SuccessHandler)(NSData *data);

typedef void(^FailureHandler)(NSError *error);

@interface AFHttpClient : NSObject

- (void)GET:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler)failure;

- (void)POST:(NSString *)url parameters:(NSDictionary *)parameters success:(SuccessHandler)success failure:(FailureHandler) failure;

@end
