/*
 *  exception-function.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on exception handling from function.
*/

#include<iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

double compute_kml(int kilometer, int liter) {
    if (liter == 0) {
        /* Throw an exception */
        throw 0;
    }
    return static_cast<double>(kilometer) / liter;
}

int main() {

    cout << "How many kilometers? ";
    int kilometer {};
    cin >> kilometer;

    cout << "How many liters? ";
    int liters {};
    cin >> liters;

    /* Try to execute compute_kml() and catch thrown exception */
    try {
        double kilometer_per_liter = compute_kml(kilometer, liters);
        cout << "Result: " << kilometer_per_liter << endl; 
    } catch (int &ex) {
        /* Catch the exception thrown by compute_kml() */
        cerr << "Cannot divide by zero" << endl;
    }

    return 0;
}
