/*
 *  MyString.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for MyString class.
*/

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
private:
    /* Pointer to a char[] that holds a C-style string */
    char *str;

public:
    /* Empty constructor */
    MyString();

    /* Overloaded constructor */
    MyString(const char *s);

    /* Copy constructor */
    MyString(const MyString &source);

    /* Move Constructor */
    MyString(MyString &&source);

    /* Copy assignment */
    MyString &operator=(const MyString &rhs);

    /* Move assignment */
    MyString &operator=(MyString &&rhs);

    /* Destructor */
    ~MyString();

    /* Getter methods */
    int getLength() const;
    const char *getString() const;

    void display() const;
};

#endif