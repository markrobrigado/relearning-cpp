/*
 *  Account.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for Account class.
*/

#include<iostream>
#include<string>
#include "I_Printable.h"

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account : public I_Printable {
protected:
    static constexpr const char *defName = "Unnamed Account";
    static constexpr const double defBalance = 0.0;

public:
    std::string name;
    double balance;

    /* Default constructor*/
    Account(std::string name = defName, double balance = defBalance);

    /* Destructor */
    virtual ~Account() = default;

    virtual bool withdraw(double amount) = 0;
    virtual bool deposit(double amount) = 0;
    virtual void print(std::ostream &os) const override;
    double getBalance() const;
};

#endif