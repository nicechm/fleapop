//
//  DetailViewController.h
//  Flea POP
//
//  Created by Cho on 2015. 10. 27..
//  Copyright © 2015년 ChoCraft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

