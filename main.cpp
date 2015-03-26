#include <iostream>
#include <string>

#include "MainGame.h"
#include "PlayerClass.h"

using namespace std;


int main(){
    //Creating object
    PlayerClass playerClass;
    MainGame mainGame1;

    //Game loop
    mainGame1.gameLoop();


    return 0;
}
