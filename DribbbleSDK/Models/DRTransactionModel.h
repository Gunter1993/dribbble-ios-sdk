//
//  DRTransactionModel.h
//  DribbbleRunner
//
//  Created by zgonik vova on 12.05.15.
//  Copyright (c) 2015 Agilie. All rights reserved.
//

#import "JSONModel.h"

@interface DRTransactionModel : JSONModel

@property (strong, nonatomic) NSDate *created_at;
@property (strong, nonatomic) NSNumber *transactionId;

@end