//
// SFConnectorGroupAccessControl.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFPrincipal;

@interface SFConnectorGroupAccessControl : SFODataObject
{
}

@property (nonatomic, strong) SFPrincipal *Principal;
@property (nonatomic, strong) NSNumber *CanManage;
@property (nonatomic, strong) NSNumber *CanCreate;


@end
