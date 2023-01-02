/*
 *  memory-allocation.cpp
 *  Author: Mark Robrigado
 *  Date: 02 January 2023
 *  Description: Provides information on memory allocation.
*/

#include<iostream>

using std::cout; 
using std::endl;

int main() {

    /*
     *  Memory allocation
     *  
     *  Dynamic memory allocation is possible only because pointers are available.
     *  Dynamic memory allocation reserves space in a memory area called heap.
     *  Allocated memory should always be released when it is no longer used. 
    */
    int *pInt {nullptr};

    /* Using `new type`/`new type[size]` to allocate memory on the heap */
    pInt = new int;
    cout << "Value of pInt is " << pInt << endl;
    cout << "Value of *pInt is " << *pInt << endl;

    *pInt = 100;
    cout << "Value of *pInt is " << *pInt << endl;

    /* Using `delete`/`delete []` to deallocate memory */
    delete pInt;

    return 0;
}
