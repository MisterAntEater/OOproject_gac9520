#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 201609

#include "Part.h"

class Locomotor : public Part{
  public:
    Locomotor() : Part(Part::locomotor) { }

    //setters
    void setMaxSpeed(int speed);
    void setPowerConsumed(double power);

    //getters
    int getMaxSpeed();
    double getPowerConsumed();

  private:
    double power_consumed;
    int max_speed;
};
#endif
