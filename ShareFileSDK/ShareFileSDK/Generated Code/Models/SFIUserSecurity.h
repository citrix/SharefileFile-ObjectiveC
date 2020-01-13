//
// SFIUserSecurity.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFIODataObject.h"


@interface SFIUserSecurity : SFIODataObject
{
}

@property (nonatomic, strong) NSNumber *IsDisabled;
@property (nonatomic, strong) NSNumber *IsLocked;
@property (nonatomic, strong) NSDate *LockExpires;
@property (nonatomic, strong) NSDate *LastWebAppLogin;
@property (nonatomic, strong) NSDate *LastAnyLogin;
@property (nonatomic, strong) NSDate *FirstAnyLogin;
@property (nonatomic, strong) NSString *UserIPRestrictions;
@property (nonatomic, strong) NSDate *DisableLoginBefore;
@property (nonatomic, strong) NSDate *DisableLoginAfter;
@property (nonatomic, strong) NSNumber *ForcePasswordChange;
@property (nonatomic, strong) NSNumber *PasswordNeverExpires;
@property (nonatomic, strong) NSDate *LastPasswordChange;
@property (nonatomic, strong) NSString *UsernameShort;
@property (nonatomic, strong) NSDate *LastFailedLogin;
@property (nonatomic, strong) NSString *LastFailedLoginIP;
@property (nonatomic, strong) NSNumber *FailedLoginCount;


@end