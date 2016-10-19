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
    h.setWeight(d);

    cout << "\n\tGive the cost of this head: ";
    cin >> d;
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
    t.setWeight(d);

    cout << "\n\tGive the cost of this torso: ";
    cin >> d;
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
    b.setWeight(d);

    cout << "\n\tGive the cost of this battery: ";
    cin >> d;
    b.setCost(d);

    cout << "\n\tGive the max capacity of this battery: ";
    cin >> d;
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
    a.setWeight(d);

    cout << "\n\tGive the cost of this arm: ";
    cin >> d;
    a.setCost(d);

    cout << "\n\tGive the power consumption of this arm: ";
    cin >> d;
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
    l.setWeight(d);

    cout << "\n\tGive the cost of this locomotor: ";
    cin >> d;
    l.setCost(d);

    cout << "\n\tGive the power consumption of this locomotor: ";
    cin >> d;
    l.setPowerConsumed(d);

    cout << "\n\tGive the max speed of this locomotor: ";
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
    if(boo==1){
        Battery b2 = createBattery();
        m.addBattery(b2);
        cout << "\nWould you like to add a third battery?\n  1:yes\n  2:no\n";
        cin >> boo;
        if(boo==1){
            Battery b3 = createBattery();
            m.addBattery(b3);
        }
    }

    cout << "\nCreate an arm for your model";
    Arm a1 = createArm();
    m.addArm(a1);
    cout << "\nWould you like to add a second arm?\n  1:yes\n  2:no\n";
    cin >> boo;
    if(boo==1){
        Arm a2 = createArm();
        m.addArm(a2);
    }

    cout << "\nCreate a locomotor for your model";
    Locomotor l = createLocomotor();
    m.addLocomotor(l);

    cout << "Give this model a sales price (the total cost is: " << m.getTotalCost() << "): ";
    cin >> d;
    m.setSalesPrice(d);

    cout << "\n\n~~~~~~~~~~~~~~~~~~~~\nFinished model: \n~~~~~~~~~~~~~~~~~~~~\n\n";
    m.displayModel();

    return m;
}
