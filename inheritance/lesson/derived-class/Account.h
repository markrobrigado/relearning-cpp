/*
 *  Account.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for Account class.
*/

#include<string>

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {

public:
    double balance;
    std::string name;

    /* Empty constructor*/
    Account();

    /* Destructor */
    ~Account();

    void deposit(double amount);
    void withdraw(double amount);
};

#endif