//  EspressoMachine.m
//  smallCoffeeShop


#import "EspressoMachine.h"
#import "EspressoMachineDelegate.h"

@implementation EspressoMachine


- (instancetype)init {
    return [self initWithBeans:_hasBeans waterIsHot:_waterIsHot hasWater:_hasWater];
}

-(instancetype)initWithBeans:(bool)hasBeans
                    hotWater:(bool)waterIsHot
                       water:(bool)hasWater;

{
    self = [super init];
    if (self) {
        _hasBeans = hasBeans;
        _waterIsHot = waterIsHot;
        _hasWater = hasWater;
    }
    return self;
}

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;


@end
