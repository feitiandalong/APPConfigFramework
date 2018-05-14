//
//  APPScreenInf.h
//  controlSystem
//
//  Created by 程龙 on 17/2/23.
//  Copyright © 2017年 程龙. All rights reserved.
//

#ifndef APPScreenInf_h
#define APPScreenInf_h

// 计算屏幕的尺寸
#define Wscale SCREENWIDTH/375.0
#define Hscale SCREENHEIGHT/667.0
#define SCREENWIDTH  [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT  [UIScreen mainScreen].bounds.size.height

//判断是否是4寸屏
#define IS4InchScreen  (([[UIScreen mainScreen] bounds].size.height == 568) ? YES : NO)

//判断是否3.5寸屏
#define IS35InchScreen ([[UIScreen mainScreen] bounds].size.height <= 568)

#define WINDOW_HEIGHT_WITHOUT_STATUS_BAR ([[[[UIApplication sharedApplication] windows] objectAtIndex:0] frame].size.height - 20)
#define WINDOW_HEIGHT_WITHOUT_STATUS_BAR_AND_NAVIGATION_BAR (WINDOW_HEIGHT_WITHOUT_STATUS_BAR - 44)

#define IsRetina ([[UIScreen mainScreen] scale] == 2.0)

//RGB
#define HWColora(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define HWColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define SelectorHeaderNameMax2Width 48
#define SelectorHeaderNameMax3Width 70
#define SelectorHeaderNameMax4Width 67

#define SelectorHeaderNameMax0Width 40
#define SelectorHeaderNameMax1Width 54


#ifdef DEBUG
#    define CFLLog(fmt, ...) NSLog((@"[%@]-%s #%d " fmt), [self class], __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#   define CFLSLog(fmt, ...) NSLog(fmt, __VA_ARGS__)
#else
#    define CFLLog(...)
#   define CFLSLog(...)
#endif

#endif /* APPScreenInf_h */
