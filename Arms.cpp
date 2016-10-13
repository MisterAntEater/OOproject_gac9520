#include "Part.h"
#include "Arms.h"

int Arms::powerConsumed(int a_speed){
    return consumption_rate * a_speed;
}

//setters
void Arms::setType(int a_arm_type){
    Arms::arm_type = a_arm_type;
}

void Arms::setSpeed(int a_speed){
    Arms::speed = a_speed;
}

//getters
int Arms::getType(){
    return Arms::arm_type;
}

int Arms::getSpeed(){
    return Arms::speed;
}
