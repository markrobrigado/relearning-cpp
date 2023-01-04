/*
 *  Account.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for Account class.
*/

#include<iostream>

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {

    friend std::ostream &operator<<(std::ostream &os, const Account &account);

protected:
    double balance;

public:
    /* Empty constructor*/
    Account();

    /* Overloaded constructor */
    Account(double balance);

    /* Destructor */
    ~Account();

    void deposit(double amount);
    void withdraw(double amount);
};

#endif