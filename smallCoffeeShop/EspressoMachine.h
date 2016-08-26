//  EspressoMachine.h
//  smallCoffeeShop


#import <Foundation/Foundation.h>
#import "Barista.h"

@protocol EspressoMachineDelegate;


@interface EspressoMachine : NSObject

@property (nonatomic) BOOL hasWater;
@property (nonatomic) BOOL hasBeans;
@property (nonatomic) BOOL waterIsHot;
@property (nonatomic) id<EspressoMachineDelegate>delegate;


-(void)makeEspresso:(EspressoMachine *)make;
-(BOOL)heatWater:(EspressoMachine *)heat;
-(BOOL)addBeans:(EspressoMachine *)addB;
-(BOOL)addWater:(EspressoMachine *)addW;

-(instancetype)initWithBeans:(bool)hasBeans
                    hotWater:(bool)waterIsHot
                       water:(bool)hasWater NS_DESIGNATED_INITIALIZER;
@end

@protocol EspressoMachineDelegate <NSObject>
- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;
@optional
- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine;
- (void)espressoMachineDidFinishMakingEspresso;
@end
