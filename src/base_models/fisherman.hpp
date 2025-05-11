#pragma once

#include "fish.hpp"

#include <string>
#include <vector>




class Fisherman{
    public:
        string name;
        vector<Fish> catch_bag;

        Fisherman();
        ~Fisherman();
        void totalCatch();


};