#ifndef __ARMS_H
#define __ARMS_H 2016

#include "Part.h"

class Arm : public Part{
  public:
    Arm(): Part(Part::arm){ }

    //setters
    void setPowerConsumed(double power);

    //getters
    double getPowerConsumed();

  private:
    double power_consumed;
};
#endif
