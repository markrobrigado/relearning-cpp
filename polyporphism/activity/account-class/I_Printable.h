/*
 *  I_Printable.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for Printable interface.
*/

#include<iostream>

#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

class I_Printable {
    
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:

    /* Destructor */
    virtual ~I_Printable() = default;
    virtual void print(std::ostream &os) const = 0;
};

#endif
