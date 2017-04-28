//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//


@class NSArray, NSDictionary, NSString, SKPTMXAsyncMediaProfile;

@interface SKPFileSharingDocument : NSObject//SKPTMXAsyncMediaDocument
{
    _Bool _metaDataPropertiesChanged;
    NSDictionary *_metaDataProperties;
    SKPTMXAsyncMediaProfile *_profileFile;
    NSString *_originalName;
}

+ (id)keyPathsForValuesAffectingMetaDataProperties;
+ (id)lazyLoadedPropertiesKeypaths;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(_Bool *)arg3;
+ (id)propertyMapping;
@property(nonatomic) _Bool metaDataPropertiesChanged; // @synthesize metaDataPropertiesChanged=_metaDataPropertiesChanged;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) SKPTMXAsyncMediaProfile *profileFile; // @synthesize profileFile=_profileFile;
@property(retain, nonatomic) NSDictionary *metaDataProperties; // @synthesize metaDataProperties=_metaDataProperties;

- (_Bool)upload;
- (void)cancelDownload;
- (void)startDownloadFromCache;
- (void)startDownload;
- (void)OnMetadataUpdated:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *intMetaPropertyNames; // @dynamic intMetaPropertyNames;
@property(readonly, copy, nonatomic) NSArray *stringMetaPropertyNames; // @dynamic stringMetaPropertyNames;
- (id)fetchMetaDataProperties;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (_Bool)flushLazyProperty:(id)arg1;
- (id)interestedProfiles;
- (void)initializeALEObjectWithObjectId:(unsigned long long)arg1;

@end
