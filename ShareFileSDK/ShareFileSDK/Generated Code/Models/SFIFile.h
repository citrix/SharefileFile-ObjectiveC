//
// SFIFile.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFIItem.h"
#import "SFIODataObject.h"

@class SFIItemDlpInfo;
@class SFIItemInfo;
@class SFIUser;
@class SFIFileLock;
@class SFIESignature;

@interface SFIFile : SFIItem
{
}

/**
   Represents the Object Storage Identifier for this File. This field is
   used in Object Storage providers - including sharefile.com and Storage Zones. Other
   providers like CIFS and SharePoint do not need external references for object
   blobs and do not populate this field.
 */
@property (nonatomic, strong) NSString *FilePath;
/**
   MD5 Hash of the File contents.
 */
@property (nonatomic, strong) NSString *Hash;
/**
   Indicates that the File has an image Preview.
 */
@property (nonatomic, strong) NSNumber *HasPreview;
/**
   Current Anti-Virus scanning status for this file
 */
@property (nonatomic, strong) NSString *VirusStatus;
/**
   Data Loss Prevention information for this file.
 */
@property (nonatomic, strong) SFIItemDlpInfo *DlpInfo;
/**
   Effective Access Control permissions for this file
 */
@property (nonatomic, strong) SFIItemInfo *Info;
/**
   Indicates the user that has locked the file
 */
@property (nonatomic, strong) SFIUser *LockedBy;
/**
   File lock info
 */
@property (nonatomic, strong) SFIFileLock *FileLockInfo;
/**
   File version.
 */
@property (nonatomic, strong) NSNumber *Version;
/**
   Electronic signature object associated with this item
 */
@property (nonatomic, strong) SFIESignature *ESignatureDocument;


@end