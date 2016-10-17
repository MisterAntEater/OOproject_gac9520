#include "Model.h"

void Model::addPart(int part_type){
    Model::part_count++;
    if(Model::checkForSpot(part_type) == 0){
        cout << "There is no space for that part!\n";
        return;
    }
    switch (part_type){
        case 
    Model::parts[Model::part_count] = 
}

Part[] Model::getParts(){
    return Model::parts;
}

double Model::getTotalCost(){
    int i;
    double totalCost;

    for(i = 0; i<part_count; i++){
        totalCost += parts[i].getCost();
    }

    return totalCost;
}

double Model::getMaxSpeed(){

}


