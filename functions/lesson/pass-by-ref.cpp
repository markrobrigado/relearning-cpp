/*
 *  pass-by-ref.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Provides information on passing data as reference.
*/

#include<iostream>

using std::cout;
using std::endl;

void swap(int &x, int &y);

int main() {

    /* 
     *  Pass by reference
     * 
     *  Pass by reference pass a pointer as an argument to a function.
     *  Function could also return a pointer as the result.
    */
    int x {10}, y {20};

    cout << "Before swap: x = " << x << "\ty = " << y << endl; 
    swap(x, y);                                   
    cout << "After swap:  x = " << x << "\ty = " << y << endl; 

    return 0;
}

void swap(int &x, int &y) {

    int temp = x;
    x = y;
    y = temp; 
}
