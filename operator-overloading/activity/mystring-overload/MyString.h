/*
 *  MyString.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for MyString class.
*/

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {

    /* Overloaded insertion operator */
    friend std::ostream &operator<<(std::ostream &os, const MyString &obj);

    /* overloaded extraction operator */
    friend std::istream &operator>>(std::istream &is, MyString &obj);

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

    /* toLower operator */
    MyString operator-() const;

    /* Concatenation operator*/
    MyString operator+(const MyString &rhs) const;

    /* Concatenate assign operator*/
    MyString &operator+=(const MyString &rhs);

    /* Repeat operator*/
    MyString operator*(const int num) const;

    /* Repeat assign operator*/
    MyString &operator*=(const int num);

    /* isEqual operator */
    bool operator==(const MyString &rhs) const;

    /* isNotEqual operator */
    bool operator!=(const MyString &rhs) const;

    /* isGreaterThan operator */
    bool operator<(const MyString &rhs) const;

    /* isLessThan operator */
    bool operator>(const MyString &rhs) const;

    /* Destructor */
    ~MyString();

    /* Getter methods */
    int getLength() const;
    const char *getString() const;

    void display() const;
};

#endif