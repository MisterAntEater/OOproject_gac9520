#ifndef __MODELCATALOG_H
#define __MODELCATALOG_H 201609

#include "Model.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ModelCatalog{
  public:
    void addModel(Model m);
    void viewModels();
    vector<Model> models;
};
#endif
