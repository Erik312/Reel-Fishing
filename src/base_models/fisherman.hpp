#pragma once

#include "fish.hpp"

#include <string>
#include <vector>




class Fisherman{
    public:
        string _name;
        vector<Fish> _catchBag;

        Fisherman();
        ~Fisherman();
        void totalCatch();


};