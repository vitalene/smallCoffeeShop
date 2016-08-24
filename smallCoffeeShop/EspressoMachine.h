//
//  EspressoMachine.h
//  smallCoffeeShop
//
//  Created by Neil Vitale on 8/23/16.
//  Copyright © 2016 Neil Vitale. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EspressoMachineDelegate <NSObject>

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;

@optional
- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine


- (void)espressoMachineDidFinishMakingEspresso;

@end

@interface EspressoMachine : NSObject

@property (nonatomic) BOOL hasWater;
@property (nonatomic) BOOL hasBeans;
@property (nonatomic) BOOL waterIsHot;
@property (nonatomic) BOOL delegate;

-(instancetype)initWithBeans:(NSString *)beans NS_DESIGNATED_INITIALIZER;


@end
