#include "Part.h"
#include "Torso.h"

//setters
void Torso::setNumBatteries(int t_num_bats){
    Torso::num_bats = t_num_bats;
}

void Torso::setNumArmHoles(int t_num_arms){
    Torso::num_arms = t_num_arms;
}

//getters
int Torso::getNumBatteries(){
    return Torso::num_bats;
}

int Torso::getNumArmHoles(){
    return Torso::num_arms;
}
