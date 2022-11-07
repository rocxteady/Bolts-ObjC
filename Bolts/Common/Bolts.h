/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#if SWIFT_PACKAGE
#import "BFCancellationToken.h"
#import "BFCancellationTokenRegistration.h"
#import "BFCancellationTokenSource.h"
#import "BFExecutor.h"
#import "BFGeneric.h"
#import "BFTask.h"
#import "BFTaskCompletionSource.h"
#else
#import <Bolts/BFCancellationToken.h>
#import <Bolts/BFCancellationTokenRegistration.h>
#import <Bolts/BFCancellationTokenSource.h>
#import <Bolts/BFExecutor.h>
#import <Bolts/BFGeneric.h>
#import <Bolts/BFTask.h>
#import <Bolts/BFTaskCompletionSource.h>
#endif

#if SWIFT_PACKAGE
#if __has_include("BFAppLink.h") && TARGET_OS_IPHONE && !TARGET_OS_WATCH && !TARGET_OS_TV
#import "BFAppLink.h"
#import "BFAppLinkNavigation.h"
#import "BFAppLinkResolving.h"
#import "BFAppLinkReturnToRefererController.h"
#import "BFAppLinkReturnToRefererView.h"
#import "BFAppLinkTarget.h"
#import "BFMeasurementEvent.h"
#import "BFURL.h"
#import "BFWebViewAppLinkResolver.h"
#endif
#else
#if __has_include(<Bolts/BFAppLink.h>) && TARGET_OS_IPHONE && !TARGET_OS_WATCH && !TARGET_OS_TV
#import <Bolts/BFAppLink.h>
#import <Bolts/BFAppLinkNavigation.h>
#import <Bolts/BFAppLinkResolving.h>
#import <Bolts/BFAppLinkReturnToRefererController.h>
#import <Bolts/BFAppLinkReturnToRefererView.h>
#import <Bolts/BFAppLinkTarget.h>
#import <Bolts/BFMeasurementEvent.h>
#import <Bolts/BFURL.h>
#import <Bolts/BFWebViewAppLinkResolver.h>
#endif
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 A string containing the version of the Bolts Framework used by the current application.
 */
extern NSString *const BoltsFrameworkVersionString;

NS_ASSUME_NONNULL_END
