#ifndef __BATTERY_H
#define __BATTERY_H 201609
#include "string"

class Battery : public Part{
  public:
    Battery(int p_part_type, int b_max_charge, int b_current_charge) : Part(p_part_type), max_charge(b_max_charge), current_charge(b_current_charge) { }

    //getters
    int getCurrentCharge();
    int getMaxCharge();

    //setters
    void setCurrentCharge(int b_current_charge);
    void setMaxCharge(int b_max_charge);

  private:
    int max_charge;
    int current_charge;
};
#endif
