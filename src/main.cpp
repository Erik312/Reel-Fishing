/*
    REEL FISHING
    A text based fishing game

    written by Erik Ramos


*/



#include "game.hpp"

#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


const int EXIT=1;
const int PLAYING=2;

int main(){
    int gameOver=PLAYING;
    Game mainGame;

    while (gameOver != EXIT) {
        switch (gameOver){

            case PLAYING:
            {
                int runStatus=mainGame.run();
                if (runStatus == 1) {
                    gameOver=EXIT;
                }
            }

            case EXIT:
            {
                gameOver=EXIT;
            }
        
        }
    }
    return 0;
}