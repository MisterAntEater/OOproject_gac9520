#include "Part.h"
#include "Arms.h"

Arms::int powerConsumed(int a_speed){
    return consumption_rate * a_speed;
}

//setters
Arms::void setType(int a_arm_type){
    Arms::arm_type = a_arm_type;
}

Arms::void setSpeed(int a_speed){
    Arms::speed = a_speed;
}

//getters
Arms::int getArmType(){
    return Arms::arm_type;
}

Arms::int getSpeed(){
    return Arms::speed;
}
