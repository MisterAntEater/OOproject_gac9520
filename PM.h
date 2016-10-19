#ifndef __PM_H
#define __PM_H 201609

#include "Part.h"
#include "Model.h"

class PM{
  public:
    Head createHead();
    Torso createTorso();
    Battery createBattery();
    Arm createArm();
    Locomotor createLocomotor();
    Model createModel();
    void viewModels();
    void viewParts();
};
#endif
