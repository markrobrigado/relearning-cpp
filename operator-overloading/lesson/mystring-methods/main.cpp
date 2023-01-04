/*
 *  main.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Sample program using MyString class.
*/

#include<iostream>
#include "MyString.h"

using std::cout;
using std::endl;

int main() {

    MyString str1 {"Bob"};
    MyString str2 {" and Alice"};

    /* Concatenation operator */
    MyString str3 = str1 + str2;
    str3.display();

    /* isEqual operator */
    cout << (str1 == str2) << endl;
    cout << (str1 == "Bob") << endl;

    /* toLower operator */
    (-str1).display();

    return 0;
}
