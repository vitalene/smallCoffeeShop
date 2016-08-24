//  EspressoMachineDelegate.h
//  smallCoffeeShop


#ifndef EspressoMachineDelegate_h
#define EspressoMachineDelegate_h
#import "EspressoMachine.h"



@protocol EspressoMachineDelegate <NSObject>

- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;



@optional
- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine
- (void)espressoMachineDidFinishMakingEspresso;

@end





#endif /* EspressoMachineDelegate_h */
