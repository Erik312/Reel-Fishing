#include "../fishing_spot.hpp"
#include "assert.h"
#include <typeinfo>
#include <iostream>



int main(int argc, char *argv[]){
	std::cout << "Tester running.....\n";
	FishingSpot test_fishingspot("Honey Hole","Its a cool place to fish",69);
	assert(typeid(test_fishingspot)==typeid(FishingSpot));
	assert(test_fishingspot.location_name != " ");
    assert(test_fishingspot.description != " ");
    assert(test_fishingspot.shoreline != 0);
    std::cout << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot.location_name << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot.description << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot.shoreline << "\n";
    std::cout << "\n";
	std::cout << "End test [PASS]\n";

}