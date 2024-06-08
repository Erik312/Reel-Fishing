
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "fish.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;


Fish::Fish(){
	spec_type = {"Bass","Blue Gill","Catfish","Carp","Trout","Gyarados"};
	seeded = seed_me();
    fish_species = randomizer(spec_type);
    fish_weight = ((double)rand()) / ((double)RAND_MAX) * 19.9 + 0.1;

};


Fish::~Fish(){
	

};


bool Fish::seed_me(){
	srand(time(NULL));
    return true;
};


string Fish::randomizer(vector<string> v1){
	int v_size=v1.size();
    srand(time(NULL));
    int random_rng =rand()%v_size;
    return v1[random_rng];

};
     
