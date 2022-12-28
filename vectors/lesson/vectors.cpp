/*
 *  vectors.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Provides information on vectors.
*/

#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

    /*
     *  Vector
     *
     *  Vector is a container in the C++ Standard Template Library.
     *  Size can change dynamically during execution time.
     *  Provides bound checking and other functions like sort, reverse, find, etc.
    */
    vector <int> scores {100, 95, 90, 85, 80};

    /* Accessing vectors using array syntax */
    cout << "First score at index 0: " << scores[0] << endl;

    /* Accessing vectors using at() method */
    cout << "Second score at index 1: " << scores.at(1) << endl;

    return 0;
}
