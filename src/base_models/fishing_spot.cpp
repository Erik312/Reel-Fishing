#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "fishing_spot.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;


FishingSpot::FishingSpot(string l_name,string l_description,double l_shoreline){
	forecast_options = {"Sunny","Cloudy","Raining"};
	location_name = l_name;
    current_forecast = randomizer(forecast_options);
    description = l_description;
    shoreline = l_shoreline;

};

FishingSpot::~FishingSpot(){};


string FishingSpot::randomizer(vector<string> f1){
	 int f_size=f1.size();
     srand(time(NULL));
     int random_rng =rand()%f_size;
     return f1[random_rng];
};