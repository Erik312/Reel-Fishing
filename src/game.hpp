#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "base_models/fisherman.hpp"
#include "base_models/fish.hpp"
#include "base_models/fishing_spot.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;


class Game{
    public:
        Game();
        ~Game();
        void populateLocations(vector<FishingSpot> &v1);
        void showMenu();
        void showFishingSpotsMenu(vector<FishingSpot> &v1);
        void run();

};