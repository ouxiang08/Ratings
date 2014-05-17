//
//  PlayersViewController.h
//  Ratings
//
//  Created by jiajingios on 17/5/14.
//  Copyright (c) 2014年 贾晶晶. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController<PlayerDetailsViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *players;

@end
