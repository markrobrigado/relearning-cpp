/*
 *  I_Printable.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Contains the method definition of Printable interface.
*/

#include<iostream>
#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
