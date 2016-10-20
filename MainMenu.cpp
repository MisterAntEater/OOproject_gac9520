#include "PM.h"
#include "MainMenu.h"

int main(int branch){
    if(branch == 0){ return 0; }
           //123456789012345678901234567890123456789
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n";
    cout << "|    Welcome to Robbie Robot Shop!    |\n";
    cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n";
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n\n";
    askCorE();
    return 0;
}

void askCorE(){
    int choice;

    cout << "Are you a cutomer or an employee?\n";
    cout << "  1: customer\n";
    cout << "  2: employee\n";
    cout << "  Or press ctrl+c to shutdown\n";

    cin >> choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        choice = -1;
    }

    if(choice == 1){ /*BCMenu();*/ }
    else if(choice == 2){ askWhichEmployee(); }
    else{
        cout << "Sorry, that's an invalid response! Try again.\n\n";
        askCorE();
    }
}

void askWhichEmployee(){
    int choice;

    cout << "Which employee are you?\n";
    cout << "  1: PM\n";
    cout << "  2: SA\n";
    cout << "  3: PB\n";
    cout << "  4: Go back to the last menu\n";

    cin >> choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        choice = -1;
    }

    if(choice == 1){ PMMenu(); }
    else if(choice == 2){/* MainMenu::SAMenu();*/ }
    else if(choice == 3){/* MainMenu::PBMenu();*/ }
    else if(choice == 4){ askCorE(); }
    else{
        cout << "Sorry, that's an invalid response! Try again.\n\n";
        askWhichEmployee();
    }
}

void PMMenu(){
    int choice;
    PM pm;

    cout << "Welcome Product Manager! What would you like to do?\n";
    cout << "  1: Create a part\n";
    cout << "  2: Create a model\n";
    cout << "  3: View parts\n";
    cout << "  4: View models\n";
    cout << "  5: Go back to the last menu\n";

    cin >> choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        choice = -1;
    }

    switch (choice) {
        case 1:
            cout << "\nWhat type of part would you like to create?\n";
            cout << "  1: Create a head\n";
            cout << "  2: Create a torso\n";
            cout << "  3: Create a battery\n";
            cout << "  4: Create an Arm\n";
            cout << "  5: Create a locomotor\n";
            cout << "  6: Nevermind, I want to do something else\n";

            cin >> choice;
            if(cin.fail()){
                cin.clear();
                cin.ignore(100, '\n');
                choice = -1;
            }

            switch (choice) {
                case 1: pm.createHead(); PMMenu(); break;
                case 2: pm.createTorso(); PMMenu(); break;
                case 3: pm.createBattery(); PMMenu(); break;
                case 4: pm.createArm(); PMMenu(); break;
                case 5: pm.createLocomotor(); PMMenu(); break;
                case 6: PMMenu(); break;
                default: cout << "Sorry, that's an invalid response! Try again.\n\n";
                         PMMenu(); break;
            }
        case 2: pm.createModel(); PMMenu(); break;
        case 3: /*pm.viewPartsCatalog();*/ break;
        case 4: /*pm.viewModelsCatalog();*/ break;
        case 5: askWhichEmployee();
        default: cout << "Sorry, that's an invalid response! Try again.\n\n"; PMMenu(); break;
    }
}
/*
void SAMenu(){

}

void BCMenu(){

}
*/
