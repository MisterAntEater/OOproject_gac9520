#include "PartCatalog.h"

void PartCatalog::addHead(Head h){
    PartCatalog::heads.push_back(h);
}

void PartCatalog::addTorso(Torso t){
    PartCatalog::torsos.push_back(t);
}

void PartCatalog::addBattery(Battery b){
    PartCatalog::batteries.push_back(b);
}

void PartCatalog::addArm(Arm a){
    PartCatalog::arms.push_back(a);
}

void PartCatalog::addLocomotor(Locomotor l){
    PartCatalog::locomotors.push_back(l);
}

void PartCatalog::viewHeads(){
    int i;

    if(PartCatalog::heads.size()!=0){
        cout << "\n\n--------------------\n";
        cout << "Displaying all heads: \n";
        for(i=0; i<PartCatalog::heads.size(); i++){
            cout << "--Head " << i << "\n"; 
            PartCatalog::heads.at(i).displayPart();
        }
    }
    else{ cout << "We have no heads to display at this time.\n"; }   
}

void PartCatalog::viewTorsos(){
    int i;

    if(PartCatalog::torsos.size()!=0){
        cout << "\n\n--------------------\n";
        cout << "Displaying all torsos: \n";
        for(i=0; i<PartCatalog::torsos.size(); i++){
            cout << "--Torso " << i << "\n"; 
            PartCatalog::torsos.at(i).displayPart();
        }
    }
    else{ cout << "We have no torsos to display at this time.\n"; }
}

void PartCatalog::viewBatteries(){
    int i;

    if(PartCatalog::batteries.size()!=0){
        cout << "\n\n--------------------\n";
        cout << "Displaying all batteries: \n";
        for(i=0; i<PartCatalog::batteries.size(); i++){
            cout << "--Battery " << i << "\n"; 
            PartCatalog::batteries.at(i).displayPart();

        }
    }
    else{ cout << "We have no batteries to display at this time.\n"; }  
}

void PartCatalog::viewArms(){
    int i;

    if(PartCatalog::arms.size()!=0){
        cout << "\n\n--------------------\n";
        cout << "Displaying all arms: \n";
        for(i=0; i<PartCatalog::arms.size(); i++){
            cout << "--Arm " << i << "\n"; 
            PartCatalog::arms.at(i).displayPart();

        }
    }
    else{ cout << "We have no arms to display at this time.\n"; }   
}

void PartCatalog::viewLocomotors(){
    int i;

    if(PartCatalog::locomotors.size()!=0){
        cout << "\n\n--------------------\n";
        cout << "Displaying all locomotors: \n";
        for(i=0; i<PartCatalog::locomotors.size(); i++){
            cout << "--Locomotor " << i << "\n"; 
            PartCatalog::locomotors.at(i).displayPart();

        }
    }
    else{ cout << "We have no locomotors to display at this time.\n"; }   
}

int PartCatalog::hasParts(){
    if(PartCatalog::heads.size()!=0){
        if(PartCatalog::torsos.size()!=0){
            if(PartCatalog::batteries.size()!=0){
                if(PartCatalog::arms.size()!=0){
                    if(PartCatalog::locomotors.size()!=0){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
