#include "PM.h";
/*
void chooseAction(){
}
*/
Head PM::createHead(){
    Head h = Head();
    string buffer;
    double d;

    cout << "Name this head: ";
    cin >> buffer;
    h.setName(buffer);

    cout << "Describe this head: ";
    cin.getline(buffer, 500);
    h.setDescription(buffer);

    cout << "Give this head a part number: ";
    cin >> buffer;
    h.setPartNumber(buffer);

    cout << "Give the weight of this head: ";
    cin >> d;
    h.setWeight(d);

    cout << "Give the cost of this head: ";
    cin >> d;
    h.setCost(d);

    return h;
}

Torso PM::createTorso(){
    Torso t = Torso();
    string buffer;
    double d;

    cout << "Name this torso: ";
    cin >> buffer;
    t.setName(buffer);

    cout << "Describe this torso: ";
    cin.getline(buffer, 500);
    t.setDescription(buffer);

    cout << "Give this torso a part number: ";
    cin >> buffer;
    t.setPartNumber(buffer);

    cout << "Give the weight of this torso: ";
    cin >> d;
    t.setWeight(d);

    cout << "Give the cost of this torso: ";
    cin >> d;
    t.setCost(d);

    return t;
}

Battery PM::createBattery(){
    Battery b = Battery();
    string buffer;
    double d;

    cout << "Name this battery: ";
    cin >> buffer;
    b.setName(buffer);

    cout << "Describe this battery: ";
    cin.getline(buffer, 500);
    b.setDescription(buffer);

    cout << "Give this battery a part number: ";
    cin >> buffer;
    b.setPartNumber(buffer);

    cout << "Give the weight of this battery: ";
    cin >> d;
    b.setWeight(d);

    cout << "Give the cost of this battery: ";
    cin >> d;
    b.setCost(d);

    cout << "Give the max capacity of this battery: ";
    cin >> d;
    b.setEnergyContained(d);

    return b;
}

Arm PM::createArm(){
    Arm a = Arm();
    string buffer;
    double d;

    cout << "Name this arm: ";
    cin >> buffer;
    a.setName(buffer);

    cout << "Describe this arm: ";
    cin.getline(buffer, 500);
    a.setDescription(buffer);

    cout << "Give this arm a part number: ";
    cin >> buffer;
    a.setPartNumber(buffer);

    cout << "Give the weight of this arm: ";
    cin >> d;
    a.setWeight(d);

    cout << "Give the cost of this arm: ";
    cin >> d;
    a.setCost(d);

    cout << "Give the power consumption of this arm: ";
    cin >> d;
    a.setPowerConsumed(d);

    return a;
}

Locomotor PM::createLocomotor(){
    Locomotor l = Locomotor();
    string buffer;
    double d;
    int i;

    cout << "Name this head: ";
    cin >> buffer;
    l.setName(buffer);

    cout << "Describe this head: ";
    cin.getline(buffer, 500);
    l.setDescription(buffer);

    cout << "Give this head a part number: ";
    cin >> buffer;
    l.setPartNumber(buffer);

    cout << "Give the weight of this head: ";
    cin >> d;
    l.setWeight(d);

    cout << "Give the cost of this head: ";
    cin >> d;
    l.setCost(d);

    cout << "Give the power consumption of this locomotor: ";
    cin >> d;
    l.setPowerConsumed(d);

    cout << "Give the max speed of this locomotor: ";
    cin >> i;
    l.setMaxSpeed(i);

    return l;
}

Model PM::createModel(){
    Model m;
    int boo;
    string buffer;
    double d;

    cout << "Give this model a name: ";
    cin >> buffer;
    m.setModelName(buffer);

    cout << "Give this model a number: ";
    cin >> buffer;
    m.setModelNumber(buffer);

    cout << "Give this model a sales price (the total cost is: " << m.getTotalCost() << "): ";
    cin >> d;
    m.setSalesPrice(d);

    cout << "Create a head for your model: ";
    Head h = createHead();
    m.addHead(h);

    cout << "Create a torso for your model: ";
    Torso t = createTorso();
    m.addTorso(t);

    cout << "Create a battery for your model: ";
    Battery b1 = createBattery();
    m.addBattery(b1);
    cout << "Would you like to add a second battery?\n1:yes\n2:no";
    cin >> boo;
    if(boo==1){
        Battery b2 = createBattery();
        m.addBattery(b2);
        cout << "Would you like to add a third battery?\n1:yes\n2:no";
        cin >> boo;
        if(boo==1){
            Battery b3 = createBattery();
            m.addBattery(b3);
        }
    }

    cout << "Create an arm for your model: ";
    Arm a1 = createArm();
    m.addArm(a1);
    cout << "Would you like to add a second arm?\n1:yes\n2:no";
    cin >> boo;
    if(boo==1){
        Arm a2 = createArm();
        m.addArm(a2);
    }

    cout << "Create a locomotor for your model: ";
    Locomotor l = createLocomotor();
    m.addLocomotor(l);

    cout << "Finished model: ";
    m.displayModel();

    return m;
}
