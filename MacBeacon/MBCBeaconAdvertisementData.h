//
//  MBCBeaconAdvertisementData.h
//  MacBeacon
//
//  Created by 尾日向洋皓 on 2014/04/18.
//  Copyright (c) 2014年 HiroakiObinata. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBCBeaconAdvertisementData : NSObject

@property (strong,nonatomic) NSUUID *proximityUUID;
@property (assign,nonatomic) uint16_t major;
@property (assign,nonatomic) uint16_t minor;
@property (assign,nonatomic) int8_t measuredPower;

- (id)initWithProximityUUID:(NSUUID *)proximityUUID
                      major:(uint16_t)major
                      minor:(uint16_t)minor
              measuredPower:(int8_t)power;



- (NSDictionary *)beaconAdvertisement;

@end
