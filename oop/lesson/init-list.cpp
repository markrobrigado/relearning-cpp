/*
 *  init-list.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Provides information on class constructor initializer list.
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
    /* Player class overloaded constructors */
    Player();
    Player(string nameVal, int healthVal, int xpVal);
    ~Player() {}
};

/* Values are assigned not initialized */
Player::Player() {
    name = "none";
    health = 0;
    xp = 0;
}

/* Values initialized using constructor initializer list */
Player::Player(string nameVal, int healthVal, int xpVal) :
    name {nameVal}, health {healthVal}, xp {xpVal} {}

int main() {

    /* Empty constructor*/
    Player player1;

    /* Constructor with 3 args using initializer list*/
    Player player2 ("Bob", 100, 10);

    return 0;
}
