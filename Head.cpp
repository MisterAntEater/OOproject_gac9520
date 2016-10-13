#include "Part.h"
#include "Head.h"

//setters
void Head::setType(int h_head_type){
    Head::head_type = h_head_type;
}

//getters
int Head::getType(){
    return Head::head_type;
}
