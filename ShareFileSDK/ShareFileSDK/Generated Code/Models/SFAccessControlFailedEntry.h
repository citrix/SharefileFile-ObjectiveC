//
// SFAccessControlFailedEntry.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFAccessControl;
@class SFODataExceptionMessage;

@interface SFAccessControlFailedEntry : SFODataObject
{
}

/**
   Entity
 */
@property (nonatomic, strong) SFAccessControl *AccessControl;
/**
   Failure code
 */
@property (nonatomic, strong) NSString *Code;
/**
   Exception message
 */
@property (nonatomic, strong) SFODataExceptionMessage *Message;


@end