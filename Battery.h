#ifndef __BATTERY_H
#define __BATTERY_H 201609
#include "string"

class Battery {
  public:
    Battery(int max_charge, int current_charge) : max_charge(max_charge), current_charge(current_charge) { }

    double getCurrentCharge();
    double getMaxCharge();

  private:
    int max_charge;
    int current_charge;
};
#endif
