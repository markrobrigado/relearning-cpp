/*
 *  MyString.cpp
 *  Author: Mark Robrigado
 *  Date: 03 January 2023
 *  Description: Contains the method definition of MyString class.
*/

#include<cstring>
#include<iostream>
#include "MyString.h"

/* Empty constructor */
MyString::MyString() :
    str{nullptr} {
        str = new char[1];
        *str = '\0';
}

/* Overloaded constructor */
MyString::MyString(const char *s) :
    str{nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
}

/* Copy constructor */
MyString::MyString(const MyString &source) :
    str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

/* Move constructor */
MyString::MyString(MyString &&source) :
    str(source.str) {
        source.str = nullptr;
}

/* Copy assignment */
MyString &MyString::operator=(const MyString &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std:strcpy(str, rhs.str);
    return *this;
}

/* Move assignment */
MyString &MyString::operator=(MyString &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

/* Destructor */
MyString::~MyString() {
    delete [] str;
}

int MyString::getLength() const{
    return std::strlen(str);
}

const char *MyString::getString() const{
    return str;
}

void MyString::display() const {
    std::cout << str << " : " << getLength() <<std::endl;
} 