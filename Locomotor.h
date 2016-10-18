#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 201609

#include "Part.h"

class Locomotor : public Part{
  public:
    Locomotor() : Part(Part::locomotor) { }

    //setters
    void setMaxSpeed(int speed);
    void setPowerConsumed(double rate);

    //getters
    int getMaxSpeed();
    double getPowerConsumed();

  private:
    double power_consumed;
    int max_speed;
};
#endif
