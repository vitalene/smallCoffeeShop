//  Barista.h
//  smallCoffeeShop

#import <Foundation/Foundation.h>
#import "EspressoMachine.h"
@interface Barista : NSObject


-(BOOL)makeEspresso:(Barista *)make;

-(BOOL)heatWater:(Barista *)heat;

-(BOOL)addBeans:(Barista *)addB;

-(BOOL)addWater:(Barista *)addW;


@end
