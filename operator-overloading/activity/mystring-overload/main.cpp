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
using std::boolalpha;

int main() {

    cout << boolalpha << endl;

    MyString str1 {"Bob"};
    MyString str2 {"Alice"};

    cout << (str1 != str2) << endl;
    cout << (str1 < str2) << endl;
    cout << (str1 > str2) << endl;

    str1 += "by";
    cout << str1 << endl;

    MyString str3 = str2;
    cout << (str3 *= 4) << endl;

    cout << (-str3) << endl;

    return 0;
}
