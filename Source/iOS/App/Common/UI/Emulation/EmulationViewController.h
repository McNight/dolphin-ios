// Copyright 2022 DolphiniOS Project
// SPDX-License-Identifier: GPL-2.0-or-later

#import <UIKit/UIKit.h>

#import "Swift.h"

@class EmulationBootParameter;

NS_ASSUME_NONNULL_BEGIN

@interface EmulationViewController : UIViewController

@property (weak, nonatomic) IBOutlet MetalView* metalView;

@property (nonatomic) EmulationBootParameter* bootParameter;

@end

NS_ASSUME_NONNULL_END