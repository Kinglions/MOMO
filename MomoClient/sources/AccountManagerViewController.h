//
//  AccountManagerViewController.h
//
//  Created by 超 曾 on 12-3-28.
//  Copyright (c) 2012年 My Company. All rights reserved.
//  QQ:1490724

#import <UIKit/UIKit.h>

@interface AccountManagerViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    UITableView *myTableView;
}
@property(nonatomic,retain)UITableView *myTableView;

@end