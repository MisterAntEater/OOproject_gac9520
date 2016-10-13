#include "Part.h"
#include "Battery.h"

class Battery : public RoboPart {

  public:
    int getCurrentPower(){
        return current_power;
    }
    int getMaxPower(){
        return max_power;
    }
}
