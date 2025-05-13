#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;





class Fish{
    public:
        vector<string> specType;
        string _fishSpecies;
        double _fishWeight;
        double _fishLength;
        bool seeded;
        Fish();
        ~Fish();

        bool seed_me();
        string randomizer(vector<string> v1);

};