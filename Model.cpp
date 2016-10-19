#include "Model.h"

void Model::addHead(Head h){
    Model::head = h;
}

void Model::addTorso(Torso t){
    Model::torso = t;
}

void Model::addBattery(Battery b){
    Model::batteries.push_back(b);
}

void Model::addArm(Arm a){
    Model::arms.push_back(a);
}

void Model::addLocomotor(Locomotor l){
    Model::locomotor = l;
}

double Model::getTotalCost(){
    double cost = 0.0;
    int i;

    cost+=Model::head.getCost();
    cost+=Model::torso.getCost();
    for(i=0; Model::batteries.size(); i++){ cost+=Model::batteries.at(i).getCost(); }
    for(i=0; Model::arms.size(); i++){ cost+=Model::arms.at(i).getCost(); }
    cost+=Model::locomotor.getCost();

    return cost;
}

double Model::getMaxSpeed(){
    return Model::locomotor.getMaxSpeed();
}

string Model::getModelName(){
    return Model::model_name;
}

string Model::getModelNumber(){
    return Model::model_number;
}

double Model::getSalesPrice(){
    return Model::sales_price;
}

void Model::setModelName(string m_name){
    Model::model_name = m_name;
}

void Model::setModelNumber(string num){
    Model::model_number = num;
}

void Model::setSalesPrice(double price){
    Model::sales_price = price; 
}
