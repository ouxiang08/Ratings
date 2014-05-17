//
//  PlayerCell.h
//  Ratings
//
//  Created by jiajingios on 17/5/14.
//  Copyright (c) 2014年 贾晶晶. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UIImageView
*ratingImageView;

@end
