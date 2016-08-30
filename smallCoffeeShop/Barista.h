//  Barista.h
//  smallCoffeeShop

#import <Foundation/Foundation.h>
#import "EspressoMachine.h"
@interface Barista : NSObject <EspressoMachineDelegate>

- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine;

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;



@end
