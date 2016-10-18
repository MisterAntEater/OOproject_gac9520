#include "Part.h"
#include "Locomotor.h"

//setters
void Locomotor::setMaxSpeed(int speed){
    Locomotor::max_speed = speed;
}

void Locomotor::setPowerConsumed(double rate){
    Locomotor::power_consumed = rate;
}

//getters
int Locomotor::getMaxSpeed(){
    return Locomotor::max_speed;
}

double Locomotor::getPowerConsumed(){
    return Locomotor::power_consumed;
}
