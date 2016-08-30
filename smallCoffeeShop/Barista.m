//  Barista.m
//  smallCoffeeShop

#import "Barista.h"

@implementation Barista

- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine {
    NSLog(@"Here is your espresso! Thank you and have a nice day!");

}
    

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine {
    
    NSLog(@"Oh... the water is hot now");
    
}

@end

