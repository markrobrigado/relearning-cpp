/*
 *  copy-constructor.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Provides information on copy constructors.
*/

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Player {

 private:
    string name;
    int health;
    int xp;

public:
    /* Player constructor with default parameters */
    Player(string nameVal = "none", int healthVal = 0, int xpVal = 0);

    /* Copy constructor */
    Player(const Player &source);

    string getName();
    int getHealth();
    int getXp();
    ~Player();
};

/* Delegating constructor for Player class */
Player::Player(string nameVal, int healthVal, int xpVal) :
    name {nameVal}, health {healthVal}, xp {xpVal} {
        cout << "Three-args constructor created: " << name << endl;
}

/* Copy constructor for Player class */
Player::Player(const Player &source) :  // `const` protect object from changes
    Player{source.name, source.health, source.xp} {
        cout << "Copy constructor made copy of: " << source.name << endl;
}

Player::~Player() {
    cout << "Player " << name << " destroyed" << endl;
}

string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getXp() {
    return xp;
}

void displayPlayer(Player player);

int main() {

    /*
     *  Copy constructor
     *
     *  Copy constructor copies the value of each data member to the new object.
     *  A default copy constructor is provided by the compiler if not defined.
    */
    Player player1;

    /* displayPlayer uses copy constructor */
    displayPlayer(player1);

    Player player2 {"Bob", 100, 10};
    displayPlayer(player2);

    return 0;
}

void displayPlayer(Player player) {
    cout << "Player name: " << player.getName() << endl;
    cout << "Health: " << player.getHealth() << endl;
    cout << "XP: " << player.getXp() << endl;
}