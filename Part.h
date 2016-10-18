#ifndef __PART_H
#define __PART_H 201609

#include <iostream>
#include <string>

using namespace std;

class Part {
  public:
    Part(int p_part_type) : part_type(p_part_type){}

    //setters
    void setPartNumber(string p_num);
    void setPartType(int p_type);
    void setWeight(double w);
    void setCost(double c);
    void setName(string p_name);
    void setDescription(string desc);

    //getters
    string getPartNumber();
    int getPartType(); 
    double getWeight();
    double getCost();
    string getName();
    string getDescription();

    //type
    static const int head = 0;
    static const int torso = 1;
    static const int battery = 2;
    static const int arm = 3;
    static const int locomotor = 4;

  private:
    string part_number="";
    int part_type;
    double weight;
    double cost;
    string name="";
    string description="";
};
#endif
