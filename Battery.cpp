#include "Part.h"
#include "Battery.h"

//getters
int getCurrentCharge(){
    return Battery::current_charge;
}

int getMaxCharge(){
    return Battery::max_charge;
}

//setters
void setCurrentCharge(int b_current_charge){
    Battery::current_charge = b_current_charge;
}

void setMaxCharge(int b_max_charge){
    Battery::max_charge = b_max_charge;
}
