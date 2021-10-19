//
//  SGWiFiViewController.h
//  SGWiFiUpload
//
//  Created by soulghost on 30/6/2016.
//  Copyright © 2016 soulghost. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HTTPServer;
typedef void (^SGWiFiViewControllerDismissBlock)(void);
@interface SGWiFiViewController : UIViewController
@property (nonatomic, copy) SGWiFiViewControllerDismissBlock dismissBlock;
- (void)startUpload:(NSString *)fileName;
- (void)stopUpload:(NSString *)fileName;
@end
