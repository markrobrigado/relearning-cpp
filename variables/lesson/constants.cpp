/*
 *  constants.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Provides information on constants.
*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    /*
     *  Constant
     *
     *  Similar to variables except the value cannot be changed once declared.
     *  `const`, `constexpr`, `enum`, or `#define` is used to declare a constant.
    */
    const double pi {3.1415926};
    float radius {0};

    cout << "Please enter the radius of the circle: ";
    cin >> radius;
    cout << "The diameter of the circle is " << 2 * radius << endl;
    cout << "The circumference of the circle is " << 2 * pi * radius << endl;
    cout << "The area of the circle is " << pi * (radius * radius) << endl;

    return 0;
}
