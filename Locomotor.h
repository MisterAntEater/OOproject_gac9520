#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 201609

class Locomotor : public Part{
  public:
    Locomotor(l_loco_type) : Part(Part::Locomotor), loco_type(l_loco_type) { }

    int powerConsumed(int a_speed);

    //setters
    int setType(int a_arm_type);
    void setSpeed(int a_speed);

    //getters
    int getType();
    int getSpeed();

  private:
    static const int strong = 0;
    static const int drill = 1;
    static const int machinegun = 2;
    static const int hammer = 3;
    static const int num_types = 4;

    int arm_type;
    int speed;
};
#endif
