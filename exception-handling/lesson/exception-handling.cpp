/*
 *  exception-handling.cpp
 *  Author: Mark Robrigado
 *  Date: 05 January 2023
 *  Description: Provides information on exception handling.
*/

#include<iostream>

int main() {

    /*
     *  Exceptions
     *
     *  Exception is an object or primitive type that signals that an error has
     *  occured and may be caused by:
     *      Insufficient resources;
     *      Missing resources;
     *      Invalid operations;
     *      Range violations;
     *      Underflows and overflows; and
     *      Illegal data and many others.
     * 
     *  `throw` throws an exception.
     *  `try` block contains code that may throw an exception.
     *  `catch` block contains code that handles the exception.
    */
    double sum {10};
    double total {0.0};
    double average {};

    try {
        if (total == 0) {
            /* Throw an exception */
            throw 0;
        }
        average = sum / total;
    } catch (int &ex) {
        /* Catch the exception thrown in try block */
        std::cerr << "Can't divide by zero" << std::endl; 
    } 
    
    return 0;
}
