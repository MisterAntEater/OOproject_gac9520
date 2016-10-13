#ifndef __TORSO_H
#define __TORSO_H 201609
#include "string"
#include "Part.h"

class Torso : public Part{
  public:
    Torso(int p_part_type, int t_num_bats, int t_num_arms)
    : Part(p_part_type), num_bats(t_num_bats), num_arms(t_num_arms){}

    int getNumBatteries();
    int getNumArmHoles();

    void setNumBatteries(int t_num_bats);
    void setNumArmHoles(int t_num_arms);

  private:
    int num_bats;
    int num_arms;
};
#endif
