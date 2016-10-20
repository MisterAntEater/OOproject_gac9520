#include "MainMenu.h"

ModelCatalog mc;
PM pm;
//PartCatalog pc;

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

    cout << "Are you a customer or an employee?\n";
    cout << "  1: customer\n";
    cout << "  2: employee\n";
    cout << "  Or press ctrl+c to shutdown\n";

    cin >> choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        choice = -1;
    }

    if(choice == 1){ BCMenu(); }
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
    cout << "  3: Go back to the last menu\n";

    cin >> choice;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        choice = -1;
    }

    if(choice == 1){ PMMenu(); }
    else if(choice == 2){ SAMenu(); }
    else if(choice == 3){ askCorE(); }
    else{
        cout << "Sorry, that's an invalid response! Try again.\n\n";
        askWhichEmployee();
    }
}

void PMMenu(){
    int choice;
    Battery bnull;
    Arm anull;
    Head h;
    Torso t;
    Battery b1;
    Battery b2;
    Battery b3;
    Arm a1;
    Arm a2;
    Locomotor l;
    Model m;

    anull.setPowerConsumed(-1);
    bnull.setEnergyContained(-1);

    cout << "Welcome Product Manager! What would you like to do?\n";
    cout << "  1: Create a part\n";
    cout << "  2: Create a model\n";
    //cout << "  3: View parts\n";
    cout << "  3: View models\n";
    cout << "  4: Go back to the last menu\n";

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
        case 2:
            /*cout << "\nWould you like to use the catalog or build on the fly?\n";
            cout << "  1: Catalog\n";
            cout << "  2: Freestyle\n";

            cin >> choice;
            if(cin.fail() || (choice!=1 && choice!=2)){
                cin.clear();
                cin.ignore(100, '\n');
                cout << "\nInvalid input. Defaulting to on-the-fly building.\n";
            }
            else if(choice == 1){
                if(pc.hasParts()){
                    //head
                    pc.viewHeads();
                    cout << "\nChoose a head: ";

                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<1 || choice>=pc.heads.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else{ h = pc.heads.at(choice); break; }
                    }
                    //torso
                    pc.viewTorsos();
                    cout << "\nChoose a torso: ";

                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<1 || choice>=pc.torsos.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else{ t = pc.torsos.at(choice); break; }
                    }
                    //bat
                    pc.viewBatteries();
                    cout << "\nChoose a first battery: ";

                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<1 || choice>=pc.batteries.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else{ b1 = pc.batteries.at(choice); break; }
                    }

                    cout << "\nChoose a second battery, or input 0 for only one battery.\n";
                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<0 || choice>=pc.batteries.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid, try again: ";
                            cin >> choice;
                        }
                        else if(choice == 0){ b2 = bnull; b3 = bnull; break; }
                        else{
                            b2 = pc.batteries.at(choice);
                            cout << "\nChoose a third battery, or input 0 for just two batteries.\n";
                            while(1){
                                if(cin.fail() || choice<0 || choice>=pc.batteries.size()){
                                    cin.clear();
                                    cin.ignore(100,'\n');
                                    cout << "\nInvalid, try again: ";
                                    cin >> choice;
                                }
                                else if(choice == 0){ b3 = bnull; break; }
                                else{ b3 = pc.batteries.at(choice); break; }
                            }
                            break;
                        }
                    }

                    //arm
                    pc.viewArms();
                    cout << "\nChoose a first arm: ";

                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<1 || choice>=pc.arms.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else{ a1 = pc.arms.at(choice); break; }
                    }
                    cout << "\nChoose a second arm, or input 0 for only one arm\n";
                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<0 || choice>=pc.arms.size()){
                            cin.clear();
                            cin.ignore(100,'\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else if(choice == 0){ a2 = anull; break; }
                        else{ a2 = pc.arms.at(choice); break; }
                    }

                    //loco
                    pc.viewLocomotors();
                    cout << "\nChoose a Locomotor: ";

                    cin >> choice;
                    while(1){
                        if(cin.fail() || choice<1 || choice>=pc.locomotors.size()){
                            cin.clear();
                            cin.ignore(100, '\n');
                            cout << "\nInvalid choice, try again: ";
                            cin >> choice;
                        }
                        else{ l = pc.locomotors.at(choice); break; }
                    }

		    pm.createModelFromCatalog(h, t, b1, b2, b3, a1, a2, l);
                    PMMenu();
                    break;
                }
                else{ cout << "\nNot enough parts in catalog for a model, defaulting to on-the-fly building.\n"; }
            }
            else{*/
                m = pm.createModel();
                mc.addModel(m);
                PMMenu();
                //break;
            //}
//        case 3: pc.viewHeads(); pc.viewTorsos(); pc.viewBatteries(); pc.viewArms(); pc.viewLocomotors(); break;
        case 3: mc.viewModels(); break;
        case 4: askWhichEmployee();
        default: cout << "Sorry, that's an invalid response! Try again.\n\n"; PMMenu(); break;
    }
}

