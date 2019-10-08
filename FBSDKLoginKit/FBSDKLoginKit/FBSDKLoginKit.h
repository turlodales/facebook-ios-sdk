// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

// Acts as a pass through for the public interface of the dependency.
// It's the Swift equivalent of `@_exported import MyIndividualTarget`
// See: https://forums.swift.org/t/16648 for more info.
//
#if SWIFT_PACKAGE
#import "FBSDKCoreKit.h"
#endif

#if COCOAPODS
#import <FBSDKLoginKit/FBSDKDeviceLoginCodeInfo.h>
#import <FBSDKLoginKit/FBSDKDeviceLoginManager.h>
#import <FBSDKLoginKit/FBSDKDeviceLoginManagerResult.h>
#import <FBSDKLoginKit/FBSDKLoginConstants.h>

#if !TARGET_TV_OS
#import <FBSDKLoginKit/FBSDKLoginButton.h>
#import <FBSDKLoginKit/FBSDKLoginManager.h>
#import <FBSDKLoginKit/FBSDKLoginManagerLoginResult.h>
#import <FBSDKLoginKit/FBSDKLoginTooltipView.h>
#endif

#else
#import "FBSDKDeviceLoginCodeInfo.h"
#import "FBSDKDeviceLoginManager.h"
#import "FBSDKDeviceLoginManagerResult.h"
#import "FBSDKLoginConstants.h"

#if !TARGET_TV_OS
#import "FBSDKLoginButton.h"
#import "FBSDKLoginManager.h"
#import "FBSDKLoginManagerLoginResult.h"
#import "FBSDKLoginTooltipView.h"
#endif

#endif
