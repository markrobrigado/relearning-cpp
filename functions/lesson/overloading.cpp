/*
 *  overloading.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Provides information on function overloading.
*/

#include<iostream>

using std::cout;
using std::endl;

int add(int x = 0, int y = 0);
double add(double x = 0.0, double y = 0.0);

int main() {

    /*
     *  Function overloading
     *  
     *  Functions can have the same name but different parameter list.
     *  A type of polymorphism where function work with different data types to 
     *  execute similar behavior.
     *  The compiler must be able to tell the funcions apart based on parameters
     *  and arguments supplied.
    */
    cout << "add(10, 20) = " << add(10, 20) << endl;
    cout << "add(10.0, 20.0) = " << add(10.0, 20.0) << endl;
    cout << "add(10) = " << add(10) << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}
