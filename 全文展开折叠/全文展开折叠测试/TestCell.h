//
//  TestCell.h
//  全文展开折叠测试
//
//  Created by Biao on 16/6/4.
//  Copyright © 2016年 Biao.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol cellDelegate <NSObject>

-(void)reloadAtIndex:(NSInteger )row;

@end

@interface TestCell : UITableViewCell

@property(nonatomic,assign) BOOL open;

@property(nonatomic,strong) NSIndexPath *index;

@property (weak, nonatomic) IBOutlet UILabel *testLabel;
@property (weak, nonatomic) IBOutlet UIButton *button;

@property(nonatomic, weak) id <cellDelegate> delegate;

@end
