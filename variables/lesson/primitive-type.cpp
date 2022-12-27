/*
 *  primitive.cpp
 *  Author: Mark Robrigado
 *  Date: 27 December 2022
 *  Description: Provides information on C++ primitive data types.
*/

#include<iostream>

using std::cout;
using std::endl;

int main() {
    
    /*
     *  Integer
     *
     *  Used to represent whole numbers, signed or unsigned.
     * 
     *  Type                            Size / Precision
     *  short / unsigned short          At least 16 bits
     *  int / unsigned                  At least 16 bits
     *  long / unsigned long            At least 32 bits
     *  long long / unsigned long long  At least 64 bits
    */
    int x (-10);
    cout << "int x (" << x << ")" << endl;
    unsigned y (10);
    cout << "unsigned y (" << y << ")" << endl;

    /*
     *  Floating-point
     *  
     *  Used to represent non-integer numbers.
     *  Represented by mantissa and exponent (scientific notation).
     *  Precision and size are compiler dependent.
     * 
     *  Type            Size / Precision (typical)
     *  float           7 decimal digits
     *  double          Greater than float / 15 decimal digits
     *  long double     Greater than double / 19 decimal digits
    */
    float m {9.8};
    cout << "float m {" << m << "}" << endl;
    double n {3.141592};
    cout << "double n {" << n << "}" << endl;

    /*
     *  Character
     *
     *  Used to represrnt single characters (e.g. 'X', 'y', '_').
     *  Wider types are used to represent wide character sets.
     *  
     *  Type        Size / Precision
     *  char        At least 8 bits
     *  char16_t    At least 16 bits
     *  char32_t    At least 32 bits
     *  wchar_t     Represets the largets available character set
    */
    char c = 'c';
    cout << "char c = " << c << endl;

    /*
     *  Boolean
     *
     *  Used to represent true and false.
     *  Zero is false, non-zero us true.
     * 
     *  Type    Size / Precision
     *  bool    8 bits, `true` or `false`
    */
    bool t = true;
    cout << "bool t = " << t << endl;
    bool f = false;
    cout << "bool f = " << f << endl;

    return 0;
}
