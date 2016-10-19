#include "Part.h"
#include "Battery.h"
#include "Arm.h"
#include "Locomotor.h"
void Part::displayPart(){
    switch (Part::part_type) {
        case Part::head:
            cout << "\tType: Head\n";
            break;
        case Part::torso:
            cout << "\tType: Torso\n";
            break;
        case Part::battery:
            cout << "\tType: Battery\n";
            break;
        case Part::arm:
            cout << "\tType: Arm\n";
            break;
        case Part::locomotor:
            cout << "\tType: Locomotor\n";
            break;
    }

    cout << "\tName:\t\t" << Part::name << "\n";
    cout << "\tNumber:\t\t" << Part::part_number << "\n";
    cout << "\tDescription:\t" << Part::description << "\n";
    cout << "\tWeight:\t\t" << Part::weight << "\n";
    cout << "\tCost:\t\t" << Part::cost << "\n";
}

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
