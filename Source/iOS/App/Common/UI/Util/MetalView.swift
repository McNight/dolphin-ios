// Copyright 2022 DolphiniOS Project
// SPDX-License-Identifier: GPL-2.0-or-later

import UIKit

@available(iOS 13.0, *)
@objc class MetalView: UIView {
  override class var layerClass: Swift.AnyClass {
    return CAMetalLayer.self
  }
}