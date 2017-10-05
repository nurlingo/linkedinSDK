//
//  LISDK.h
//
//  Copyright (c) 2015 linkedin. All rights reserved.
//

#ifndef LISDK_h
#define LISDK_h

/**
 file for application to include to interact with LinkedIn SDK for ios.
 
 A typical usage flow might be:
 
 1. use LISDKSessionManager to initialize a linkedin session if it is not already valid.  
 This will ask the user to authorize the application to use his/her linkedin data.
  
 if (! [LISDKSessionManager hasValidSession] ) {
   [LISDKSessionManager createSessionWithAuthorize:[NSArray arrayWithObjects:LISDK_BASIC_PROFILE_PERMISSION, LISDK_EMAILADDRESS_PERMISSION, nil]
                                             state:@"some state"
                            showGoToAppStoreDialog:NO
                                      successBlock:^(NSString *returnState) {
                                      }
                                        errorBlock:^(NSError *error) {
                                        }];
 }
 
 2. use LISDKAPIHelper or LISDKDeeplinkHelper to make API calls or to perform deep link operations
 
 */
#include <LinkedinSDK/LISDKSessionManager.h>
#include <LinkedinSDK/LISDKSession.h>
#include <LinkedinSDK/LISDKAccessToken.h>
#include <LinkedinSDK/LISDKAPIError.h>
#include <LinkedinSDK/LISDKAPIHelper.h>
#include <LinkedinSDK/LISDKAPIResponse.h>
#include <LinkedinSDK/LISDKCallbackHandler.h>
#include <LinkedinSDK/LISDKDeeplinkHelper.h>
#include <LinkedinSDK/LISDKErrorCode.h>
#include <LinkedinSDK/LISDKPermission.h>

#endif
