#include "Arm.h"

int main(){

    Arm test_part = Arm();
    double x;
    char s[100];

    cout << "Enter power: ";
    cin >> x;
    test_part.setPowerConsumed(x);
    cout << "The test power is: " << test_part.getPowerConsumed() << "\n";

    cout << "Enter name: ";
    cin >> s;
    test_part.setName(s);
    cout << "The arm name is: " << test_part.getName() << "\n";
/*
    cout << "Enter description: ";
    cin >> d;
    test_part.setDescription(d);
    cout << "The arm description is: " << test_part.getDescription() << "\n";
*/

    cout << "Enter part number: ";
    cin >> s;
    cout << s << "\n";
    test_part.setPartNumber(s);
    cout << "The part number is: " << test_part.getPartNumber() << "\n";

    cout << "wtf\n";
    cin.clear();
    return 0; 
}
