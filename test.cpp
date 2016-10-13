#include "Part.h"
#include "Battery.h"
#include "Arm.h"

int main(){

    Battery test_bat = Battery(4, 10, 42);
    Arm test_arm = Arm(2, 3);
    int x;
    string name;

    x = test_arm.getType();
    cout << "arm type: " << x << "\n";

    test_arm.setSpeed(42);
    x = test_arm.getSpeed();
    cout << "arm speed: " << x << "\n";

    x = test_bat.getCurrentCharge();
    cout << "current battery charge: " << x << "\n";

    x = test_bat.getMaxCharge();
    cout << "max battery charge: " << x << "\n";

    test_bat.setName("Mr. Test");
    cout << "the battery is named: " << test_bat.getName() << "\n";

    return 1; 
}
