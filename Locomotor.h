#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 201609

class Locomotor : public Part{
  public:
    Locomotor(int p_part_type, int l_loco_type) : Part(p_part_type), loco_type(l_loco_type) { }

    int powerConsumed(int a_speed);

    //setters
    void setType(int l_loco_type);
    void setSpeed(int l_speed);

    //getters
    int getType();
    int getSpeed();

    static const int legs = 0;
    static const int flippers = 1;
    static const int propellors = 2;
    static const int treads = 3;
    static const int num_types = 4;

  private:
    int consumption_rate;
    int loco_type;
    int speed;
};
#endif
