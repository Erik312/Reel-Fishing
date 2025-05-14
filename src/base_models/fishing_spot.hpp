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


class FishingSpot{
    public:
        string _locationName;
        vector<string> _forecastOptions;
        string _currentForecast;
        string _description;
        double _shoreline;

        FishingSpot(string l_name,string l_description,double l_shoreline);
        ~FishingSpot();

        string randomizer(vector<string> f1);
};
