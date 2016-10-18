#include "Part.h"
#include "Battery.h"

//getters
int Battery::getEnergyContained(){
    return Battery::energy_contained;
}

//setters
void Battery::setEnergyContained(double energy){
    Battery::energy_contained = energy;
}
