/*
 *  exception-multi-err.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on exception handling from multiple exception.
*/

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

double compute_kml(int kilometer, int liter) {
    /* Throw exceptions */
    if (liter == 0) {
        throw string("err: Division of zero");
    }
    if (kilometer < 0 || liter < 0) {
        throw string("err: Negative values");
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

    /* Try to execute compute_kml() and catch thrown exceptions */
    try {
        double kilometer_per_liter = compute_kml(kilometer, liters);
        cout << "Result: " << kilometer_per_liter << endl; 
    } catch (string &ex) {
        /* Catch the exception thrown by compute_kml() */
        cerr << ex << endl;
    }

    return 0;
}
