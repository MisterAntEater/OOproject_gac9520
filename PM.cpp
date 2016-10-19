#include "PM.h";
/*
void chooseAction(){
}
*/
Head PM::createHead(){
    Head h = Head();
    char buffer[500];
    double d;

    cout << "\nName this head: ";
    cin >> buffer;
    h.setName(buffer);

    cout << "\nDescribe this head: ";
    cin.getline(buffer, 500);
    h.setDescription(buffer);

    cout << "\nGive this head a part number: ";
    cin >> buffer;
    h.setPartNumber(buffer);

    cout << "\nGive the weight of this head: ";
    cin >> d;
    h.setWeight(d);

    cout << "\nGive the cost of this head: ";
    cin >> d;
    h.setCost(d);

    return h;
}

Torso PM::createTorso(){
    Torso t = Torso();
    char buffer[500];
    double d;

    cout << "\nName this torso: ";
    cin >> buffer;
    t.setName(buffer);

    cout << "\nDescribe this torso: ";
    cin.getline(buffer, 500);
    t.setDescription(buffer);

    cout << "\nGive this torso a part number: ";
    cin >> buffer;
    t.setPartNumber(buffer);

    cout << "\nGive the weight of this torso: ";
    cin >> d;
    t.setWeight(d);

    cout << "\nGive the cost of this torso: ";
    cin >> d;
    t.setCost(d);

    return t;
}

Battery PM::createBattery(){
    Battery b = Battery();
    char buffer[500];
    double d;

    cout << "\nName this battery: ";
    cin >> buffer;
    b.setName(buffer);

    cout << "\nDescribe this battery: ";
    cin.getline(buffer, 500);
    b.setDescription(buffer);

    cout << "\nGive this battery a part number: ";
    cin >> buffer;
    b.setPartNumber(buffer);

    cout << "\nGive the weight of this battery: ";
    cin >> d;
    b.setWeight(d);

    cout << "\nGive the cost of this battery: ";
    cin >> d;
    b.setCost(d);

    cout << "\nGive the max capacity of this battery: ";
    cin >> d;
    b.setEnergyContained(d);

    return b;
}

Arm PM::createArm(){
    Arm a = Arm();
    char buffer[500];
    double d;

    cout << "\nName this arm: ";
    cin >> buffer;
    a.setName(buffer);

    cout << "\nDescribe this arm: ";
    cin.getline(buffer, 500);
    a.setDescription(buffer);

    cout << "\nGive this arm a part number: ";
    cin >> buffer;
    a.setPartNumber(buffer);

    cout << "\nGive the weight of this arm: ";
    cin >> d;
    a.setWeight(d);

    cout << "\nGive the cost of this arm: ";
    cin >> d;
    a.setCost(d);

    cout << "\nGive the power consumption of this arm: ";
    cin >> d;
    a.setPowerConsumed(d);

    return a;
}

Locomotor PM::createLocomotor(){
    Locomotor l = Locomotor();
    char buffer[500];
    double d;
    int i;

    cout << "\nName this locomotor: ";
    cin >> buffer;
    l.setName(buffer);

    cout << "\nDescribe this locomotor: ";
    cin.getline(buffer, 500);
    l.setDescription(buffer);

    cout << "\nGive this locomotor a part number: ";
    cin >> buffer;
    l.setPartNumber(buffer);

    cout << "\nGive the weight of this locomotor: ";
    cin >> d;
    l.setWeight(d);

    cout << "\nGive the cost of this locomotor: ";
    cin >> d;
    l.setCost(d);

    cout << "\nGive the power consumption of this locomotor: ";
    cin >> d;
    l.setPowerConsumed(d);

    cout << "\nGive the max speed of this locomotor: ";
    cin >> i;
    l.setMaxSpeed(i);

    return l;
}

Model PM::createModel(){
    Model m;
    int boo;
    char buffer[500];
    double d;

    cout << "\nGive this model a name: ";
    cin >> buffer;
    m.setModelName(buffer);

    cout << "\nGive this model a number: ";
    cin >> buffer;
    m.setModelNumber(buffer);

    cout << "\nCreate a head for your model: ";
    Head h = createHead();
    m.addHead(h);

    cout << "\nCreate a torso for your model: ";
    Torso t = createTorso();
    m.addTorso(t);

    cout << "\nCreate a battery for your model: ";
    Battery b1 = createBattery();
    m.addBattery(b1);
    cout << "\nWould you like to add a second battery?\n1:yes\n2:no";
    cin >> boo;
    if(boo==1){
        Battery b2 = createBattery();
        m.addBattery(b2);
        cout << "\nWould you like to add a third battery?\n1:yes\n2:no";
        cin >> boo;
        if(boo==1){
            Battery b3 = createBattery();
            m.addBattery(b3);
        }
    }

    cout << "\nCreate an arm for your model: ";
    Arm a1 = createArm();
    m.addArm(a1);
    cout << "\nWould you like to add a second arm?\n1:yes\n2:no";
    cin >> boo;
    if(boo==1){
        Arm a2 = createArm();
        m.addArm(a2);
    }

    cout << "\nCreate a locomotor for your model: ";
    Locomotor l = createLocomotor();
    m.addLocomotor(l);

    cout << "Give this model a sales price (the total cost is: " << m.getTotalCost() << "): ";
    cin >> d;
    m.setSalesPrice(d);

    cout << "\n\n~~~~~~~~~~~~~~~~~~~~\nFinished model: \n~~~~~~~~~~~~~~~~~~~~\n\n";
    m.displayModel();

    return m;
}
