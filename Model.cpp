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
    for(i=0; i<Model::batteries.size(); i++){ cost+=Model::batteries.at(i).getCost(); }
    for(i=0; i<Model::arms.size(); i++){ cost+=Model::arms.at(i).getCost(); }
    cost+=Model::locomotor.getCost();

    return cost;
}

double Model::getMaxSpeed(){
    return Model::locomotor.getMaxSpeed();
}

void Model::displayModel(){
    int i;

    cout << "--------------------\n";
    cout << "Name: " << Model::model_name << "\n";
    cout << "Number: " << Model::model_number << "\n";
    cout << "Price: " << Model::sales_price << "\n";
    cout << "Head: \n";
    Model::head.displayPart();
    cout << "\n";
    cout << "Torso: \n";
    Model::torso.displayPart();
    cout << "\n";
    cout << "Batter(y/ies): \n";
    for(i=0; i<Model::batteries.size(); i++){
        Model::batteries.at(i).displayPart();
        cout << "\tEnergy: " << Model::batteries.at(i).getEnergyContained();
        cout << "\n";
    }
    cout << "Arm(s): \n";
    for(i=0; i<Model::arms.size(); i++){
        Model::arms.at(i).displayPart();
        cout << "\tPower consumed: " << Model::arms.at(i).getPowerConsumed();
        cout << "\n";
    }
    cout << "Locomotor: ";
    Model::locomotor.displayPart();
    cout << "\tPower consumed: " << Model::locomotor.getPowerConsumed() << "\n";
    cout << "\tSpeed: " << Model::getMaxSpeed() << "\n";
    cout << "--------------------\n";
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
