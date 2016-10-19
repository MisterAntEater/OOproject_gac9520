#ifndef __MODEL_H
#define __MODEL_H 201609

#include "Part.h"
#include "Head.h"
#include "Torso.h"
#include "Battery.h"
#include "Arm.h"
#include "Locomotor.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Model{
  public:
    void addHead(Head h);
    void addTorso(Torso t);
    void addBattery(Battery b);
    void addArm(Arm a);
    void addLocomotor(Locomotor l);

    int hasSpaceForPart(int p_type);

    double getTotalCost();
    double getMaxSpeed();
    void displayParts();

    string getModelName();
    string getModelNumber();
    double getSalesPrice();

    void setModelName(string m_name);
    void setModelNumber(string num);
    void setSalesPrice(double price);

  private:
    static const int head = 0;
    static const int torso = 1;
    static const int battery = 2;
    static const int arm = 3;
    static const int locomotor = 4;

    int part_count;
    string model_name;
    string model_number;
    double sales_price;
    vector<Part> parts;
};
#endif
