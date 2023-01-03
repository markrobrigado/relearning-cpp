/*
 *  constructor.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Provides information on class constructor and destructor.
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
    Player() {
        cout << "Player instantiated (no args)" << endl;
    }
    
    Player(string name) {
        cout << "Player " << name << " instantiated" << endl;
    }

    Player(string name, int health, int xp) {
        cout << "Player " << name << " instantiated (HP: " << health 
             << " XP: " << xp  << ")" << endl;
    }
    
    /* Player class destructor */
    ~Player() {
        cout << "Player destroyed" << endl;
    }
};

int main() {
    
    /*
     *  Constructor
     *  
     *  Constructor is a special member method that is invoked during object
     *  creation.
     *  It uses the same name as the class with no return type specified.
     *  Constructors can be overloaded.
    */
    Player player1;
    Player player2 {"Bob"};
    Player player3 {"Alice", 100, 10};
    
    /*
     *  Destructor
     *
     *  Destructor is also a special member method that is invoked automatically
     *  when an object is destroyed.
     *  It uses the same name as the class preceeded by a tilde (~).
     *  Only one destructor is allowed and cannot be overloaded.
    */
    Player *enemy = new Player("Level 1 Boss", 150, 300);
    delete enemy;   // Invoke class destructor

    return 0;
}
