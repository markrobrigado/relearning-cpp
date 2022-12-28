/*
 *  dynamic-sizing.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Provides information on push_back() and pop_back method.
*/

#include<iostream>
#include<conio.h>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

    vector <int> scores {100, 95, 90, 85, 80};
    cout << "vector <int> scores {100, 95, 90, 85, 80}" << endl;

    /*
     *  push_back() method
     *
     *  Adds a new element at the end of the vector, after last element.
     *  Increase the size of the container by 1 iff new vector size > current size.
    */
    int number {0};
    cout << " \nPlease input a number to add: ";
    cin >> number;
    scores.push_back(number);

    cout << "Vector: ";
    for (int i = 0; i < scores.size(); i++) {
        cout << scores.at(i) << " ";
    }

    /*
     *  pop_back() method
     *
     *  Removes the last element of the vector.
     *  Decreases the size of container by 1.
    */
    cout << "\n\nPress any key to remove last element in vector...";
    getch();
    scores.pop_back();
    cout << "\nVector: ";
    for (int i = 0; i < scores.size(); i++) {
        cout << scores.at(i) << " ";
    }

    return 0;
}
