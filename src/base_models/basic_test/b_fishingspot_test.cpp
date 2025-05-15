#include "../fishing_spot.hpp"
#include "assert.h"
#include <typeinfo>
#include <iostream>



int main(int argc, char *argv[]){
	std::cout << "Tester running.....\n";
	FishingSpot test_fishingspot("Honey Hole","Its a cool place to fish",69);
	assert(typeid(test_fishingspot)==typeid(FishingSpot));
	assert(test_fishingspot._locationName != " ");
    assert(test_fishingspot._description != " ");
    assert(test_fishingspot._shoreline != 0);
    std::cout << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot._locationName << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot._description << "\n";
    std::cout << "Test fishingspot : " << test_fishingspot._shoreline << "\n";
    std::cout << "\n";
	std::cout << "End test [PASS]\n";

}