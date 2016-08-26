//  EspressoMachine.m
//  smallCoffeeShop


#import "EspressoMachine.h"

@implementation EspressoMachine

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


-(void)makeEspresso:(EspressoMachine *)make {
    NSLog(@"Your espresso is made.");
    
}
-(BOOL)heatWater:(EspressoMachine *)heat {
    _waterIsHot=YES;
    return _waterIsHot;
}
-(BOOL)addBeans:(EspressoMachine *)addB {
    _hasBeans=YES;
    return _hasBeans;
}
-(BOOL)addWater:(EspressoMachine *)addW {
    _hasWater = YES;
    return _hasWater;
}



@end
