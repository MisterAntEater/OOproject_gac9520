#include "Part.h"
#include "Battery.h"

//getters
double Battery::getEnergyContained(){
    return Battery::energy_contained;
}

//setters
void Battery::setEnergyContained(double energy){
    Battery::energy_contained = energy;
}
