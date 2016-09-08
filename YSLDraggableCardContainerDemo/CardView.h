//
//  CardView.h
//  Crew-iOS
//
//  Created by tlian on 2016/09/08.
//  Copyright © 2016年 tlian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YSLCardView.h"

@interface CardView : YSLCardView

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UILabel *label;
@property (nonatomic, strong) UIView *selectedView;

@end
