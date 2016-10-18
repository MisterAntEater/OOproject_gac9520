#ifndef __TORSO_H
#define __TORSO_H 201609

#include "Part.h"

class Torso : public Part{
  public:
    Torso() : Part(Part::torso) {}

    //getters
    int getNumBatteries();

    //setters
    void setNumBatteries(int t_num_bats);

  private:
    int num_batteries;
};
#endif
