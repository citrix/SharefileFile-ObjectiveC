//
//  SFMetadataEntity.h
//
//  Autogenerated by a tool.
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataEntityBase.h"

@class SFMetadata;

@interface SFMetadataEntity : SFODataEntityBase
{
}

/**
   @abstract Get Metadata by ID
   Retrieves a single Metadata entry that has a given Name for a given Item.Note:'GET https://account.sf-api.com/sf/v3/Items(parentid)/Metadata(id)' is unsupported.Current routing doesn't support the URI to retrieve a single Metadata enntry since it is aliased with the GetByItem feed.So for now we support only the same syntax as for AccessControls, i.e. .../Metadata(name=name,itemid=itemid)@return A single Metadata object matching the query
 */
- (SFApiQuery *)getWithUrl:(NSURL *)url;

/**
   @abstract Get Metadata List By Item
   Retrieves the Metadata List for a given Item.
   @param id
   @return The Metadata list of the given object ID.
 */
- (SFApiQuery *)getByItemWithUrl:(NSURL *)url;

/**
   @abstract Create Metadata
   @description
   {
   "Name":"metadata name",
   "Value":"metadata value"
   }
   Creates a single Metadata entry that has a specified Name for a given Item. Fails if an entry with the given name already exists for this Item.
   @param id
   @return The created Metadata object
 */
- (SFApiQuery *)createByItemWithUrl:(NSURL *)url andMetadata:(SFMetadata *)metadata;

/**
   @abstract Update Metadata
   @description
   {
   "Value":"metadata value"
   }
   Updates a single Metadata entry that has a specified Name for a given Item. Fails if an entry with the given name doesn't exist for this Item.
   @param id
   @param metadataId
   @return The updated Metadata object
 */
- (SFApiQuery *)updateByItemWithUrl:(NSURL *)url metadataId:(NSString *)metadataId andMetadata:(SFMetadata *)metadata;

/**
   @abstract Update Metadata
   @description
   {
   "Value":"metadata value"
   }
   Updates a single Metadata entry that has a specified Name for a given Item. Fails if an entry with the given name doesn't exist for this Item.@return The updated Metadata object
 */
- (SFApiQuery *)updateWithUrl:(NSURL *)url andMetadata:(SFMetadata *)metadata;

/**
   @abstract Delete Metadata
   Deletes a single Metadata entry that has a specified Name for a given Item. Fails if an entry with the given name doesn't exist for this Item.
   @param id
   @param metadataId
   @return (no data)
 */
- (SFApiQuery *)deleteByItemWithUrl:(NSURL *)url andMetadataId:(NSString *)metadataId;

/**
   @abstract Delete Metadata
   Deletes a single Metadata entry that has a specified Name for a given Item. Fails if an entry with the given name doesn't exist for this Item.@return (no data)
 */
- (SFApiQuery *)deleteWithUrl:(NSURL *)url;
@end
