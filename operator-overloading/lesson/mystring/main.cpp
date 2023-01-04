/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Sample program using MyString class.
*/

#include<iostream>
#include "MyString.h"

int main() {

    /* Empty constructor */
    MyString emptyString;

    /* Overloaded constructor */
    MyString string1("Bob");
    MyString string2(string1);

    emptyString.display();
    string1.display();
    string2.display();

    return 0;
}
