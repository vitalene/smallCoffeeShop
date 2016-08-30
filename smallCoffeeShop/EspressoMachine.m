//  EspressoMachine.m
//  smallCoffeeShop


#import "EspressoMachine.h"

@implementation EspressoMachine

-(instancetype)initWithBeans:(bool)hasBeans
                    hotWater:(bool)waterIsHot
                       water:(bool)hasWater ;

{
    self = [super init];
    if (self) {
        _hasBeans = hasBeans;
        _waterIsHot = waterIsHot;
        _hasWater = hasWater;
    }
    return self;
}

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine {
    
}
- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine {
    
};


- (void)makeEspresso:(EspressoMachine *)make {
    if (self.hasBeans == YES && self.waterIsHot == YES && self.hasWater) {
        [self.delegate espressoMachineDidFinishMakingEspresso:self];
        NSLog(@"Beep, beep, beep... \nPlease come here Barista.");
        return;

    }
}
-(BOOL)heatWater:(EspressoMachine *)heat {
    [self.delegate espressoMachineWaterHasBecomeHot:self];
    NSLog(@"Beep, beep, beep...\nThe water is hot.");
    _waterIsHot=YES;
    return _waterIsHot;
}
-(BOOL)addBeans:(EspressoMachine *)addB {
    NSLog(@"The beans are added.");
    _hasBeans=YES;
    return _hasBeans;
}
-(BOOL)addWater:(EspressoMachine *)addW {
    NSLog(@"The water is added.");
    _hasWater = YES;
    return _hasWater;
}



@end
