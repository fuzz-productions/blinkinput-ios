//
//  PPBaseOverlayViewController.h
//  BarcodeFramework
//
//  Created by Jura on 06/06/14.
//  Copyright (c) 2015 MicroBlink Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBOverlayViewController.h"
#import "MBGeometry.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Common base class for default overlay view controllers
 */
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBBaseOverlayViewController : MBOverlayViewController

/**
 * Button to cancel scanning/dismiss view.
 */
@property (nonatomic, strong) UIButton *cancelButton;

/**
 * Button for displaying flash.
 */
@property (nonatomic, strong) UIButton *torchButton;


@end

NS_ASSUME_NONNULL_END
