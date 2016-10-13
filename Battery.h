#ifndef __BATTERY_H
#define __BATTERY_H 201609
#include "string"

class Battery {
  public:
    Battery(int max_charge, int current_charge) : Part(Part::battery), max_charge(b_max_charge), current_charge(b_current_charge) { }

    //getters
    double getCurrentCharge();
    double getMaxCharge();

    //setters
    void setCurrentCharge(int b_current_charge);
    void setMaxCharge(int b_max_charge);

  private:
    int max_charge;
    int current_charge;
};
#endif
