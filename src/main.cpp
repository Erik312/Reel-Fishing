/*
    REEL FISHING
    A text based fishing game

    written by Erik Ramos


*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "game.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::rand;
using std::srand;




int main(){
    
    Game mainGame;
    mainGame.run();
    return 0;
}