void SAMenu(){
    int choice;

    cout << "\nWhat would you like to do?\n";
    cout << "  1: View Model catalog\n";
    cout << "  2: Create an order\n";

    cin >> choice;
    while(1){
        if(cin.fail() || (choice!=1 && choice!=2)){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid, try again: ";
            cin >> choice;
        }
        else{ break; }
    }

    if(choice==1){ mc.viewModels(); }
    else if(choice==2){ createOrder(); }
    cout << "\nWhat now?\n";
    cout << "  1: Do more tasks as SA\n";
    cout << "  2: Return to main menu\n";

    cin >> choice;
    while(1){
        if(cin.fail() || (choice!=1 && choice!=2)){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid, try again: ";
            cin >> choice;
        }
        else{ break; }
    }
    if(choice ==1){ SAMenu(); }
}

void BCMenu(){
    int i;

    cout << "\nWelcome valued customer! Here is a list of our available Robot Models:\n\n";
    mc.viewModels();
    cout << "\n\n\nPlease speak with one of our sales associate for more details!\n\n";
    cout << "Input 0 to return to the main menu:\n";
    cin >> i;
    while(1){
        if(cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');
        }
        else if(i==0){ askCorE(); break; }
        cout << "\nInvalid input, please try again: \n";
        cin >> i;
    }
}

void createOrder(){
    Order o;
    char buffer[500];
    double d;
    int choice, q;

    mc.viewModels();
    cout << "\n\tChoose a model for the order: \n";
    cin >> choice;
    while(1){
        if(cin.fail() || choice<1 || choice>=mc.models.size()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid choice, try again: ";
            cin >> choice;
        }
        else{ o.setOrderModel(mc.models.at(choice)); break; }
    }

    cout << "\nSet the order number: ";
    cin >> buffer;
    while(1){
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid, try again: ";
            cin >> buffer;
        }
        else{ break; }
    }
    o.setOrderNumber(buffer);

    cout << "\nWhen is this sale being completed (please use mm-dd-yyyy format)";
    cin >> buffer;
    while(1){
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid, try again: ";
            cin >> buffer;
        }
        else{ break; }
    }
    o.setSaleDate(buffer);

    cout << "\nHow many robots are being sold?";
    cin >> q;
    while(1){
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid, try again: ";
            cin >> q;
        }
        else{ break; }
    }
    o.setQuantity(q);

    cout << "\nWhat shipping method will be used?\n";
    cout << "  1: snail mail     (10$/bot)\n";
    cout << "  2: rush order     (30$/bot)\n";
    cout << "  3: next day air   (100$/bot)\n";

    cin >> choice;
    while(1){
        if(cin.fail() || choice<1 || choice>3){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nInvalid choice, try again: ";
            cin >> choice;
        }
        else if(choice==1){ o.setPriceShipping(10); break; }
        else if(choice==2){ o.setPriceShipping(30); break; }
        else if(choice==3){ o.setPriceShipping(100); break; }
    }

    cout << "\n\nThe order is complete:\n\n";
    o.displayOrder();
    cout << "\n\nShow this order to the customer when finalizing the sale.\n\n";
}
