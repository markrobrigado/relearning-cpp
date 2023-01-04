/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Sample program using MyString class.
*/

#include<iostream>
#include "MyString.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

    MyString str1 {"Hello, "};

    MyString str2 {};
    cout << "What is your name? ";
    
    /* Overloaded extraction operator */
    cin >> str2;

    /* Concatenation method with overloaded insertion operator */
    cout << str1 + str2 << endl;

    return 0;
}
