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

    /* Overloaded constructor then move assignment */
    str1 = MyString {"Hola"};

    /* Overloaded constructor then move assignment */
    str1 = "Bonjour";

    str1.display();

    return 0;
}
