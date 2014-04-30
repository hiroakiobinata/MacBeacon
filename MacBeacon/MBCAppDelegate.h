//
//  MBCAppDelegate.h
//  MacBeacon
//
//  Created by 尾日向洋皓 on 2014/04/18.
//  Copyright (c) 2014年 HiroakiObinata. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <IOBluetooth/IOBluetooth.h>

#import "MBCBeaconAdvertisementData.h"

@interface MBCAppDelegate : NSObject <NSApplicationDelegate, CBPeripheralManagerDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong, nonatomic) CBPeripheralManager *manager;

@end