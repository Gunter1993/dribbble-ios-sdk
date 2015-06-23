//
//  OAuthDefinitions.h
//  DribbbleRunner
//
//  Created by Ankudinov Alexander on 3/16/15.
//  Copyright (c) 2015 Agilie. All rights reserved.
//

#ifndef DribbbleRunner_OAuthDefinitions_h
#define DribbbleRunner_OAuthDefinitions_h


// Override to disable logging
#define DribbbleSDKLogsEnabled 1
#define DribbbleSDKLogPrefix @"[DribbbleSDK]"

// Block definitions

@class DRApiResponse, NXOAuth2Account;

typedef void(^DRHandler)(void);
typedef void(^DRResponseHandler)(DRApiResponse *response);
typedef void(^DROAuthHandler)(NXOAuth2Account *account, NSError *error);
typedef void(^DRErrorHandler)(NSError *error);
typedef void(^DRDownloadProgressHandler)(NSUInteger bytesRead, long long totalBytesRead, long long totalBytesExpectedToRead);

// Dribbble API methods

static NSString * const kDRApiMethodUser = @"user";
static NSString * const kDRApiMethodShotProjects = @"shots/%@/projects";
static NSString * const kDRApiMethodProject = @"projects/%@";
static NSString * const kDRApiMethodShots = @"shots";
static NSString * const kDRApiMethodShot = @"shots/%@";
static NSString * const kDRApiMethodLikeShot = @"shots/%@/like";
static NSString * const kDRApiMethodFollowUser = @"users/%@/follow";
static NSString * const kDRApiMethodCheckShotWasLiked = @"shots/%@/like";
static NSString * const kDRApiMethodCheckIfUserFollowing = @"user/following/%@";
static NSString * const kDRApiMethodGetFollowers = @"users/%@/following";
static NSString * const kDRApiMethodGetFolloweesShot = @"user/following/shots";
static NSString * const kDRApiMethodGetLikes = @"users/%@/likes";

// Dribbble API params keys

static NSString * const kDRParamPage = @"page";
static NSString * const kDRParamPerPage = @"per_page";

// Dribbble API permission keys

static NSString * const kDRPublicScope = @"public";
static NSString * const kDRWriteScope = @"write";
static NSString * const kDRCommentScope = @"comment";
static NSString * const kDRUploadScope = @"upload";

// Http errors

static NSInteger const kHttpAuthErrorCode = 401;
static NSInteger const kHttpRateLimitErrorCode = 429;
static NSInteger const kHttpContentNotModifiedCode = 304;

static NSString * const kInvalidAuthData = @"Invalid auth data";

// Keychain

static NSString * const kIDMOAccountType = @"DribbleAuth";

// Misc

static NSString * const kUnacceptableWebViewUrl = @"session/new";

#endif