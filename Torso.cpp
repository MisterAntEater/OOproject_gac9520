#include "Part.h"
#include "Torso.h"

//setters
void Torso::setNumBatteries(int num){
    Torso::num_batteries = num;
}

//getters
int Torso::getNumBatteries(){
    return Torso::num_batteries;
}
