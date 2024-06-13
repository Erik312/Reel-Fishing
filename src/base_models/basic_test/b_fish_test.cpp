#include "../fish.hpp"
#include "assert.h"
#include <typeinfo>
#include <iostream>



int main(int argc, char *argv[]){
	std::cout << "Tester running.....\n";
	Fish test_fish;
	assert(typeid(test_fish)==typeid(Fish));
	assert(test_fish.fish_species != " ");
	assert(test_fish.fish_weight != '\0');
    assert(test_fish.fish_weight != 0);
    assert(test_fish.fish_weight != 0.0);
    assert(test_fish.fish_weight != 0.00);
    std::cout << "\n";
    std::cout << test_fish.fish_species << ':' << test_fish.fish_weight << "\n";
    std::cout << "\n";
	std::cout << "End test [PASS]\n";

}