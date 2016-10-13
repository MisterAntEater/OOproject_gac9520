#include "Part.h"
#include "Battery.h"

//getters
int Battery::getCurrentCharge(){
    return Battery::current_charge;
}

int Battery::getMaxCharge(){
    return Battery::max_charge;
}

//setters
void Battery::setCurrentCharge(int b_current_charge){
    Battery::current_charge = b_current_charge;
}

void Battery::setMaxCharge(int b_max_charge){
    Battery::max_charge = b_max_charge;
}
