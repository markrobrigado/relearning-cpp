/*
 *  operator-overloading.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on classes and objects.
*/

#include<string>
#include<vector>

using std::string;
using std::vector;

class Player {

    /* Class attributes */
    string name;
    int health;
    int xp;

    /* Class methods */
    void talk(string textToSay);
    bool isDead();
};

int main() {

    /*
    *  Classes 
    *
    *  Classes acts as a blueprint from which objects are created.
    *  A user-defined data type that contains attributes (data) and
    *  methods (function).
    *  Can hide attributes and methods and provide a public interface.
    * 
    *  Objects
    * 
    *  Represents a specific instance of a class.
    *  Each instance has its own identity and can use the defined class methods.
    */

    /* Player objects */
    Player player1;
    Player player2;

    /* Array of Player objects */
    Player players[] {player1, player2};

    /* Pointer to a Player object */
    Player *enemy {nullptr};
    enemy = new Player;

    /* Vector of Players */
    vector<Player> enemies {};
    enemies.push_back(*enemy);

    delete enemy;
    return 0;
}
