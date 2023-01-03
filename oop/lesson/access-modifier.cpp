/*
 *  access-modifier.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on acess modifiers.
*/

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Player {

/* `private` access modifier is only accessible 
   by members/friends of the class */
private:
    string name;
    int health;
    int xp;

/* `public` access modifier is accessible everywhere */
public:
    void talk(string textToSay);
    bool isDead();
};

int main() {
    
    Player player1;
    /* player1.name = "Bob";   Inaccesible */
    player1.talk("Hello!"); // Accessible

    return 0;
}