/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Sample program using MyString class.
*/

#include<iostream>
#include "MyString.h"

int main() {

    /* Overloaded constructor */
    MyString str1 {"Hello"};

    /* Empty constructor */
    MyString str2;

    /* Copy assignment */
    str2 = str1;

    str2.display();

    return 0;
}
