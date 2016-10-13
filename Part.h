#ifndef __PART_H
#define __PART_H 201609

#include <iostream>
#include <string>

using namespace std;

class Part {
  public:
    Part(int p_part_type) : part_type(p_part_type){}

    //setters
    void setPartNumber(int p_part_number);
    void setType(int p_part_type);
    void setWeight(double p_weight);
    void setCost(double p_cost);
    void setName(string p_name);
    void setDescription(string p_description);

    //getters
    int getPartNumber();
    int getType(); 
    double getWeight();
    double getCost();
    string getName();
    string getDescription();

    //type
    static const int torso = 0;
    static const int head = 1;
    static const int arm = 2;
    static const int locomotor = 3;
    static const int battery = 4;
  private:
    int part_number;
    int part_type;
    double weight;
    double cost;
    string name;
    string description;
};
#endif
