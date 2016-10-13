#ifndef __PART_H
#define __PART_H 201609

#include "arms.h"
#include "locomotor.h"
#include "head.h"
#include "torso.h"
#include "std_lib_facilities.h"

#include <iostream>
#include <string>

using namespace std;

class Part {
  public:
    Part(int p_part_type) : part_type(p_part_type){}

    //setters
    void setPartNumber(int p_part_number);
    void setPartType(int p_part_type);
    void setWeight(double p_weight);
    void setCost(double p_cost);
    void setName(string p_name);
    void setDescription(string p_description);

    //getters
    int getPartNumber();
    int getPartType(); 
    double getWeight();
    double getCost();
    string getName();
    string getDescription();
    
  private:
    int part_number;
    int part_type
    double weight;
    double cost;
    String name;
    String description;
};
#endif
