#include "ModelCatalog.h"

void ModelCatalog::addModel(Model m){
    ModelCatalog::models.push_back(m);
}

void ModelCatalog::viewModels(){
    int i;

    for(i=0; i<ModelCatalog::models.size(); i++){
        cout << "\n----------\nModel " << i << "\n----------\n";
        ModelCatalog::models.at(i).displayModel();
    }
}
