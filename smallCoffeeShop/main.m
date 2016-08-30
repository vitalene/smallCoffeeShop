//  main.m
//  smallCoffeeShop


#import <Foundation/Foundation.h>
#import "EspressoMachine.h"
#import "Barista.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        EspressoMachine *myMachine = [[EspressoMachine alloc] init];
        Barista *Neil = [[Barista alloc] init];
        
        
        [myMachine addBeans:myMachine];
        [myMachine addWater:myMachine];
        [myMachine heatWater:myMachine];
        [Neil espressoMachineDidFinishMakingEspresso:myMachine];
        
        
        
        
        
    }
    return 0;
}
