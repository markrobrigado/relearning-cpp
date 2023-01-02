/*
 *  pointer.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on pointers.
*/

#include<iostream>

using std::cout;
using std::endl;

int main() {

    /*
     *  Pointer
     *  
     *  Pointer is a variable whose value is the address of another variable.
     *  Pointer should be of the same type as the variable it is pointing to.
     *  Use names beginning with p as pointer names.
     *  Pointer should always be initialized to NULL.
     *  Use the address of operator (&) to initialize a pointer with the address
     *  of variable.
     *  Use the indirection operator (*) to access value pointed by a pointer.
    */
 
    int x {100};
    cout << "Address of int x is " << &x << endl;
    cout << "Value of int x is " << x << endl;

    int * pX;
    cout << "Value of int *pX is " << pX << endl;
    pX = nullptr;
    cout << "Value of int *pX is " << pX << endl;
    pX = &x;
    cout << "Value of int *pX is " << pX << endl;

    cout << "Value of *pX is " << *pX << endl;

    return 0; 
}
