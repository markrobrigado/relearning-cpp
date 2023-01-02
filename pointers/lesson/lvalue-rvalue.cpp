/*
 *  reference.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on l-values and r-values.
*/

#include<iostream>

using std::cout;
using std::endl;

int main() {

    /*
     *  l-values
     *
     *  l-values are values that have names and are addressable.
     *  l-values are also modifiable if they are not constants.
    */
    int x {100};    // x is a valid l-value
    /* 100 = x;        100 is an invalid l-value, non-modifiable */

    /*
     *  r-values
     *  
     *  r-values are values on the RHS of an assignment expression.
     *  r-values are temporary which is intended to be non-modifiable.
    */
    int x {100};    // 100 is a valid r-value
    /* int &ref1 = 10;  10 is an invalid r-value */

    return 0;
}
