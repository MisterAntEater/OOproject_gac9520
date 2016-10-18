#include "Part.h"
//getters
int Part::getPartType(){
    return Part::part_type;
}

string Part::getPartNumber(){
    return Part::part_number;
}

double Part::getWeight(){
    return Part::weight;
}

double Part::getCost(){
    return Part::cost;
}

string Part::getName(){
    return Part::name;
}

string Part::getDescription(){
    return Part::description;
}

//setters
void Part::setPartType(int p_type){
    Part::part_type=p_type;
}

void Part::setPartNumber(string p_num){
    Part::part_number = p_num;
}

void Part::setWeight(double w){
    Part::weight = w;
}

void Part::setCost(double c){
    Part::cost = c;
}

void Part::setName(string p_name){
    Part::name = p_name;
}

void Part::setDescription(string desc){
    Part::description= desc;
}
