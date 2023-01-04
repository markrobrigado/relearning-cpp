/*
 *  operator-overloading.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Provides information on operator overloading.
*/

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main() {

    /*  
     *  Operator overloading
     *
     *  Allows traditional operators e.g. +, *, =, etc. to be used with user-
     *  defined types.
     *  Allows user defined types to behave similarly to built-in types.
     *  Precedence and associativity cannot be changed.
     *  Primitive types cannot be overloaded.
     *  New operators cannot be created.
    */
    string s1 {};
    string s2 = "concatenating strings";
    string s3 = "using operator overloading";
    s1 = s2 + " " + s3;
    cout << s1 << endl;

    return 0;
}
