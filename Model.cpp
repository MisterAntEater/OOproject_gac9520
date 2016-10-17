#include "Model.h"

void Model::addPart(Part part){
    Model::part_count++;
    Model::parts[Model::part_count] = part;
}

Part[] Model::getParts(){
    return Model::parts;
}

double Model::getTotalCost(){
    int i;
    double totalCost;

    for(i=0; i<Model::part_count; i++){
        totalCost += parts[i].getCost();
    }

    return totalCost;
}

int Model::getMaxSpeed(){
    int i;
    Part p;
    for(i=0; i<Model::part_count; i++){
        p = Model::parts[i];
        if(p.getType() == Part::locomotor){
            return p.getSpeed();
        }
    }
    return 0;
}

int checkForSpot(int part_type){ //returns 1 if there is room on the model for a part of that type
    int occurences = 0;
    int i;

    for(i=0; i<Model::part_count; i++){
        if(Model::parts[i].getType == part_type){ occurences++; }
    }

    switch (part_type){
        case head:
            if(occurences>0){ return 0; }
            break;
        case torso:
            if(occurences>=Model::num_batteries){ return 0; }
            break;
        case battery:
            if(occurences>2){ return 0; }
            break;
        case arm:
            if(occurences>1){ return 0; }
            break;
        case locomotor:
            if(occurences>0){ return 0; }
            break;
    }

    return 1;
}
