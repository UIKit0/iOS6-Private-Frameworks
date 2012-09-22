/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AXHearingAidSupport/AXHearingAidDevice.h>

@class NSMutableArray, NSString;

@interface AXHearingAidFakeDevice : AXHearingAidDevice
{
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    int updateCount;
    int _type;
    BOOL _connected;
}

@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int updateCount; // @synthesize updateCount;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1;
- (BOOL)didLoadRequiredProperties;
- (BOOL)didLoadBasicProperties;
- (id)persistentRepresentation;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)reload;
- (id)rightPrograms;
- (id)leftPrograms;
- (void)createPrograms;
@property(nonatomic) BOOL isPaired;
- (BOOL)isConnected;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)disconnect;
- (void)connect;
- (id)modelForType;
- (id)manufacturerForType;
- (void)sendUpdates;
- (void)dealloc;
- (id)initWithDeviceType:(int)arg1;

// Remaining properties
@property(nonatomic) BOOL isConnecting;
@property(nonatomic) float leftBatteryLevel;
@property(retain, nonatomic) NSString *leftUUID;
@property(retain, nonatomic) NSString *manufacturer;
@property(retain, nonatomic) NSString *model;
@property(retain, nonatomic) NSString *name;
@property(nonatomic) float rightBatteryLevel;
@property(retain, nonatomic) NSString *rightUUID;

@end
