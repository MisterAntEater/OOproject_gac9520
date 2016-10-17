#ifndef __MODEL_H
#define __MODEL_H 201609

#include "Part.h"
#include "Arm.h"
#include "Battery.h"
#include "Torso.h"
#include "Locomotor.h"

#include <iostream>
#include <string>

using namespace std;

class Model{
  public:
    Model();
    void addPart(int part_type);
    Part[] getParts();
    double getTotalCost();
    double getMaxSpeed();
  private:
    static const int head = 0;
    static const int torso = 1;
    static const int battery = 2;
    static const int arm = 3;
    static const int locomotor = 4;

    int part_count;
    string name;
    int model_number;
    double price;
    Part[] parts;
};
#endif
