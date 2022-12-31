/*
 *  recursion.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Provides information on recursive functions.
*/

#include<iostream>

using std::cout;
using std::endl;

unsigned long long factorial(int x);

int main() {

    /*
     *  Recursive function
     *
     *  A recursive function is a function that calls itself, directly or 
     *  indirectly through another function.
     *  Recursive problem solving uses a base case then divides the rest of the
     *  problem into subproblmes and do a recursive call.
    */
    cout << "Factorial of 3 is " << factorial(3);
    
    return 0;
}

unsigned long long factorial(int x) {
    if (x == 0) {
        return 1;
    }
    return x * factorial(x - 1);
}
