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

    double getTotalCost();
    double getMaxSpeed();

    string getModelName();
    string getModelNumber();
    double getSalesPrice();

    void setModelName(string m_name);
    void setModelNumber(string num);
    void setSalesPrice(double price);

  private:
    string model_name;
    string model_number;
    double sales_price;
    Head head;
    Torso torso;
    vector<Battery> batteries;
    vector<Arm> arms;
    Locomotor locomotor;
};
#endif
