/*
 *  Account.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for Account class.
*/

#include<iostream>
#include<string>

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {

    friend std::ostream &operator<<(std::ostream &os, const Account &account);

protected:
    static constexpr const char *defName = "Unnamed Account";
    static constexpr const double defBalance = 0.0;

public:
    std::string name;
    double balance;

    /* Default constructor*/
    Account(std::string name = defName, double balance = defBalance);

    /* Destructor */
    ~Account();

    bool withdraw(double amount);
    bool deposit(double amount);
    double getBalance() const;
};

#endif