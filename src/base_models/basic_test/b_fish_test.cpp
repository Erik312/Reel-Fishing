#include "../fish.hpp"
#include "assert.h"
#include <typeinfo>
#include <iostream>



int main(int argc, char *argv[]){
	std::cout << "Tester running.....\n";
	Fish test_fish;
	assert(typeid(test_fish)==typeid(Fish));
	assert(test_fish._fishSpecies != " ");
	assert(test_fish._fishWeight != '\0');
    assert(test_fish._fishWeight != 0);
    assert(test_fish._fishWeight != 0.0);
    assert(test_fish._fishWeight != 0.00);
    assert(test_fish._fishLength != '\0');
    assert(test_fish._fishLength != 0);
    assert(test_fish._fishLength != 0.0);
    assert(test_fish._fishLength != 0.00);
    std::cout << "\n";
    std::cout << test_fish._fishSpecies << ':' << test_fish._fishWeight << ':' << test_fish._fishLength << "\n";
    std::cout << "\n";
	std::cout << "End test [PASS]\n";

}