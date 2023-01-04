/*
 *  SavingsAccount.h
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Header file for SavingsAccount class.
*/

#include "Account.h"

#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

/* A type of Account class with interest rate */
class SavingsAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &account);

private:
    static constexpr const char *defName = "Unnamed Savings Account";
    static constexpr const double defBalance = 0.0;
    static constexpr const double defInterestRate = 0.0;

protected:
    double interestRate;

public:
    /* Default constructor */
    SavingsAccount(
        std::string name = defName, 
        double balance = defBalance, 
        double interestRate = defInterestRate);

    /* Destructor */
    ~SavingsAccount();

    bool deposit(double amount);
    /* withdraw() will be inherited from Account class */
};

#endif