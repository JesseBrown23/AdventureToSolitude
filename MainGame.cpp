#include "MainGame.h"

MainGame::MainGame(){
    printTitle();
}

void MainGame::gameLoop(){
    getName();
    getHeroType();
    firstWeapon();
    beginGame();
}

void MainGame::printTitle(){
    //Prints title
    string line;
    ifstream title ("title.text");
    if (title.is_open()){
        while ( getline (title,line) ){
        cout << line << '\n';
        }
        title.close();
    }else{
        cout << "Unable to open title file";
    }
}

string MainGame::getName(){

    cout << "\n\n$-------------------------------$" << endl;
    cout << "|Whats your name?: ";
    cin >> _name;
    cout << "$-------------------------------$" << endl;

    return _name;
}

int MainGame::getHeroType(){
    string playerType[3] = {"Warrior", "Mage", "Archer"};

    cout << "\n\n$----------------------------------------------------$" << endl;
    cout << "|What type of hero would you like to be? (Enter 1-3) |" << endl;
    cout << "$----------------------------------------------------$" << endl;
    for(int i = 0; i < 3; i++){
        cout << "|" << i + 1 << "." << playerType[i] << endl;
    }
    cin >> pickedHeroType;

    return pickedHeroType;
}

string MainGame::firstWeapon(){
    string firstWarriorWeapons[2] = {"Dagger", "Axe"};
    string firstMageWeapons[2] = {"Staff", "TODO:"};
    string firstArcherWeapons[2] = {"Short Bow", "Wood Crossbow"};

    int firstWeaponChosenNumber;

    string weaponChosen;

    switch(pickedHeroType){
        case 1:
            cout << "Welcome, " << _name << ", you are a brave Warrior!" << endl;
            cout << "Choose the weapon you'd like to start out with. (Enter 1-2)" << endl;
            for(int i = 0; i < 2; i++){
                cout << i + 1 << "." << firstWarriorWeapons[i] << endl;
            }
            cin >> firstWeaponChosenNumber;
            if(firstWeaponChosenNumber == 1){
                weaponChosen = "Dagger";
            }else{
                weaponChosen = "Axe";
            }
            break;
        case 2:
            cout << "Welcome, " << _name << ", you are a brave Mage!" << endl;
            cout << "Choose the weapon you'd like to start out with. (Enter 1-2)" << endl;
            for(int i = 0; i < 2; i++){
                cout << i + 1 << "." << firstMageWeapons[i] << endl;
            }
            cin >> firstWeaponChosenNumber;
            if(firstWeaponChosenNumber == 1){
                weaponChosen = "Staff";
            }else{
                weaponChosen = "TODO:";
            }
            break;
        case 3:
            cout << "Welcome, " << _name << ", you are a brave Archer!" << endl;
            cout << "Choose the weapon you'd like to start out with. (Enter 1-2)" << endl;
            for(int i = 0; i < 2; i++){
                cout << i + 1 << "." << firstArcherWeapons[i] << endl;
            }
            cin >> firstWeaponChosenNumber;
            if(firstWeaponChosenNumber == 1){
                weaponChosen = "Short Bow";
            }else{
                weaponChosen = "Wood Crossbow";
            }
            break;
    }

    return weaponChosen;
}

void MainGame::beginGame(){
    cout << "Congratulations, You are ready to begin your adventure to Solitude!" << endl;
}

MainGame::~MainGame(){
    //dtor
}
