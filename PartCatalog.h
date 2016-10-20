#ifndef __PARTCATALOG_H
#define __PARTCATALOG_H 201609

#include "Part.h"
#include "Head.h"
#include "Torso.h"
#include "Battery.h"
#include "Arm.h"
#include "Locomotor.h"
#include "PM.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PartCatalog{
  public:
    void addHead(Head h);
    void addTorso(Torso t);
    void addBattery(Battery b);
    void addArm(Arm a);
    void addLocomotor(Locomotor l);

    void viewHeads();
    void viewTorsos();
    void viewBatteries();
    void viewArms();
    void viewLocomotors();

    int hasParts();

    vector<Head> heads;
    vector<Torso> torsos;
    vector<Battery> batteries;
    vector<Arm> arms;
    vector<Locomotor> locomotors;
};
#endif
