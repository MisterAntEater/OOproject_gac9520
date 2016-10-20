#include "PM.h";

Head PM::createHead(){
    Head h = Head();
    char buffer[500];
    double d;

    cout << "\n\tName this head: ";
    cin.ignore();
    cin.getline(buffer, 500);
    h.setName(buffer);
    cin.clear();

    cout << "\n\tDescribe this head: ";
    cin.getline(buffer, 500);
    h.setDescription(buffer);
    cin.clear();

    cout << "\n\tGive this head a part number: ";
    cin.getline(buffer, 500);
    h.setPartNumber(buffer);
    cin.clear();

    cout << "\n\tGive the weight of this head: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nYour input was invalid. Try again: ";
            if(cin >> d) { break; }
        }
        else{ break; }
    }
    h.setWeight(d);

    cout << "\n\tGive the cost of this head: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    h.setCost(d);

    return h;
}

Torso PM::createTorso(){
    Torso t = Torso();
    char buffer[500];
    double d;

    cout << "\n\tName this torso: ";
    cin.ignore();
    cin.getline(buffer, 500);
    t.setName(buffer);
    cin.clear();

    cout << "\n\tDescribe this torso: ";
    cin.getline(buffer, 500);
    t.setDescription(buffer);
    cin.clear();

    cout << "\n\tGive this torso a part number: ";
    cin.getline(buffer, 500);
    t.setPartNumber(buffer);
    cin.clear();

    cout << "\n\tGive the weight of this torso: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    t.setWeight(d);

    cout << "\n\tGive the cost of this torso: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    t.setCost(d);

    return t;
}

Battery PM::createBattery(){
    Battery b = Battery();
    char buffer[500];
    double d;

    cout << "\n\tName this battery: ";
    cin.ignore();
    cin.getline(buffer, 500);
    b.setName(buffer);
    cin.clear();

    cout << "\n\tDescribe this battery: ";
    cin.getline(buffer, 500);
    b.setDescription(buffer);
    cin.clear();

    cout << "\n\tGive this battery a part number: ";
    cin.getline(buffer, 500);
    b.setPartNumber(buffer);
    cin.clear();

    cout << "\n\tGive the weight of this battery: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    b.setWeight(d);

    cout << "\n\tGive the cost of this battery: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    b.setCost(d);

    cout << "\n\tGive the max capacity of this battery: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    b.setEnergyContained(d);

    return b;
}

Arm PM::createArm(){
    Arm a = Arm();
    char buffer[500];
    double d;

    cout << "\n\tName this arm: ";
    cin.ignore();
    cin.getline(buffer, 500);
    a.setName(buffer);
    cin.clear();

    cout << "\n\tDescribe this arm: ";
    cin.getline(buffer, 500);
    a.setDescription(buffer);
    cin.clear();

    cout << "\n\tGive this arm a part number: ";
    cin.getline(buffer, 500);
    a.setPartNumber(buffer);
    cin.clear();

    cout << "\n\tGive the weight of this arm: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    a.setWeight(d);

    cout << "\n\tGive the cost of this arm: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    a.setCost(d);

    cout << "\n\tGive the power consumption of this arm: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    a.setPowerConsumed(d);

    return a;
}

Locomotor PM::createLocomotor(){
    Locomotor l = Locomotor();
    char buffer[500];
    double d;
    int i;

    cout << "\n\tName this locomotor: ";
    cin.ignore();
    cin.getline(buffer, 500);
    l.setName(buffer);
    cin.clear();

    cout << "\n\tDescribe this locomotor: ";
    cin.getline(buffer, 500);
    l.setDescription(buffer);
    cin.clear();

    cout << "\n\tGive this locomotor a part number: ";
    cin.getline(buffer, 500);
    l.setPartNumber(buffer);
    cin.clear();

    cout << "\n\tGive the weight of this locomotor: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    l.setWeight(d);

    cout << "\n\tGive the cost of this locomotor: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    l.setCost(d);

    cout << "\n\tGive the power consumption of this locomotor: ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> d;
        }
        else{ break; }
    }
    l.setPowerConsumed(d);

    cout << "\n\tGive the max speed of this locomotor: ";
    cin >> i;
    while(1){
        if(cin.fail()){
            cin.clear();
            cout << "\nYour input was invalid. Try again: ";
            cin.ignore(100, '\n');
            cin >> i;
        }
        else{ break; }
    }
    l.setMaxSpeed(i);

    return l;
}

Model PM::createModel(){
    Model m;
    int boo;
    char buffer[500];
    double d;

    cout << "\nGive this model a name: ";
    cin.ignore();
    cin.getline(buffer, 500);
    m.setModelName(buffer);
    cin.clear();

    cout << "\nGive this model a number: ";
    cin.getline(buffer, 500);
    m.setModelNumber(buffer);
    cin.clear();

    cout << "\nCreate a head for your model";
    Head h = createHead();
    m.addHead(h);

    cout << "\nCreate a torso for your model";
    Torso t = createTorso();
    m.addTorso(t);

    cout << "\nCreate a battery for your model";
    Battery b1 = createBattery();
    m.addBattery(b1);
    cout << "\nWould you like to add a second battery?\n  1:yes\n  2:no\n";
    cin >> boo;
    while(1){
        if(cin.fail() || (boo!=1 && boo!=2)){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nYour input was invalid. Try again: ";
            cin >> boo;
        }
        else if(boo==1){
            Battery b2 = createBattery();
            m.addBattery(b2);
            cout << "\nWould you like to add a third battery?\n  1:yes\n  2:no\n";
            cin >> boo;
            while(1){
                if(cin.fail() || (boo!=1 && boo!=2)){
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "\nYour input was invalid. Try again: ";
                    cin >> boo;
                }
                else if(boo==1){
                    Battery b3 = createBattery();
                    m.addBattery(b3);
                    break;
                }
                else if(boo==2){ break; }
            }
            break;
        }
        else if(boo==2){ break; }
    }

    cout << "\nCreate an arm for your model";
    Arm a1 = createArm();
    m.addArm(a1);
    cout << "\nWould you like to add a second arm?\n  1:yes\n  2:no\n";
    cin >> boo;
    while(1){
        if(cin.fail() || (boo!=1 && boo!=2)){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nYour input was invalid. Try again: ";
            cin >> boo;
        }
        else if(boo==1){
            Arm a2 = createArm();
            m.addArm(a2);
            break;
        }
        else if(boo==2){ break; }
    }

    cout << "\nCreate a locomotor for your model";
    Locomotor l = createLocomotor();
    m.addLocomotor(l);

    cout << "Give this model a sales price (the total cost is: " << m.getTotalCost() << "): ";
    cin >> d;
    while(1){
        if(cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nYour input was invalid. Try again:";
            cin >> d;
        }
        else{ break; }
    }
    m.setSalesPrice(d);

    cout << "\n\n~~~~~~~~~~~~~~~~~~~~\nFinished model: \n~~~~~~~~~~~~~~~~~~~~\n\n";
    m.displayModel();

    return m;
}

Model createModelFromCatalog(Head h, Torso t, Battery b1, Battery b2, Battery b3, Arm a1, Arm a2, Locomotor l){
    Model m;

    m.addHead(h);
    m.addTorso(t);
    m.addBattery(b1);
    if(b2.getEnergyContained() != -1){ m.addBattery(b2); }
    if(b3.getEnergyContained() != -1){ m.addBattery(b3); }
    m.addArm(a1);
    if(a2.getPowerConsumed() != -1){ m.addArm(a2); }
    m.addLocomotor(l);

    m.displayModel();

    return m;
}
