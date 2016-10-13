#ifndef __LOCOMOTOR_H
#define __LOCOMOTOR_H 201609
#include "string"

class Locomotor {
  public:
    Locomotor(int type, int maxSpeed) : type(type), maxSpeed(maxSpeed) { }

    static const int legs = 0;
    static const int wheels = 1;
    static const int flippers = 2;
    static const int propellors = 3;

    static const int num_types = 4;

    int maxSpeed;
    int type;

    int getType();
    int getMaxSpeed();
    int getPowerConsumed(int speed);

    string to_string() {
      switch(type) {
        case(legs):return "walks";
        case(wheels):return "rolls";
        case(treads):return "swims";
        case(propellors):return "flys";
        default: return "is immobile";
      }
    }

  private:
};
#endif
