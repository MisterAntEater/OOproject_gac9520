#ifndef __TORSO_H
#define __TORSO_H 201609

#include "Part.h"

class Torso : public Part{
  public:
    Torso() : Part(Part::torso) {}
  private:
};
#endif
