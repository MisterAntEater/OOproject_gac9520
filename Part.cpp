#include "Part.h"
//setters
int Part::getType(){
    return Part:: part_type;
}

int Part::getPartNumber(){
    return Part:: part_number;
}

double Part::getWeight(){
    return Part:: weight;
}

double Part::getCost(){
    return Part:: cost;
}

string Part::getName(){
    return Part:: name;
}

string Part::getDescription(){
    return Part:: description;
}

//getters
void Part::setType(int p_part_type){
    Part::part_type=p_part_type;
}

void Part::setPartNumber(int p_part_number){
    Part::part_number=p_part_number;
}

void Part::setWeight(double p_weight){
    Part::weight=p_weight;
}

void Part::setCost(double p_cost){
    Part::cost=p_cost;
}

void Part::setName(string p_name){
    Part::name=p_name;
}

void Part::setDescription(string p_description){
    Part::description=p_description;
}
