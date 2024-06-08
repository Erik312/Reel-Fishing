#pragma once

#include <string>
#include <vector>


#include "fish.hpp"

class Fisherman{
    public:
        string name;
        vector<Fish> catch_bag;

        Fisherman();
        ~Fisherman();


};