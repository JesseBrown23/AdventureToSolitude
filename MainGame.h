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

        string returnName(){return _name;}



    protected:
    private:
        //bool isWarrior, isMage, isArcher = true;

        string _name;

        //Prints the title thing
        void printTitle();


        int pickedHeroType;

        //Gets users name
        string getName();

        //Function for picking hero type
        int getHeroType();

        //Stores chosen first weapon
        string firstWeapon();
};

#endif // MAINGAME_H
