/*
 *  user-defined-exception.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on user defined exception.
*/

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

class DivideByZeroException {};
class NegativeValueException {};

double compute_kml(int kilometer, int liter) {
    /* Throw exceptions */
    if (liter == 0) {
        throw DivideByZeroException();
    }
    if (kilometer < 0 || liter < 0) {
        throw NegativeValueException();
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

      /* Catch the exception thrown by compute_kml() */  
    } catch (const DivideByZeroException &ex) {
        cout << "err: Division by zero" << endl;
    } catch (const NegativeValueException &ex) {
        cout << "err: Negative values" << endl;
    }

    return 0;
}
