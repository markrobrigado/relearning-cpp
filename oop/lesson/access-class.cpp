/*
 *  access-class.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on acessing classes and objects.
*/

#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::string;
using std::vector;

class Player {

/* Access modifier */
public:

    string name;
    int health;
    int xp;

    void talk(string textToSay);
    bool isDead();
};

int main() {

    Player *enemy {nullptr};
    enemy = new Player;

    /* Dereference pointer then use dot operator to access class members */
    (*enemy).name = "Level 1 Boss";

    /* Use the member of pointer operator to access class members */
    enemy->health = 100;

    cout << (*enemy).name << " HP: " << enemy->health;

    return 0;
}
