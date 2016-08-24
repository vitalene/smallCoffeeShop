//  EspressoMachine.h
//  smallCoffeeShop


#import <Foundation/Foundation.h>
#import "EspressoMachineDelegate.h"
@interface EspressoMachine : NSObject <EspressoMachineDelegate>

@property (nonatomic) BOOL hasWater;
@property (nonatomic) BOOL hasBeans;
@property (nonatomic) BOOL waterIsHot;
@property (nonatomic) BOOL delegate;

-(instancetype)initWithBeans:(bool)hasBeans
                    hotWater:(bool)waterIsHot
                       water:(bool)hasWater NS_DESIGNATED_INITIALIZER;


@end
