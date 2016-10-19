#ifndef __MODEL_H
#define __MODEL_H 201609

#include "Model.h"

void addPart(Part p){
    Model::parts.push_back(p);
}

int hasSpace(int p_type){
    int count;

    for(Part i: Model::parts){
        if(i.getType() == p_type){ count++; }
    }

    switch (p_type) {
        case Part::head :
            
        case Part::torso :

        case Part::battery :

        case Part::arm :
 
        case Part::locomotor :
}

Part[] getParts();

double getTotalCost();

double getMaxSpeed();

string getModelName();

string getModelNumber();

double getSalesPrice();

void setModelName(string m_name);

void setModelNumber(string num){

}

void setSalesPrice(double price){

}
