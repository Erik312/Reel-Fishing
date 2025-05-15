#include "fisherman.hpp"

Fisherman::Fisherman(){};


Fisherman::~Fisherman(){};

void Fisherman::totalCatch(){
    int count=1;
    for(auto item : _catchBag){
        cout << count << "." << " "<< "{ Type:" <<item._fishSpecies << ", Weight:" << item._fishWeight << "lbs" << ", length:" << item._fishLength << "in }" << endl;
                
        count++;
    }
    return;
};