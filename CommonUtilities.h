//
//  CommonUtilities.h
//  
//
//  Created by zx on 3/13/14.
//  Copyright (c) 2014 zx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CommonUtilities : NSObject
+ (UIViewController *)topViewController;
+ (NSArray *)imageUrlsInHtmlString:(NSString *)htmlString;
+ (NSString *)stringFromHtmlString:(NSString *)htmlString;

//比较版本号 1.5.1>1.2.2
+ (BOOL)versionString1:(NSString *)versionString1 isGreaterThanVersionString2:(NSString *)versionString2;

//检测地图app
//@"comgooglemaps://"
//@"iosamap://navi"
//@"baidumap://map/"
+(NSArray *)checkMapApps;


//应用内打开 app store 页面
- (void)openAppWithId:(NSString *)appId;
+ (NSDate *)ymdDateFromDate:(NSDate *)date;
@end
@interface NSUserDefaults (CommonUtilities)
- (void)zx_setObject:(id)obj forKey:(NSString *)key;
@end
//void Swizzle(Class c, SEL orig, SEL new)
//{
//    Method origMethod = class_getInstanceMethod(c, orig);
//    Method newMethod = class_getInstanceMethod(c, new);
//    if(class_addMethod(c, orig, method_getImplementation(newMethod), method_getTypeEncoding(newMethod)))
//        class_replaceMethod(c, new, method_getImplementation(origMethod), method_getTypeEncoding(origMethod));
//    else
//        method_exchangeImplementations(origMethod, newMethod);
//}