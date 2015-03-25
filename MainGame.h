#ifndef MAINGAME_H
#define MAINGAME_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MainGame
{
    public:
        MainGame();

        void gameLoop();

        virtual ~MainGame();


    protected:
    private:
        //bool isWarrior, isMage, isArcher = true;

        string _name;
        int pickedHeroType;

        void printTitle();

        string getName();

        int getHeroType();

        string firstWeapon();

        void beginGame();


};

#endif // MAINGAME_H
