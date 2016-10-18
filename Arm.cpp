#include "Part.h"
#include "Arm.h"

//setters
void Arm::setPowerConsumed(double power){
    Arm::power_consumed = power;
}

//getters
double Arm::getPowerConsumed(){
    return Arm::power_consumed;
}
