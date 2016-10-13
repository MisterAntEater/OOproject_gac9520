#include "Part.h"
//setters
Part::void getPartType(){
    return Part:: part_type;
}

Part::void getPartNumber(){
    return Part:: part_number;
}

Part::void getWeight(){
    return Part:: weight;
}

Part::void getCost(){
    return Part:: cost;
}

Part::void getName(){
    return Part:: name;
}

Part::void getDescription(){
    return Part:: description;
}

//getters
Part::int setPartType(int p_part_type){
    Part::part_type=p_part_type;
}

Part::int setPartNumber(int p_part_number){
    Part::part_number=p_part_number;
}

Part::double setWeight(double p_weight){
    Part::weight=p_weight;
}

Part::double setCost(double p_cost){
    Part::cost=p_cost;
}

Part::string setName(string p_name){
    Part::name=p_name;
}

Part::string setDescription(string p_description){
    Part::description=p_description;
}
