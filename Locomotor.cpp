#include "Part.h"
#include "Locomotor.h"

int Locomotor::powerConsumed(int l_speed){
    return consumption_rate * l_speed;
}

//setters
void Locomotor::setType(int l_loco_type){
    Locomotor::loco_type = l_loco_type;
}

void Locomotor::setSpeed(int l_speed){
    Locomotor::speed = l_speed;
}

//getters
int Locomotor::getType(){
    return Locomotor::loco_type;
}

int Locomotor::getSpeed(){
    return Locomotor::speed;
}
