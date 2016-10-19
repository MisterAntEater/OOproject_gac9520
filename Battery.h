#ifndef __BATTERY_H
#define __BATTERY_H 201609

#include "Part.h"

class Battery : public Part{
  public:
    Battery() : Part(Part::battery) { }

    //getters
    double getEnergyContained();

    //setters
    void setEnergyContained(double energy);

  private:
    double energy_contained;
};
#endif
