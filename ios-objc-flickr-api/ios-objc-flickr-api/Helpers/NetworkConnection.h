//
//  NetworkConnection.h
//  ios-objc-flickr-api
//
//  Created by OkuderaYuki on 2017/10/17.
//  Copyright © 2017年 OkuderaYuki. All rights reserved.
//

@import Foundation;

@interface NetworkConnection : NSObject
+ (BOOL)isReachableWithHostName:(NSString *)hostName;
@end
