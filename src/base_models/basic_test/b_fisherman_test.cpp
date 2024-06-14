#include "../fisherman.hpp"
#include "assert.h"
#include <typeinfo>
#include <iostream>



int main(int argc, char *argv[]){
	std::cout << "Tester running.....\n";
	Fisherman test_fisherman;
    test_fisherman.name="Test Guy";
	assert(typeid(test_fisherman)==typeid(Fisherman));
	assert(test_fisherman.name != " ");
    assert(test_fisherman.catch_bag.empty() == true);
    std::cout << "\n";
    std::cout << "Test fisherman name: " << test_fisherman.name << "\n";
    std::cout << "\n";
	std::cout << "End test [PASS]\n";

}