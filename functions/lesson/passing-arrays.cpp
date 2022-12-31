/*
 *  passing-arrays.cpp
 *  Author: Mark Robrigado
 *  Date: 30 December 2022
 *  Description: Provides information on passing arrays to function.
*/

#include<iostream>

using std::cout;
using std::endl;

void print_array(const int numbers[], size_t size);

int main() {

    /*
     *  Passing arrays
     *
     *  Arrays can be passed to a function by providing square brackets in the 
     *  function definition.
     *  Array elements are not copied, only the address of array is copied.
     *  The function has no idea on how many elements the array contains it only
     *  knows the location of the first element (the name of array).
    */
    int numbers[] {1, 2, 3, 4, 5};
    print_array(numbers, 5);

    return 0;
}

void print_array(const int numbers[], size_t size) {
    /* const keyword prevents the function from modifiying array values */
    for (size_t i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}
