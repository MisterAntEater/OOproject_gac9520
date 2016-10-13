#include "Part.h"

void main(){

    Arms test_arm = Arms(2, 3);
    int x;

    x = test_arm.getType();
    cout << "arm type: " << x << "\n";

    test_arm.setSpeed(42);
    x = test_arm.getSpeed();
    cout << "arm speed: " << x << "\n";

    
}
