//  EspressoMachine.h
//  smallCoffeeShop


#import <Foundation/Foundation.h>

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
                       water:(bool)hasWater ;
@end

@protocol EspressoMachineDelegate <NSObject>
- (void)espressoMachineDidFinishMakingEspresso:(EspressoMachine *)espressoMachine;
@optional
- (void)espressoMachineWaterHasBecomeHot:(EspressoMachine *)espressoMachine;

@end
