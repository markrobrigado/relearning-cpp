/*
 *  cpp-strings.cpp
 *  Author: Mark Robrigado
 *  Date: 28 December 2022
 *  Description: Provides information on c++ style strings.
*/

#include<iostream>
#include<string>

using std::string;

int main() {

    /*
     *  C++ strings
     *
     *  std::string is a class in the Standard Template Library.
     *  C++ strings are contiguous in memory and dynamically sized.
     *  Work with input and output streams.
     *  Can be easily converted to C-style strings.
    */
    string str1;                        // Empty string
    string str2 {"Bob"};                // Bob
    string str3 {str2};                 // Bob
    string str4 {"Bob-Alice-Eve", 9};   // Bob-Alice
    string str5 {str4, 4, 5};           // Alice
    string str6 (3, 'x');               // xxx
    
    /* Assignment */
    str1 = "C++ Strings";   
    str2 = str1;            // C++ Strings

    /* Concatenation */
    string substr1 {"C++"};
    string substr2 {"is awesome!"};
    string sentence;
    sentence = substr1 + " " + substr2; // C++ is awesome!

    /* Accessing characters */
    str1[0];            // C
    str1.at(1);         // +
    str1[0] = 'c';      // c++ Strings
    str1.at(4) = 's';   // c++ strings

    /*  Comparing
     *
     *  Relational operators (==, !=, >, >=, <, <=) can be used.
     *  Can compare: two std::string objects; 
     *               std::string object and C-style string literal; and 
     *               std::string object and C-style string variable.
    */
    str2 == str3;       // Bob == Bob (True)
    str3 == str4;       // Bob == Bob-Alice (False)
    str3 > str4;        // Bob > Bob-Alice (False)

    /* Substings std::substr() */
    str4 = "Bob-Alice-Eve";
    str4.substr(0, 3);      // Bob
    str4.substr(4, 5);      // Alice
    str4.substr(10, 3);     // Eve

    /* Substings std::find() */
    str4.find("Bob");       // 0
    str4.find("Alice");     // 4
    str4.find("Eve");       // 10
    str4.find("x");         // string::npos

    /* Removing characters */
    str4.erase(0 , 4);      // Alice-Eve
    str4.clear();           // Empty 
    
    /* String length */
    str2.length();          // 3

    /* Input stream */
    std::getline(std::cin, str1);       // Reads input until \n

    return 0;
}