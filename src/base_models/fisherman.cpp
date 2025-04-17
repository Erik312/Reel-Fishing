#include "fisherman.hpp"

Fisherman::Fisherman(){};


Fisherman::~Fisherman(){};

void Fisherman::totalCatch(){
    int count=1;
    for(auto item : catch_bag){
        cout << count << "." << " "<< "{ Type:" <<item.fish_species << ", Weight:" << item.fish_weight << " lbs}" << endl;
                
        count++;
    }
    return;
};