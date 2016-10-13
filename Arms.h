#ifndef __ARMS_H
#define __ARMS_H 201609

class Arms : public Part{
  public:
    Arms(a_arm_type) : Part(Part::arm), arm_type(a_arm_type) { }

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
