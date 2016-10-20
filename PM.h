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
    Model createModelFromCatalog(Head h, Torso t, Battery b1, Battery b2, Battery b3, Arm a1, Arm a2, Locomotor l);
};
#endif
