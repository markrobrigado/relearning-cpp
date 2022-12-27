/*
 *  sizeof.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Provides information on `sizeof` and <climits> / <cfloat>.
*/

#include<iostream>
#include<climits>
#include<cfloat>

using std::cout;
using std::endl;

int main() {

    /*
     *  `sizeof`
     *
     *  `sizeof` operator determines the size (bytes) of a type or variable.
     * 
     *  <climits> and <cfloat>
     *  
     *  climits and cfloat include files contains size and precision information.
     *  about the C++ implementation of the current system. 
    */

    /* Integers */
    cout << "int: " << sizeof(int) << " bytes\t\t" 
         << "MAX: " << INT_MAX << "\t\t\tMIN: "<< INT_MIN << endl;
    cout << "short: " << sizeof(short) << " bytes\t\t" 
         << "MAX: " << SHRT_MAX << "\t\t\tMIN: "<< SHRT_MIN << endl;
    cout << "long: " << sizeof(long) << " bytes\t\t" 
         << "MAX: " << LONG_MAX << "\t\t\tMIN: "<< LONG_MIN << endl;
    cout << "long long: " << sizeof(long long) << " bytes\t" 
         << "MAX: " << LLONG_MAX << "\tMIN: "<< LLONG_MIN << endl;

    /* Floating-point */
    cout << "float: " << sizeof(float) << " bytes\t\t" 
         << "MAX: " << FLT_MAX << "\t\tMIN: "<< FLT_MIN << endl;
    cout << "double: " << sizeof(double) << " bytes\t\t" 
         << "MAX: " << DBL_MAX << "\t\tMIN: "<< DBL_MIN << endl;
    cout << "long double: " << sizeof(long double) << " bytes\t" 
         << "MAX: " << LDBL_MAX << "\t\tMIN: "<< LDBL_MIN << endl;

    /* Characters */
    cout << "char: " << sizeof(char) << " bytes\t\t" 
         << "MAX: " << CHAR_MAX << "\t\t\tMIN: "<< CHAR_MIN << endl;

    /* Boolean */
    cout << "bool: " << sizeof(bool) << " bytes\t\t" << endl;

    return 0;
}