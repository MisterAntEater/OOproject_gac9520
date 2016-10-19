#include "Model.h"

void Model::addPart(Part p){
    Model::parts.push_back(p);
}

int Model::hasSpace(int p_type){
    int count = 0;

    for(Part i: Model::parts){
        if(i.getPartType() == p_type){ count++; }
    }

    switch (p_type) {
        case Part::head :
            if(count > 0){ return 0; }
        case Part::torso :
            if(count > 0){ return 0; }
        case Part::battery :
            if(count > 2){ return 0; }
        case Part::arm :
            if(count > 1){ return 0; }
        case Part::locomotor :
            if(count > 0){ return 0; }
    }
    return 1;
}

vector<Part> Model::getParts(){
    return Model::parts;
}

double Model::getTotalCost(){
    double cost = 0.0;

    for(Part i: Model::parts){
        cost+=i.getCost();
    }

    return cost;
}

double Model::getMaxSpeed(){
    for(Part i: Model::parts){
        if(i.getPartType() == Part::locomotor){
            return i.getMaxSpeed();
        }
    }
    return -1;
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
