#include "Arm.h"
#include "Locomotor.h"

int main(){

    Locomotor test_part = Locomotor();
    double x;
    string s;
    int i;

    cout << "Enter name: ";
    cin >> s;
    test_part.setName(s);
    cout << "The part name is: " << test_part.getName() << "\n";

    cout << "Enter description: ";
    cin >> s;
    test_part.setDescription(s);
    cout << "The part description is: " << test_part.getDescription() << "\n";

    cout << "Enter part number: ";
    cin >> s;
    test_part.setPartNumber(s);
    cout << "The part number is: " << test_part.getPartNumber() << "\n";

    cout << "Enter power: ";
    cin >> x;
    test_part.setPowerConsumed(x);
    cout << "The test power is: " << test_part.getPowerConsumed() << "\n";

    cout << "Enter weight: ";
    cin >> x;
    test_part.setWeight(x);
    cout << "The test weight is: " << test_part.getWeight() << "\n";

    cout << "Enter cost: ";
    cin >> x;
    test_part.setCost(x);
    cout << "The test cost is: " << test_part.getCost() << "\n";

    cout << "Enter speed: ";
    cin >> i;
    test_part.setMaxSpeed(i);
    cout << "The test cost is: " << test_part.getMaxSpeed() << "\n";

    test_part.setCost(0);
    test_part.setWeight(0);
//    test_part.setPowerConsumed(0);

    cout << "\ndon't seg fault pls ty\n\n";
    return 0; 
}
