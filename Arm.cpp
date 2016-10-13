#include "Part.h"
#include "Arm.h"

int Arm::powerConsumed(int a_speed){
    return consumption_rate * a_speed;
}

//setters
void Arm::setType(int a_arm_type){
    Arm::arm_type = a_arm_type;
}

void Arm::setSpeed(int a_speed){
    Arm::speed = a_speed;
}

//getters
int Arm::getType(){
    return Arm::arm_type;
}

int Arm::getSpeed(){
    return Arm::speed;
}
